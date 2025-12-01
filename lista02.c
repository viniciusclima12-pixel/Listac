#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    float altura, base, area;

    setlocale(LC_ALL, "Portuguese");


    printf("Digite a altura do retangulo: ");
    scanf(" %f", &altura);
    printf("Digite a base do retangulo: ");
    scanf(" %f", &base);
    area = altura * base;
    printf("A area do retangulo = %.2f", area);





    
    system("pause");
    return 0;
}