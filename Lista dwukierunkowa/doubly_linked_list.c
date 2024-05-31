
// Created by root on 6/2/22.
//

#include "doubly_linked_list.h"
#include <stdlib.h>
#include <stdio.h>
//#include "tested_declarations.h"
//#include "rdebug.h"


struct doubly_linked_list_t* dll_create(){
    struct doubly_linked_list_t *dl = calloc(1,sizeof(struct doubly_linked_list_t));
    if(dl == NULL) return NULL;
    dl->head = NULL;
    dl->tail = NULL;
    return dl;
}

int dll_push_back(struct doubly_linked_list_t* dll, int value){
    if(dll == NULL) return 1;
    struct node_t *a = calloc(1,sizeof(struct node_t));
    if(a == NULL) return 2;
    a->data = value;
    a->next = NULL;
    a->prev = NULL;
    if(dll->head == NULL){
        dll->head = a;
        dll->tail = dll->head;
    }
    else{
        dll->tail->next = a;
        a->next = NULL;
        a->prev = dll->tail;
        dll->tail = a;
    }
    return 0;
}
int dll_push_front(struct doubly_linked_list_t* dll, int value){
    if(dll == NULL) return 1;
    struct node_t *a = calloc(1,sizeof(struct node_t));
    if(a == NULL) return 2;
    a->data = value;
    a->prev = NULL;
    if(dll->head == NULL){
        dll->head = a;
        dll->tail = dll->head;
    }
    else{
        a->next = dll->head;
        dll->head->prev = a;
        dll->head = a;
    }
    return 0;
}
int dll_pop_front(struct doubly_linked_list_t* dll, int *err_code){
    if(dll == NULL || dll->head == NULL || dll->tail == NULL){
        if(err_code != NULL) *err_code = 1;
        return 123;
    }
    int value = dll->head->data;
    struct node_t * a = dll->head->next;
    if(a == NULL) {
        free(dll->head);
        dll->head->prev = NULL;
        if(err_code != NULL) *err_code = 0;
        dll->head = NULL;
        dll->tail = NULL;
        return value;
    }
    free(dll->head);
    a->prev = NULL;
    dll->head = a;
    if (dll->head == NULL) {
        dll->tail = NULL;
    }
    if(err_code != NULL) *err_code = 0;
    return value;
}
int dll_pop_back(struct doubly_linked_list_t* dll, int *err_code){
    if(dll == NULL || dll->head == NULL){
        if(err_code != NULL) *err_code = 1;
        return 123;
    }
    int value;
    struct node_t *a = dll->tail->prev;
    if(a == NULL){
        value = dll->head->data;
        free(dll->head);
        dll->head = NULL;
        dll->tail = NULL;
    }
    else {
        value = dll->tail->data;
        free(dll->tail);
        a->next = NULL;
        dll->tail = a;
    }
//    if(dll->tail->prev != NULL){
//        dll->tail->prev->next = NULL;
//    }
    if(err_code != NULL) *err_code = 0;
    return value;
}

int dll_back(const struct doubly_linked_list_t* dll, int *err_code){
    if(dll == NULL || dll->head == NULL){
        if(err_code != NULL) *err_code = 1;
        return 123;
    }
    int value = dll->tail->data;
    if(err_code != NULL) *err_code = 0;
    return value;
}
int dll_front(const struct doubly_linked_list_t* dll, int *err_code){
    if(dll == NULL || dll->head == NULL){
        if(err_code != NULL) *err_code = 1;
        return 123;
    }
    int value = dll->head->data;
    if(err_code != NULL) *err_code = 0;
    return value;
}

struct node_t* dll_begin(struct doubly_linked_list_t* dll){
    if(dll == NULL || dll->head == NULL) return NULL;
    return dll->head;
}
struct node_t* dll_end(struct doubly_linked_list_t* dll){
    if(dll == NULL || dll->head == NULL) return NULL;
    return dll->tail;
}

int dll_size(const struct doubly_linked_list_t* dll){
    if(dll == NULL) return -1;
    int count=0;
    struct node_t *a = dll->head;
    while(a != NULL){
        count++;
        a = a->next;
    }
    return count;
}
int dll_is_empty(const struct doubly_linked_list_t* dll){
    if(dll == NULL) return -1;
    if(dll->tail == NULL && dll->head == NULL) return 1;
    else return 0;
}

int dll_at(const struct doubly_linked_list_t* dll, unsigned int index, int *err_code){
    if(dll == NULL || dll->head == NULL || (int)index >= dll_size(dll)) {
        if (err_code != NULL) *err_code = 1;
        return 123;
    }
    struct node_t *a = dll->head;
    for(int i=0;i < (int)index;i++){
        a = a->next;
    }
    if(err_code != NULL) *err_code = 0;
    return a->data;
}

int dll_insert(struct doubly_linked_list_t* dll, unsigned int index, int value){
    if(dll == NULL || index > (unsigned int)dll_size(dll)) return 1;
    if(index == 0) {
        if(dll_push_front(dll,value) == 2){
            return 2;
        }
    }
    else if(index < (unsigned int)dll_size(dll)){
        struct node_t *a = dll->head;
        for(unsigned int i=1;i<index;i++){
            a = a->next;
        }
        struct node_t *c = calloc(1,sizeof(struct node_t));
        if(c == NULL) return 2;
        c->data = value;
        struct node_t* b = a->next;
        c->next = a->next;
        a->next = c;
        c->prev = a;
        b->prev = c;

    }
    else {
        if(dll_push_back(dll,value) == 2) return 2;
    }
    return 0;
}
int dll_remove(struct doubly_linked_list_t* dll, unsigned int index, int *err_code){
    if(dll == NULL || index >= (unsigned int)dll_size(dll) || dll->head == NULL) {
        if(err_code != NULL) *err_code = 1;
        return 123;
    }
    int error;
    int temp;
    if(index == 0){
        temp = dll_pop_front(dll,&error);
        if(err_code != NULL){
            *err_code = 0;
        }
    }
    else if((int)index != dll_size(dll) - 1) {
        struct node_t *a = dll->head;
        for(int i=0;i<(int)index;i++){
            a = a->next;
        }
        temp = a->data;
        a->prev->next = a->next;
        a->next->prev = a->prev;
        free(a);
    }
    else {
        temp = dll_pop_back(dll,&error);
        if(err_code != NULL){
            *err_code = 0;
        }
    }
    if(err_code != NULL) *err_code = 0;
    return temp;
}

void dll_clear(struct doubly_linked_list_t* dll){
    if(dll == NULL || dll->head == NULL) return;
    struct node_t *a = dll->head;
    struct node_t *pom;
    while(a != NULL){
        pom = a->next;
        free(a);
        a = pom;
    }
    dll->head = a;
    dll->tail = a;
}

void dll_display(const struct doubly_linked_list_t* dll){
    if(dll == NULL) return;
    struct node_t *a = dll->head;
    while(a!=NULL){
        printf("%d ", a->data);
        a = a->next;
    }
}
void dll_display_reverse(const struct doubly_linked_list_t* dll){
    if(dll == NULL) return;
    struct node_t *a = dll->tail;
    while(a!=NULL){
        printf("%d ", a->data);
        a = a->prev;
    }
}

