#include<stdio.h>

int main(){

int numero;
int mayor=1;
int menor;
int suma=0;
int i=0;

while(i<=10){;
printf("ingresa el numero%d",i);
scanf("%d",&numero);

if(numero<menor){;
menor=numero;
}
if(numero>mayor){
mayor=numero;
}
suma+=numero;
i++;

}

printf("el numero mayor es%d\n",mayor);
printf("el numero menor es%d\n",menor);
printf("la suma de los sumeros es%d\n",suma);

return 0;
}