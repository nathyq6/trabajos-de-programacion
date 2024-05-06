#include <stdio.h>

int main() {
  int numero, menor, mayor;
  int i;
  int suma=0;
  menor=0;
  mayor=0;

printf("dime 10 numeros");
scanf("%d",&numero);
menor=numero;
mayor=numero;
suma+=numero;

for(int i=1;i<10;i++){
scanf("%d",&numero);
suma+=numero;

if(numero<menor){;
menor=numero;
}
if(numero>mayor){
mayor=numero;
}
}
printf("el numero mayor es%d\n",mayor);
printf("el numero menor es%d\n",menor);
printf("la suma de los numeros es%d\n",suma);

return 0;
}