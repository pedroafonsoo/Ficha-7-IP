#include<stdio.h>
#include<string.h>
#define TAM 100

int contaPrimeiro(char *str){ //um ponteiro para o array de chars
        int i,contador;
        contador=0;
        char letra=tolower(str[0]); //Guarda a primeira letra para comparacao

        for(i=0;i<strlen(str);i++){
            if(tolower(str[i])==letra){
                contador++;
            }
        }

        return contador;

}



void main(){
    int i;
    char frase[TAM];

    printf("Introduza uma frase \n");
    gets(frase);

    printf("Nº de vezes :%d\n" ,contaPrimeiro(frase));

    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(char));

    printf("%d \n",frase);
    printf("%d\n",&frase[0]);
    printf("%d\n",&frase[1]);

    printf("%d\n",(int)'a');
    printf("%d\n",frase[0]);
    printf("%d\n",frase[1]);
}
