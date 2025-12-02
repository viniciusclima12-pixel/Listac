#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    char sexo;
    int idade;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

if (sexo == 'M' || sexo == 'm'){
     if(idade >= 40){
        printf("VOCÊ TEM DIREITO AO DESCONTO\n");
    }else{
        printf("VOCÊ NÃO TEM 40 ANOS NÃO TEM DIREITO AO DESCONTO\n");
    }
    }else if(sexo == 'F'|| sexo == 'f') {
     if (idade >= 50){
        printf("VOCÊ TEM DIREITO AO DESCONTO\n");
    }else{
        printf("VOCÊ NÃO TEM 50 ANOS NÃO TEM DIREITO AO DESCONTO\n");
    }
 }
   

    system("pause");
    return 0;
}
