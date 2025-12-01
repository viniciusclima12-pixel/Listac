#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){


    float metros, centimetros;
    


    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor em metros a ser convertido: ");
    scanf(" %f", &metros);
    centimetros = metros * 100;
    printf("O valor em centimetros = %.2fcm", centimetros);





    
    system("pause");
    return 0;
}