#include<stdio.h>
int main(){

char letra;

printf("dime un caracter");
scanf("%c",&letra);

switch(letra){

case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
printf("%c es una vocal\n",letra);
break;
default:
	printf("%c no es una vocal\n",letra);


}
return 0;
}