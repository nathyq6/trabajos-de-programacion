#include<stdio.h>

int main (){

int num;
int i;

printf("dime cuantos numeros quieres");
scanf("%d",&num);


for(i=1;i<=num;i++){
 printf("%d",i*5 );
}


return 0;
}
