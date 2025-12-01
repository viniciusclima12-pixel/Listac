#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    char nome[50];
    int idade;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Ola %s, você tem %d anos.", nome, idade);



    
    system("pause");
    return 0;
}