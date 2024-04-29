#include<stdio.h>
int main(){

int carta;
printf("dime el cumero de la carta");
scanf("%d",&carta);

if(carta==1){;
printf("es un as\n");
}
else if(carta==10){;
printf("es un sota\n");
}
 else if(carta==11){;
printf("es un caballo\n");
}
else if(carta==12){;
printf("es un rey\n");
}
else if(carta>=2 &&carta<=9){;
printf("no es ninguna figura ni tampoco as");
}
else{;
printf("este numero no esta en la baraja española\n");
}
//prueba de comentario
return 0;
}