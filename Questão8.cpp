#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

    int p,p1, r,a, j2,j1, duvida ;
    
    printf("JOGO\n\n");
    

scanf("%d",&p);
scanf("%d",&j2);
scanf("%d",&j1);
scanf("%d",&r);
scanf("%d",&a);


  if (p==1){
     duvida=(j1+j2)%2;
 if (duvida ==0 && r ==0){
 if (a==0){
    printf("\nJogador 1 ganha\n ");}
 if(a==1){
    printf("\nJogador 2 ganha!\n ");}
    }
 if(duvida ==0 && r==1 ){
 if(a ==0){
    printf("\nJogador 1 ganha!\n"); }  
 if (a==1){                       
   printf("\nJogador 2 ganha!\n");}  
       }         
   } 
 if (!(p == 1)) {  
     duvida = (j1 + j2)%2;
 if (duvida >= 1 && r == 0) { 
 if (a == 0) { 
     printf("\nJogador 1 ganha!\n");}
 if (a == 1) { 
     printf("\nJogador 1 ganha!\n");} 
             }
 if (duvida == 0 && r == 1) { 
 if (a == 0) {
     printf("\nJogador 1 ganha!\n");}  
 
 if (a == 1) { 
      printf("\nJogador 2 ganha!\n");} 
             }
 if (duvida == 0 && r == 0) {  
 if (a == 0) {
      printf("\nJogador 2 ganha!\n");} 

 if (a == 1) {
     printf("\nJogador 2 ganha!\n");} 
             }         
 if (duvida >= 1 && r == 1) { 
 if (a == 0) { 
     printf("\nJogador 1 ganha!\n");} 
 
 if (a == 1) {
     printf("\nJogador 2 ganha!\n");}  
                               } 
        }
    
    return 0;
}

    