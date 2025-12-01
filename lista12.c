#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    int n1, n2, n3, soma;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o primeiro numero: ");
    scanf(" %d", &n1);
    printf("Digite o segundo numero: ");
    scanf(" %d", &n2);
    printf("Digite o terceiro numero: ");
    scanf(" %d", &n3);
    soma = n1 + n2 + n3;
    printf("A soma dos numeros %d , %d, %d = %d", n1, n2, n3, soma);


   




    
    system("pause");
    return 0;
}