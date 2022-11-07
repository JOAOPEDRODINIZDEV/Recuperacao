#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

    float a,b,c, A,B,C;
    
    
    
printf("Digite uma lado do triângulo:");
scanf("%f",&a);
    
printf("Digite o segundo número:");
scanf("%f",&b);
    
printf("Digite o terceiro número:");
scanf("%f",&c);
    
if(A >= B && A >= C){ 
 A = a;  
 B = b;  
 C = c;
 }
    
    
if (B >= A && B >= C){ 
 A = b; 
 B = a; 
 C = c;
}
if (C >= A && C >= B){ 
 A = c; 
 B = b; 
 C = a;
 }
if (A >= B+C){ 
printf ("NAO FORMA TRIANGULO\n");
}else{
 
if ((A*A) == ((B*B) + (C*C))){ 
printf ("TRIANGULO RETANGULO\n");
}
   
if ((A*A) > ((B*B) + (C*C))){ 
printf ("TRIANGULO OBTUSANGULO\n"); 
}
   

if ((A*A) < ((B*B) + (C*C))){ 
 printf("TRIANGULO ACUTANGULO\n"); 
}

if (A == B && A == C && B == C){ 
printf ("TRIANGULO EQUILATERO\n"); 
}

if (A == B && A != C || A == C && A != B || B == C && B != A){ 
printf ("TRIANGULO ISOSCELES\n");
}
}
    return 0;
}

    