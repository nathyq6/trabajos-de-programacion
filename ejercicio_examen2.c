#include<stdio.h>

int main(){

int numero,mayor,menor,suma;
menor=mayor=suma=0;

for(int i=1;i<=10;i++){;
printf("dime el numeros%d",i);
scanf("%d",&numero);
}

if(numero<menor){;
menor=numero;
}
else if (numero>mayor){;
mayor=numero;
}
suma+=numero;

printf("\nel numero mayor es%d",mayor);
printf("\nel numero menor es%d",menor);
printf("\nla suma de los numeros es%d",suma);
return 0;
}