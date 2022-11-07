#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");



    double A, B, C;
    
    printf("Fórmula de Bhaskara\n\n");
    
    printf("Digite o valor que represeta A:");
    scanf("%lf",&A);

    printf("Digite o valor que representa B:");
    scanf("%lf",&B);

    printf("Digite o valor que represeta  C:"); 
    scanf("%lf",&C);


      if ((B * B - 4*A*C) < 0 || (A == 0)){

        printf("Impossível Calcular\n");

     }else{

       printf("R1 = %.5lf\n", (-B + sqrt(B * B- 4 * A * C )) / (2 * A));
   
  
       printf("R2 = %.5lf\n", (-B - sqrt(B * B- 4  * A * C )) / (2 * A));
    
    
  }





    return 0;
}

    