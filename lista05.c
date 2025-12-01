#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
   
    int peso1, peso2, media;

    printf("Digite o peso da primeira pessoa: ");
    scanf(" %d", &peso1);
    printf("Digite o peso da segunda pessoa: ");
    scanf(" %d", &peso2);
    media = (peso1 + peso2) / 2;
    printf("A media dos pesos = %d", media);





    
    system("pause");
    return 0;
}