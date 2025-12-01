#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    float celsius, fahrenheit;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a temperatura em Celsius: ");
    scanf(" %f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("A temperatura em Fahrenheit = %.2f°f", fahrenheit);





    
    system("pause");
    return 0;
}