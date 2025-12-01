#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    int idade1, idade2;

    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite a idade da primeira pessoa: ");
    scanf(" %d", &idade1);
    printf("Digite a idade da segunda pessoa: ");
    scanf(" %d", &idade2);

    if(idade1 > idade2){
        printf("A primeira pessoa é mais velha, voce tem %d anos.", idade1);
    }else if(idade2 > idade1){
        printf("A segunda pessoa é mais velha, voce tem %d anos.", idade2);
    }else{
        printf("As duas pessoas tem a mesma idade, %d anos.", idade1, idade2);



    
    system("pause");
    return 0;
}