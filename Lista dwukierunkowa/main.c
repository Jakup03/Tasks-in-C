#include <stdio.h>
#include "doubly_linked_list.h"
#include <stdlib.h>
//#include "tested_declarations.h"
//#include "rdebug.h"


int main() {
    struct doubly_linked_list_t *a=dll_create();
    if(a == NULL){
        printf("Failed to allocate memory");
        return 8;
    }
    int wybor, liczba, error;
    while (1){
        printf("Co chcesz zrobic? ");
        if(scanf("%d",&wybor) != 1){
            printf("Incorrect input");
            dll_clear(a);
            free(a);
            return 1;
        }
        switch (wybor) {
            case 0:{
                dll_clear(a);
                free(a);
                return 0;
            }
            case 1:{
                printf("Podaj liczbe ");
                if(scanf("%d",&liczba) != 1){
                    printf("Incorrect input");
                    dll_clear(a);
                    free(a);
                    return 1;
                }
                if(dll_push_back(a, liczba) == 2){
                    printf("Failed to allocate memory");
                    dll_clear(a);
                    free(a);
                    return 8;
                }
                break;
            }
            case 2:{
                int res=dll_pop_back(a, &error);
                if(error == 1){
                    printf("List is empty\n");
                    break;
                }
                printf("%d\n",res);
                break;
            }
            case 3:{
                printf("Podaj liczbe ");
                if(scanf("%d",&liczba) != 1){
                    printf("Incorrect input");
                    dll_clear(a);
                    free(a);
                    return 1;
                }
                if(dll_push_front(a, liczba) == 2){
                    printf("Failed to allocate memory");
                    dll_clear(a);
                    free(a);
                    return 8;
                }
                break;
            }
            case 4:{
                int res=dll_pop_front(a, &error);
                if(error == 1){
                    printf("List is empty\n");
                    break;
                }
                printf("%d\n",res);
                break;
            }
            case 5:{
                printf("Podaj liczbe ");
                if(scanf("%d",&liczba) != 1){
                    printf("Incorrect input");
                    dll_clear(a);
                    free(a);
                    return 1;
                }
                unsigned int index;
                printf("Podaj indeks: ");
                if(scanf("%u",&index)!=1){
                    printf("Incorrect input");
                    dll_clear(a);
                    free(a);
                    return 1;
                }
                int res;
                res = dll_insert(a, index, liczba);
                if(res==1){
                    printf("Index out of range\n");
                    break;
                }
                if(res==2){
                    printf("Failed to allocate memory");
                    dll_clear(a);
                    free(a);
                    return 8;
                }
                break;
            }
            case 6:{
                unsigned int index;
                if(dll_is_empty(a)){
                    printf("List is empty\n");
                    break;
                }
                printf("Podaj indeks: ");
                if(scanf("%u",&index)!=1){
                    printf("Incorrect input");
                    dll_clear(a);
                    free(a);
                    return 1;
                }
                int res=dll_remove(a, index, &error);
                if(error == 1){
                    printf("Index out of range\n");
                } else printf("%d\n",res);
                break;
            }
            case 7:{
                int res=dll_back(a, &error);
                if(error == 1){
                    printf("List is empty\n");
                    break;
                }
                else{
                    printf("%d\n",res);
                    break;
                }
            }
            case 8:{
                int res=dll_front(a, &error);
                if(error == 1){
                    printf("List is empty\n");
                    break;
                }
                else{
                    printf("%d\n",res);
                    break;
                }
            }
            case 9:{
                printf("%d\n",dll_is_empty(a));
                break;
            }
            case 10:{
                printf("%d\n",dll_size(a));
                break;
            }
            case 11:{
                dll_clear(a);
                break;
            }
            case 12:{
                if(dll_is_empty(a)){
                    printf("List is empty\n");
                    break;
                }
                unsigned int index;
                printf("Podaj indeks: ");
                if(scanf("%u",&index)!=1){
                    printf("Incorrect input");
                    dll_clear(a);
                    free(a);
                    return 1;
                }
                int res = dll_at(a, index, &error);
                if(error == 1){
                    printf("Index out of range\n");
                }
                else printf("%d\n",res);
                break;
            }
            case 13:{
                if(dll_is_empty(a)){
                    printf("List is empty");
                }
                else dll_display(a);
                printf("\n");
                break;
            }
            case 14:{
                if(dll_is_empty(a)){
                    printf("List is empty");
                }
                else dll_display_reverse(a);
                printf("\n");
                break;
            }
            default:{
                printf("Incorrect input data\n");
            }
        }
    }
}


