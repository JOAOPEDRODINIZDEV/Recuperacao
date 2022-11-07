#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

    int horainicial, horafinal;
    
    
    
printf("Digite a hora inicial do jogo :");
scanf("%d",&horainicial);
    
printf("Digite a hora final do jogo:");
scanf("%d",&horafinal);
    
if (horafinal > horainicial){
   printf("O Jogo Durou %d \n", horafinal -horainicial);
} if(!(horainicial < horafinal)){

  printf("O Jogo Durou %d\n", 24 - horainicial + horafinal); 
     }
    

    return 0;
}

    