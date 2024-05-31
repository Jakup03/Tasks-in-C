#include <stdio.h>
#include <string.h>

union decode{
    unsigned int liczba;
    struct{
        unsigned char a1:1;
        unsigned char a2:1;
        unsigned char a3:1;
        unsigned char a4:1;
        unsigned char a5:1;
        unsigned char a6:1;
        unsigned char a7:1;
        unsigned char a8:1;
    }tab[1];
};
union encode{
    unsigned char znak;
    struct{
        unsigned char b1:1;
        unsigned char b2:1;
        unsigned char b3:1;
        unsigned char b4:1;
        unsigned char b5:1;
        unsigned char b6:1;
        unsigned char b7:1;
        unsigned char b8:1;
    }tab[1];
};
int decode(const char * filename, char *txt, int size){
    if(filename == NULL || txt == NULL || size < 1) return 1;
    FILE *plik = fopen(filename,"r");
    if(plik == NULL) return 2;
    union encode znak;
    union decode znak1;
    unsigned int pom;
    int counter;
    int i = 0,j = 0,zm;
    while(1) {
        if(j==size) break;
        counter = 0;
        while (i < 8) {
            if((zm=fscanf(plik,"%u",&pom))==EOF) break;
            if(zm==0){
                fclose(plik);
                return 3;
            }
            znak1.liczba = pom;
            if (counter == 0) znak.tab->b8 = znak1.tab->a1;
            else if (counter == 1) znak.tab->b7 = znak1.tab->a1;
            else if (counter == 2) znak.tab->b6 = znak1.tab->a1;
            else if (counter == 3) znak.tab->b5 = znak1.tab->a1;
            else if (counter == 4) znak.tab->b4 = znak1.tab->a1;
            else if (counter == 5) znak.tab->b3 = znak1.tab->a1;
            else if (counter == 6) znak.tab->b2 = znak1.tab->a1;
            else if (counter == 7) znak.tab->b1 = znak1.tab->a1;
            counter++;
            i++;
        }
        if(i!=8){
            fclose(plik);
            return 3;
        }
        *(txt+j) = (char)znak.znak;
        j++;
        i=0;
    }
    *(txt+size-1)='\0';
    fclose(plik);
    return 0;
}
int encode(const char *input, char *txt, const char *output){
    if(input == NULL || txt == NULL || output == NULL) return 1;
    FILE *plik1 = fopen(input,"r");
    if(plik1 == NULL){
        return 2;
    }
    FILE *plik = fopen(output,"w");
    if(plik == NULL){
        fclose(plik1);
        return 4;
    }
    unsigned int number;
    int ile=0;
    int zm;
    int l=0;
    while(l < (int)strlen(txt)){
        for(int o=0;o<8;o++) {
            if ((zm = fscanf(plik1, "%u", &number)) != 1) {
                fclose(plik);
                fclose(plik1);
                return 3;
            }
            else if (zm == EOF) break;
            else ile++;
        }
        l++;
    }
    if(l>ile/8){
        fclose(plik);
        fclose(plik1);
        return 3;
    }
    fseek(plik1,0,SEEK_SET);
    union encode znak;
    union decode znak1;
    int i=0,counter,j=0;
    char letter;
    unsigned int pom;
    while(!feof(plik1)){
        counter = 0;
        while(i<8){
            fscanf(plik1, "%u", &pom);
            znak1.liczba = pom;
            if (counter == 0) znak1.tab->a1 = znak.tab->b8;
            else if (counter == 1) znak1.tab->a1 = znak.tab->b7;
            else if (counter == 2) znak1.tab->a1 = znak.tab->b6;
            else if (counter == 3) znak1.tab->a1 = znak.tab->b5;
            else if (counter == 4) znak1.tab->a1 = znak.tab->b4;
            else if (counter == 5) znak1.tab->a1 = znak.tab->b3;
            else if (counter == 6) znak1.tab->a1 = znak.tab->b2;
            else if (counter == 7) znak1.tab->a1 = znak.tab->b1;
            else if (counter == 8) counter = -1;
            counter++;
            i++;
        }
        fprintf(plik, "%u ", znak1.liczba);
        fscanf(plik1,"%c",&letter);
        if(letter == '\n') fprintf(plik,"\n");
        else{
            if((fscanf(plik1,"%c",&letter))==EOF) break;
            if(letter == '\n') fprintf(plik,"\n");
            else{
                fseek(plik1,-1,SEEK_CUR);
            }
        }
        j++;
        i=0;
    }
    fclose(plik);
    fclose(plik1);
    return 0;
}
int main() {
    char input[31];
    char output[31];
    char txt[1001];
    char zm;
    int pom;
    printf("Do you want to encode (E/e) or decode (D/d) a message?");
    scanf("%c",&zm);
    if(zm != 'E' && zm != 'e' && zm != 'D' && zm != 'd'){
        printf("Incorrect input");
        return 1;
    }
    while(getchar()!='\n');
    if(zm == 'D' || zm == 'd'){
        printf("Enter input file name:");
        scanf("%30[^\n]",input);
        pom = decode(input,txt,1000);
        if(pom == 2){
            printf("Couldn't open file");
            return 4;
        }
        if(pom == 3){
            printf("File corrupted");
            return 6;
        }
        for(int i = 0;i<1000;i++){
            printf("%c",*(txt+i));
        }
    }
    if(zm == 'E' || zm == 'e'){
        printf("Enter a message to be encoded:");
        scanf("%1000[^\n]",txt);
        while(getchar()!='\n');
        printf("Enter input file name:");
        scanf("%30[^\n]",input);
        while(getchar()!='\n');
        printf("Enter output file name:");
        scanf("%30[^\n]",output);
        pom = encode(input,txt,output);
        if(pom == 4){
            printf("Couldn't create file");
            return 5;
        }
        if(pom == 2){
            printf("Couldn't open file");
            return 4;
        }
        if(pom == 3){
            printf("File corrupted");
            return 6;
        }
        printf("File saved");
    }
    return 0;
}
