#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include "tested_declarations.h"
#include "rdebug.h"
#include "tested_declarations.h"
#include "rdebug.h"
#include "tested_declarations.h"
#include "rdebug.h"
#include "tested_declarations.h"
#include "rdebug.h"
#include "tested_declarations.h"
#include "rdebug.h"

struct point_t {
    int x;
    int y;
};
int charnaint(char s)
{
    int i=0;
    i=i*10 + s - '0';
    return i;
}
int ile_cyfr(int liczba){
    int i=0;
    if(liczba == 0) return 1;
    while(liczba > 0){
        liczba /= 10;
        i++;
    }
    return i;
}

int ile_przed_dot(float liczba){
    if(liczba == 0) return 1;
    double temp = liczba;
    int i=0;
    while(temp >= 1){
        temp /= 10;
        i++;
    }
    return i;
}
int my_printf(char* format,...){
    char *pom;
    char *a;
    int temp;
    struct point_t temp1;
    double temp2;
    int count=0;
    va_list tab;
    va_start(tab,format);
    pom = format;
    int i=0;
    while(*(pom+i) != '\0'){
        if(*(pom + i) == '%' && *(pom + i + 1) == 'd'){
            temp = va_arg(tab,int);
            if(temp < 0){
                temp *= -1;
                putchar('-');
                count++;
            }
            int k = ile_cyfr(temp);
            do{
                putchar((temp/(int)pow(10, k - 1)) + '0');
                temp -= temp / ((int)pow(10, k - 1)) * (int)pow(10, k - 1);
                k--;
                count++;
            }while(k > 0);
        }
        else if(*(pom + i) == '%' && *(pom + i + 1) == 's'){
            a = va_arg(tab,char*);
            for(int k=0;k < (int)strlen(a);k++){
                putchar(*(a + k));
            }
            count += (int)strlen(a);
        }
        else if(*(pom + i) == '%' && *(pom + i + 1) == 'p'){
            temp1 = va_arg(tab,struct point_t);
            putchar('(');
            if(temp1.x < 0){
                temp1.x *= -1;
                putchar('-');
                count++;
            }
            int k = ile_cyfr(temp1.x);
            do{
                putchar((temp1.x/(int)pow(10, k - 1)) + '0');
                temp1.x -= temp1.x / ((int)pow(10, k - 1)) * (int)pow(10, k - 1);
                k--;
                count++;
            }while(k > 0);
            putchar(' ');
            if(temp1.y < 0){
                temp1.y *= -1;
                putchar('-');
                count++;
            }
            k = ile_cyfr(temp1.y);
            do{
                putchar((temp1.y/(int)pow(10, k - 1)) + '0');
                temp1.y -= temp1.y / ((int)pow(10, k - 1)) * (int)pow(10, k - 1);
                k--;
                count++;
            }while(k > 0);
            putchar(')');
            count+=3;
        }
        else if(*(pom + i) == '%' && *(pom + i + 1) == 'f'){
            temp2 = va_arg(tab,double);
            if(temp2 < 0){
                temp2 *= -1;
                putchar('-');
                count++;
            }
            int l = ile_przed_dot(temp2);
            int pomk = 5;
            int liczba = (int)temp2;
            do{
                putchar((liczba/(int)pow(10, l - 1)) + '0');
                liczba -= liczba / ((int)pow(10, l - 1)) * (int)pow(10, l - 1);
                l--;
                count++;
            }while(l > 0);
            putchar('.');
            count++;
            temp2 -= (int)temp2;
            temp2 *= (float)pow(10,5);
            int zm = (int)temp2;
            do{
                putchar((zm / (int) pow(10, pomk - 1)) + '0');
                zm = zm % (int)pow(10,pomk - 1);
                count++;
                pomk--;
            }while(pomk > 0);
        }
        else if((*(pom + i - 1) != '%' && *(pom + i) != 'd') || (*(pom + i - 1) != '%' && *(pom + i) != 's') || (*(pom + i - 1) != '%' && *(pom + i) != 'f') || (*(pom + i - 1) != '%' && *(pom + i) != 'p')){
            putchar(*(pom + i));
            count++;
        }
        i++;
    }
    va_end(tab);
    return count;
}
int wczytajint(int *temp){
    int j=0;
    int flag = 0;
    char a;
    while(isdigit(a = (char)getchar()) || a == '-'){
        if(a == '-') {
            flag = 1;
            continue;
        }
        if(j > 0) *temp *= 10;
        *temp += charnaint(a);
        j++;
    }
    if(flag == 1) *temp *= -1;
    if(isalpha(a) && j == 0) return 1;
    return 0;
}
int wczytajfloat(double *temp2){
    int j=0;
    int flag = 0;
    int dot = 0;
    int l=0;
    char a;
    while(isdigit(a = (char)getchar()) || a == '-' || a == '.'){
        if(a == '-') {
            flag = 1;
            continue;
        }
        if(a == '.'){
            dot = 1;
            continue;
        }
        if(dot == 0){
            if(j > 0) *temp2 *= 10;
            *temp2 += charnaint(a);
            j++;
        }
        else{
            if(j > 0) *temp2 *= 10;
            *temp2 += charnaint(a);
            j++;
            l++;
        }
    }
    if(flag == 1) *temp2 *= -1;
    if(l > 0) *temp2 /= pow(10,l);
    if(isalpha(a) && j == 0) return 1;
    return 0;
}
int wczytajpunkt(struct point_t *temp1){
    int j=0,k=0;
    int flag = 0;
    int flag1 = 0;
    int czyspace = 0;
    char a;
    while(isdigit(a = (char)getchar()) || a == '-' || a == ' ' || a == '(' || a == ')'){
        if(a == '(') continue;
        if(a == ')') break;
        if(a == ' ') {
            czyspace = 1;
            continue;
        }
        if(czyspace == 0){
            if(a == '-') {
                flag = 1;
                continue;
            }
            if(j > 0) temp1->x *= 10;
            temp1->x += charnaint(a);
            j++;
        }
        else{
            if(a == '-') {
                flag1 = 1;
                continue;
            }
            if(k > 0) temp1->y *= 10;
            temp1->y += charnaint(a);
            k++;
        }
    }
    if(flag == 1) temp1->x *= -1;
    if(flag1 == 1) temp1->y *= -1;
    if(a == ',') return 1;
    a = (char)getchar();
    if(isalpha(a) && j == 0) return 1;
    return 0;
}
int my_scanf(char* format,...){
    char *pom;
    int* temp;
    struct point_t *temp1;
    double *temp2;
    int count=0;
    va_list tab;
    va_start(tab,format);
    pom = format;
    int i=0;
    while(*(pom+i) != '\0'){
        if(*(pom + i) == '%' && *(pom + i + 1) == 'd'){
            temp = va_arg(tab,int*);
            *temp = 0;
            int res = wczytajint(temp);
            if(res == 1) return 0;
            count++;
        }
        else if(*(pom + i) == '%' && *(pom + i + 1) == 'p'){
            temp1 = va_arg(tab,struct point_t*);
            temp1->x = 0;
            temp1->y = 0;
            int res = wczytajpunkt(temp1);
            if(res == 1) return 0;
            count += 2;
        }
        else if(*(pom + i) == '%' && *(pom + i + 1) == 'f'){
            temp2 = va_arg(tab,double *);
            *temp2 = 0;
            int res = wczytajfloat(temp2);
            if(res == 1) return 0;
            count++;
        }
        i++;
    }
    va_end(tab);
    return count;
}
int main() {
    return 0;
}







