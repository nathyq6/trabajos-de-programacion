#include<stdio.h>

int main(){

int num,contador=0,lim=0;

do{
printf("dime un numero");
scanf("%d",&num);

if (num!=0){
printf("has introducido el numero%d\n",num);

contador++;
lim+=num;
}
} while(num!=0);
printf("finalizado se a ingresado el numero %d veces\n",contador);
printf("la suma de los numeros es%d\n",lim);



return 0;
}