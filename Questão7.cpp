#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

    int S,T,F;
    
    
    
printf("Digite a hora da saida:");
scanf("%d",&S);
    
printf("Digite o tempo de vôo :");
scanf("%d",&T);

printf("Digite a hora da chegada :");
scanf("%d",&F);
    if (S==0){
        S =24;
       }
    
    S=(( S+T+F)%24);
    printf ("A Hora atual nesse fuso é:%d (HORA)S \n",S);
    return 0;
}

    