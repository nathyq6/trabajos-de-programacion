#include <stdio.h>

int main() {
  char usuario;
  char contrasena;
  int oportunidades;

  while(oportunidades<3){
    printf("Ingrese su nombre de usuario: ");
    scanf("%c", usuario);

    printf("Ingrese su contraseña: ");
    scanf("%c", contrasena);

    if(usuario="rood"){;
    printf("bienvenido al sistema\n");
    break;
  }
  else{
  printf("usuario y contraseña incorrecta\n");
  oportunidades++;
  }
}

if(oportunidades=3){
printf("has superado el maximo de intentos\n");
}
return 0;
  }