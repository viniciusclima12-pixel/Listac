#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    int numero;

    setlocale(LC_ALL, "Portuguese");
     
    printf("Digite um numero: ");
    scanf(" %d", &numero);

    if(numero %5 == 0){
        printf("O numero %d é multiplo de 5", numero);
    }else{
        printf("O numero %d não é multiplo de 5", numero);
    }



    system("pause");
    return 0;
}