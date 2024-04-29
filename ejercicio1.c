#include<stdio.h>
int main (){
int num1,num2,num3;

printf("dime el primer numero");
scanf("%d",&num1);
printf("dime el segundo numero");
scanf("%d",&num2);
printf("dime el tercer numero");
scanf("%d",&num3);

if(num1==1 && num2==2 && num3==3){
printf("acceso permitido\n");

}
else {
printf("acceso denegado\n");
}

 return 0;
}


