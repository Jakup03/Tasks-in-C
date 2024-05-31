#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int subtract(const char* number1, const char* number2, char** result);
int add(const char* number1, const char* number2, char** result);
int move(char **txt ,int i){
    while(*(*txt + i)!='\0'){
        *(*txt + i) = *(*txt + i + 1);
        i++;
    }
    return 0;
}
char* reverse(char* text){
    if(text==NULL) return NULL;
    int i=0;
    int ile=0;
    while(*(text+i)!='\0'){
        ile++;
        i++;
    }
    int j=0;
    char pom;
    int k=ile-1;
    if(k%2==0){
        while(j!=k){
            pom=*(text+j);
            *(text+j)=*(text+k);
            *(text+k)=pom;
            j++;
            k--;
        }
    }
    else{
        while(k!=j-1){
            pom=*(text+j);
            *(text+j)=*(text+k);
            *(text+k)=pom;
            j++;
            k--;
        }
    }
    return text;
}
int validate(const char *number){
    if(number==NULL) return -1;
    int i=0;
    if(*number == '\0') return 2;
    if(*number == '-' && *(number + 1)=='\0') return 2;
    if(*number == '-') i = 1;
    if(*number == '0' && isdigit(*(number + 1))) return 2;
    while(*(number+i)!='\0'){
        if(!isdigit(*(number+i))) return 2;
        i++;
    }
    return 0;
}
int porownanie(const char* num1, const char* num2){
    if(num1 == NULL || num2 == NULL) return 2;
    if(validate(num1) != 0 || validate(num2) != 0) return 3;
    if(*num1 != '-' && *num2 == '-') return 1;
    if(*num1 == '-' && *num2 != '-') return -1;
    int len1 = (int)strlen(num1);
    int len2 = (int)strlen(num2);
    if(len2 > len1 && (*num1 != '-' && *num2 != '-')) return -1;
    if(len1 > len2 && (*num1 != '-' && *num2 != '-')) return 1;

    if(*num1 != '-' && *num2 != '-') {
        int i = 0;
        while (i < len1) {
            if ((*(num2 + i) > *(num1 + i))) return -1;
            else if (*(num1 + i) > *(num2 + i)) return 1;
            else i++;
        }
    }
    if(*num1 == '-' && *num2 == '-') {
        int i = 1;
        while (i < len1) {
            if ((*(num2 + i) > *(num1 + i))) return 1;
            else if (*(num1 + i) > *(num2 + i)) return -1;
            else i++;
        }
    }
    return 0;
}
int add(const char* number1, const char* number2, char** result){
    if(number1 == NULL || number2 == NULL || result == NULL) return 1;
    if(validate(number1) != 0 || validate(number2) != 0) return 2;
    const char *firstnum,*secondnum;
    if(*number1 == '-' && *number2 != '-'){
        return subtract(number2,number1 + 1,result);
    }
    else if(*number1 != '-' && *number2 == '-'){
        return subtract(number1,number2 + 1,result);
    }
    int len1,len2;
    len1 = (int)strlen(number1);
    len2 = (int)strlen(number2);
    if(len1 > len2){
        *result = calloc(len1 + 2,sizeof(char));
    }
    else{
        *result = calloc(len2 + 2,sizeof(char));
    }
    if(*result == NULL) return 3;
    int flag = 0;
    if(*number1 == '-' && *number2 == '-'){
        number1++;
        number2++;
        flag = 1;
    }
    if(porownanie(number1,number2) == -1){
        firstnum = number2;
        secondnum = number1;
    }
    else if(porownanie(number1,number2) != -1){
        firstnum = number1;
        secondnum = number2;
    }
    int num1,num2,wynik,pom = 0;
    int i = (int)strlen(firstnum),j = (int) strlen(secondnum);
    int l = 0;
    while(l < (int) strlen(firstnum)){
        num1 = (*(firstnum + i - 1) - '0');
        if(j <= 0) num2 = 0;
        else num2 = (*(secondnum + j - 1) - '0');
        wynik = abs(num1 + num2);
        if(l == (int) strlen(firstnum) && wynik == 0){
            **result = '0';
            *(*result + 1) = '\0';
            return 0;
        }
        wynik = wynik + pom;
        if(wynik < 10) pom = 0;
        else if(wynik >= 10){
            wynik = wynik % 10;
            pom = 1;
        }
        *(*result + l) = (char)(wynik + '0');
        i--;
        j--;
        l++;
    }
    if(pom == 1){
        *(*result + strlen(*result)) = (char)(pom + '0');
    }
    if(flag == 1){
        *(*result + strlen(*result)) = '-';
    }
    reverse(*result);
    return 0;
}
int subtract(const char* number1, const char* number2, char** result){
    if(number1 == NULL || number2 == NULL || result == NULL) return 1;
    if(validate(number1) != 0 || validate(number2) != 0) return 2;
    const char *firstnum,*secondnum;
    if(*number1 == '-' && *number2 != '-'){
        add(number1 + 1,number2,result);
        if(*result == NULL) return 3;
        char *pom1;
        pom1 = (char *)realloc(*result,sizeof(char) * (strlen(*result) + 2));
        if(pom1 == NULL){
            free(*result);
            *result = NULL;
            return 3;
        }
        int lenght = (int) strlen(pom1);
        *result = pom1;
        *result = reverse(*result);
        *(*result + lenght) = '-';
        *(*result + lenght + 1) = '\0';
        *result = reverse(*result);
        return 0;
    }
    else if(*number1 != '-' && *number2 == '-'){
        return add(number1,number2 + 1,result);
    }
    int len1 = (int)strlen(number1);
    int len2 = (int)strlen(number2);
    if(len1 > len2){
        *result = (char *)calloc(strlen(number1) + 2,sizeof(char));
    }
    else{
        *result = (char *)calloc(strlen(number2) + 2,sizeof(char));
    }
    if(*result == NULL) return 3;
    int flag = 0, znak = 0;
    if(*number1 == '-' && *number2 == '-'){
        number1++;
        number2++;
        znak = 1;
    }
    if(porownanie(number1,number2) == -1){
        firstnum = number2;
        secondnum = number1;
        if(!znak) flag = 1;
    }
    else if(porownanie(number1,number2) != -1){
        firstnum = number1;
        secondnum = number2;
        if(znak) flag = 1;
    }
    int num1,num2,wynik,pom = 0;
    int i = (int)strlen(firstnum);
    int j = (int) strlen(secondnum);
    int l = 0;
    while(l < (int) strlen(firstnum)){
        num1 = (*(firstnum + i - 1) - '0');
        if(j <= 0) num2 = 0;
        else num2 = (*(secondnum + j - 1) - '0');
        num1 = num1 - pom;
        wynik = num1 - num2;
        if(l == (int) strlen(firstnum) && wynik == 0){
            **result = '0';
            *(*result + 1) = '\0';
            return 0;
        }
        if(wynik < 0){
            wynik = num1 + 10 - num2;
            pom = 1;
        }
        else pom = 0;
        *(*result + l) = (char)(wynik + '0');
        i--;
        j--;
        l++;
    }
    i = (int)strlen(*result) - 1;
    while(i>0){
        if(*(*result + i) != '0') break;
        else *(*result + i) = '\0';
        i--;
    }
    if(flag == 1){
        *(*result + strlen(*result)) = '-';
    }
    reverse(*result);
    return 0;
}
int multiply(const char* number1, const char* number2, char** result){
    if(number1 == NULL || number2 == NULL || result == NULL) return 1;
    if(validate(number1) != 0 || validate(number2) != 0) return 2;
    int num1,num2;
    if(*number1 == '0' || *number2 == '0') {
        *result = calloc(2, sizeof(char));
        if(*result == NULL) return 3;
        **result = '0';
        *(*result + 1) = '\0';
        return 0;
    }
    int flag = 0;
    if (*number1 == '-' && *number2 == '-') {
        num1 = (int)strlen(number1 + 1);
        num2 = (int)strlen(number2 + 1);
        number1++;
        number2++;
    }
    else if (*number1 == '-') {
        num1 = (int)strlen(number1 + 1);
        num2 = (int)strlen(number2);
        number1++;
        flag = 1;
    }
    else if (*number2 == '-') {
        num1 = (int)strlen(number1);
        num2 = (int)strlen(number2 + 1);
        number2++;
        flag = 1;
    }
    else{
        num1 = (int)strlen(number1);
        num2 = (int)strlen(number2);
    }
    int wynik=0,pom=0;
    int k=0;
    if(flag == 1) {
        *result = calloc(num2 + num1 + 2, sizeof(char));
    }
    else{
        *result = calloc(num2 + num1 + 1, sizeof(char));
    }
    if(*result == NULL) return 3;
    int l;
    if(flag == 1){
        for(l=0;l<num2 + num1;l++){
            *(*result + l) = '0';
        }
    }
    else{
        for(l=0;l<num2 + num1;l++){
            *(*result + l) = '0';
        }
    }
    num2 -= 1;
    while(num2 >= 0){
        num1 = (int) strlen(number1) - 1;
        l=0;
        pom = 0;
        while(num1 >= 0){
            wynik = (*(number2 + num2)-'0') * (*(number1 + num1) - '0') + pom + (*(*result + l + k) - '0');
            pom = wynik / 10;
            wynik = wynik % 10;
            *(*result + l + k) = (char)(wynik + '0');
            l++;
            num1--;
        }
        if(pom != 0) {
            *(*result + l + k) += (char)pom;
        }
        k++;
        num2--;
    }
    if (flag == 1) strcat(*result,"-");
    reverse(*result);
    if(**result == '0') move(result,0);
    if(*(*result + 1) == '0' && **result == '-'){
        move(result,1);
    }
    return 0;
}
int validate_expression(const char *expr){
    if(expr == NULL || strlen(expr) == 0) return 1;
    int i=0;
    int j = 0;
    while(*(expr + i) != '\0'){
        if(isdigit(*(expr + i))) j++;
        i++;
    }
    if(j == i) return 0;
    i=0;
    while(*(expr + i) != '\0'){
        if(isdigit(*(expr + i))) i++;
        else{
            if(*(expr + i) == '+' || *(expr + i) == '-' || *(expr + i) == '*') i++;
            else return 1;
        }
    }
    i=0;
    if(*expr == '+' || *expr == '*') return 1;
    while(*(expr + i) != '\0'){
        if(isdigit(*(expr + i))) i++;
        else if(*(expr + i) == '+' && (isdigit(*(expr + i + 1)) || *(expr + i + 1) == '-')) i++;
        else if(*(expr + i) == '-' && (isdigit(*(expr + i + 1)) || *(expr + i + 1) == '-')) i++;
        else if(*(expr + i) == '-' && isdigit(*(expr + i + 1))) i++;
        else if(*(expr + i) == '*' && (isdigit(*(expr + i + 1)) || *(expr + i + 1) == '-')) i++;
        else return 1;
    }
    return 0;
}
int calculate(const char* expr, char **result){
    if(expr == NULL || result == NULL) return 1;
    if(validate_expression(expr) == 1) return 2;
    int len = (int)strlen(expr);
    *result=calloc(strlen(expr)+1, sizeof(char));
    if(!*result) return 3;
    int i=0;
    char *znak=strpbrk(expr + 1, "+-*"), *num, *temp;
    if(!znak){
        strcpy(*result,expr);
        return 0;
    }
    else strncpy(*result, expr, znak - expr);
    char sign;
    while(1){
        if(!znak) break;
        i+= (int)(znak - (expr + i)) + 1;
        sign=*znak;
        if(sign == 0) break;
        znak+=1;
        if(*(znak) == '-') znak+=1;
        znak=strpbrk(znak, "+-*");
        if(!znak) {
            num=calloc(len-i+1, sizeof(char));
            strncpy(num,expr+i,len-i);
        }
        else {
            num=calloc(znak - (expr + i) + 1, sizeof(char));
            strncpy(num,expr+i, znak - (expr + i));
        }
        switch(sign){
            case '+': {
                temp = strdup(*result);
                free(*result);
                if (add(temp, num, result) != 0) {
                    free(temp);
                    free(num);
                    return 3;
                }
                free(temp);
                free(num);
                break;
            }
            case '-':{
                temp = strdup(*result);
                free(*result);
                if (subtract(temp, num, result) != 0) {
                    free(temp);
                    free(num);
                    return 3;
                }
                free(temp);
                free(num);
                break;
            }
            case '*':{
                temp = strdup(*result);
                free(*result);
                if (multiply(temp, num, result) != 0){
                    free(temp);
                    free(num);
                    return 3;
                }
                free(temp);
                free(num);
                break;
            }
            default:{
                free(num);
                return 0;
            }
        }
    }
    return 0;
}

int main() {
    char *expr = calloc(501,sizeof(char));
    if(expr == NULL){
        printf("Failed to allocate memory");
        return 8;
    }
    printf("Podaj wyrazenie: ");
    scanf("%500[^\n]", expr);
    char *wynik;
    int res = calculate(expr,&wynik);
    if(res == 2){
        printf("Incorrect input");
        free(expr);
        return 1;
    }
    else if(res == 3){
        printf("Failed to allocate memory");
        free(expr);
        return 8;
    }
    else{
        printf("%s",wynik);
        free(wynik);
        free(expr);
    }
    return 0;
}


