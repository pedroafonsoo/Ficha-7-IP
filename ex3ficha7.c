#include<stdio.h>
#include<ctype.h>
#include <string.h>
#define TAM 100

void main(){

    int i;
    char frase[TAM];

    printf("Introduza uma frase \n");
    gets(frase);

    i=0;
    while(frase[i]!='\0'){
        //Salta por cima dos espaços no inicio da palavra
        while((frase[i]==' ' || frase[i]=='\t') && frase[i] != '\0'){
            i++;
        }
        //Escrever as letras da palavra
        while(frase[i]!=' ' && frase[i]!='\t' && frase[i]!='\0'){
            printf("%c",frase[i]);
            i++;
        }

        if(frase[i] != '\0')
            printf("\n");
    }

}
