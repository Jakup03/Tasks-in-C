//
// Created by root on 5/30/22.
//

#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int stack_init(struct stack_t **stack){
    if(stack == NULL) return 1;
    *stack = calloc(1,sizeof(struct stack_t));
    if(*stack == NULL){
        return 2;
    }
    return 0;
}
int stack_push(struct stack_t **stack, char *value){
    if(stack == NULL) return 1;
    struct stack_t *pom;
    struct stack_t *a = calloc(1,sizeof(struct stack_t));
    if(a == NULL) return 2;
    if(*stack == NULL){
        a->prev = NULL;
        a->sentence = value;
        (*stack) = a;
    }
    else{
        pom = (*stack);
        (*stack) = a;
        a->sentence = value;
        (*stack)->prev = pom;
    }
    return 0;
}
char *stack_pop(struct stack_t **stack, int *err_code){
    if(stack == NULL || (*stack) == NULL){
        if(err_code != NULL) *err_code = 1;
        return NULL;
    }
    struct stack_t *a = (*stack);
    char *res = (*stack)->sentence;
    (*stack) = a->prev;
    if(err_code != NULL) *err_code = 0;
    free(a);
    return res;
}
void stack_destroy(struct stack_t **stack){
    if(stack == NULL) return;
    struct stack_t *a = (*stack);
    struct stack_t *b;
    while(a != NULL){
        b = a->prev;
        free(a->sentence);
        free(a);
        a = b;
    }
    (*stack) = NULL;
}
int stack_load(struct stack_t **stack, const char *filename){
    if(stack == NULL || filename == NULL) return 1;
    if(*stack != NULL){
        return 1;
    }
    FILE *plik = fopen(filename, "r");
    if(plik == NULL) return 2;
    long pom,count;
    int res;
    while(!feof(plik)){
        pom=  ftell(plik);
        while(fgetc(plik) != '.' && !feof(plik));
        if(feof(plik)) break;
        count = ftell(plik) - pom;
        char* temp1 = calloc(count + 1, sizeof(char));
        if(temp1 == NULL){
            fclose(plik);
            stack_destroy(stack);
            return 3;
        }
        fseek(plik, pom, SEEK_SET);
        for(long i=0;i<count;i++){
            *(temp1 + i)=(char)fgetc(plik);
        }
        res=stack_push(stack, temp1);
        if(res==2){
            free(temp1);
            stack_destroy(stack);
            fclose(plik);
            return 3;
        }
    }
    fclose(plik);
    return 0;
}
int stack_save(const struct stack_t *stack, const char *filename){
    if(stack == NULL || filename == NULL) return 1;
    FILE *plik = fopen(filename,"w");
    if(plik == NULL) return 2;
    struct stack_t *a = stack->prev;
    fprintf(plik,"%s",stack->sentence);
    while(a != NULL){
        fprintf(plik,"%s",a->sentence);
        a = a->prev;
    }
    fclose(plik);
    return 0;
}


