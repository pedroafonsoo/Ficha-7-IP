#include <stdio.h>
#include <string.h>
#define TAM 100

void main(){

    int i;
    char frase[TAM]; //declara um array de chars

    printf("Introduza uma frase \n");
    gets(frase); //Ler uma string

    for(i=strlen(frase)-1;i>=0;i--){
        printf("%c",frase[i]);


    }

}



