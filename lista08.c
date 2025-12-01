#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    int n, triploN;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um numero: ");
    scanf(" %d", &n);
    triploN = n * 3;
    printf("O triplo do numero %d = %d", n, triploN);



    
    system("pause");
    return 0;
}