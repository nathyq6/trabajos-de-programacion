#include<stdio.h>

int main(){

int numero,potencia,exponente;

printf("dime el numero que quieres elevar\n");
scanf("%d",&numero);
printf("dime el exponente\n");
scanf("%d",&exponente);
potencia=1;

for(int i=0;i< exponente;i++){;

potencia*=numero;
}
 
printf("%d elevado a la potencia %d es %d\n",numero,exponente,potencia);

return 0;
}
