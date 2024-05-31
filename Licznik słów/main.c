#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include<ctype.h>


int* count_words(const char *filename, int *err_code, int N, ...) {
    if(filename == NULL || N < 1){
        if(err_code != NULL){
            *err_code = 1;
        }
        return NULL;
    }
    FILE *plik = fopen(filename,"r");
    if(plik == NULL){
        if(err_code != NULL){
            *err_code = 2;
        }
        return NULL;
    }
    int *his = calloc(N,sizeof(int));
    if(his == NULL){
        if(err_code != NULL){
            *err_code = 3;
        }
        fclose(plik);
        return NULL;
    }
    int count=0;
    char *wyraz1;
    int index = 0;
    int flag = 0;
    int pom;
    int k=0;
    va_list tab;
    va_start(tab,N);
    for(int i=0;i<N;i++){
        wyraz1 = va_arg(tab,char*);
        fseek(plik,0,SEEK_SET);
        while(!feof(plik)){
            int zm = ftell(plik);
            do{
                pom = fgetc(plik);
                if(isalpha(pom)){
                    index++;
                }
                if(feof(plik)) break;
            }while(isalpha(pom));
            if((int)strlen(wyraz1) == index){
                fseek(plik,zm,SEEK_SET);
                int j=0;
                while(j<index){
                    pom = fgetc(plik);
                    if(*(wyraz1 + j) == pom) flag++;
                    j++;
                }
                if(flag == (int)strlen(wyraz1)) count++;
                flag = 0;
            }
            index=0;
        }
        *(his + k) = count;
        k++;
        count = 0;
    }
    va_end(tab);
    if(err_code != NULL){
        *err_code = 0;
    }
    fclose(plik);
    return his;
}
int main(int N, char **tab) {
    if(N < 3){
        printf("Not enough arguments");
        return 9;
    }
    int err;
    int i=2;
    do{
        int* counts = count_words(*(tab + 1), &err, 1,*(tab + i));
        if(err == 3){
            printf("Failed to allocate memory");
            return 8;
        }
        else if(err == 2){
            printf("Couldn't open file");
            return 4;
        }
        else{
            printf("%d\n",*(counts));
            free(counts);
        }
        i++;
    }while(i<N);
    return 0;
}

