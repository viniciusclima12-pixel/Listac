#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    int nota;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if (nota >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
