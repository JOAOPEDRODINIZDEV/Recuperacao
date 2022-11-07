#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");



    int A, B, C, D;
    printf("Digite aqui o primeiro valor:");
    scanf("%d",&A);

    printf("Digite aqui o segundo valor:");
    scanf("%d",&B);

    printf("Digitee aqui o terceiro valor:");
    scanf("%d",&C);

    printf("Digite aqui o quarto valor:");
    scanf("%d",&D);

    if ((B>C) && (D>A) && ((C+D) > (A+B)) && (C >0) && (D >0) && (A%2==0)) {

        printf("Valores aceitos\n");

    } else {

        printf("Valores não aceitos\n");
    }





    return 0;
}

    