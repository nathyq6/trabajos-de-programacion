#include<stdio.h>
int main(){
int num1,num2,num3,num4,num5,num;
int menor,i;
printf("dime el primer numero");
scanf("%d",&num1);
printf("dime el segundo numero");
scanf("%d",&num2);
printf("dime el tercer numero");
scanf("%d",&num3);
printf("dime el cuarto numero");
scanf("%d",&num4);
printf("dime el quinto numero");
scanf("%d",&num5);

num=num1;

if(num2<num){;
	num=num2;
}
if(num3<num){;
	num=num3;
}
if(num4<num){;
    num=num4;
}
if(num5=num){;
    num=num5;
}
printf("el menor es%d\n",num);

return 0;
}
