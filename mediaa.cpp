#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");



    float N1,N2,N3,N4,MF,EXAME,MEDIA;
    
    printf("CALCULADORA DE MÉDIA\n\n");
    
    printf("Digite o valor da primeira nota:");
    scanf("%f",&N1);

    printf("Digite o valor da segunda nota:");
    scanf("%f",&N2);

    printf("Digite o valor da terceira nota:"); 
    scanf("%f",&N3);
    
    printf("Digite o valor da quarta nota:"); 
    scanf("%f",&N4);


       MEDIA = (2*N1 + 3*N2 + 4*N3 + N4)/10;

       printf("A sua Media é: %.1f\n", MEDIA);

     if(MEDIA >= 7){ 
       printf("Aluno aprovado.\n");
       }

     if(MEDIA < 5){ 
       printf("Aluno reprovado.\n"); 
       }

     if((5 <= MEDIA) && (MEDIA < 7)){ 
       printf("Aluno em exame.\n");
       scanf("%f",&EXAME);
    }
       printf("Nota do exame: %.1f\n", EXAME);
        MF = (MEDIA + EXAME)/2;
    
     if(MF >= 5){ 
        printf("Aluno aprovado.\n");

        printf("Media final: %.1f\n", MF);
   
     if(MF <= 4.9){ 
     printf("Aluno reprovado.\n");

    printf("Media final: %.1f\n", MF); 
         }
     }
    
    
    return 0;
}

    