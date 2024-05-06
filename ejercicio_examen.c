#include<stdio.h>
#include<math.h>

int main(){

int numero;
int potencia;

printf("dime el numero que quieres elevar\n");
scanf("%d",&numero);

printf("dime la potencia\n");
scanf("%d",&potencia);

float resultado=pow(numero,potencia);

printf("%d elevado a la potencia de %d es%.2f\n",numero,potencia,resultado);
return 0;
}
