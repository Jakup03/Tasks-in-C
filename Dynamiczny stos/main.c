#include <stdio.h>
#include "stack.h"



int main(int ile, char **tab) {
    if(ile < 2){
        printf("Not enough arguments");
        return 9;
    }
    struct stack_t *stack;
    for(int i=1;i<ile;i++){
        int res = stack_load(&stack,*(tab + i));
        if(res != 0){
            if(res == 2) {
                printf("Couldn't open file %s\n", *(tab + i));
                continue;
            }
            if(res == 3){
                printf("Failed to allocate memory");
                return 8;
            }
            if(res == 1) continue;
        }
        res = stack_save(stack,*(tab + i));
        if(res == 2){
            printf("Couldn't create file\n");
            stack_destroy(&stack);
            return 5;
        }
        else if(res == 0) {
            printf("File %s saved\n",*(tab + i));
            stack_destroy(&stack);
        }
    }
    return 0;
}


