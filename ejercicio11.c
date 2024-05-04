#include <stdio.h>
#include <string.h>

int main() {
  char usuario[20];
  char contrasena[20];
  int intentos = 0;

  do {
    printf("dime tu usuario ");
    scanf("%s", usuario);

    printf("dime tu contraseña ");
    scanf("%s", contrasena);

    if (strcmp(usuario, "root") == 0 && strcmp(contrasena, "1234") == 0) {
      printf("\nBienvenido al sistema\n");
      break;
    } else {
      intentos++;
      printf("\nDatos incorrectos intentos restantes %d\n", 3 - intentos);
    }
  } while (intentos < 3);

  if (intentos == 3) {
    printf("\nLo sentimos ha superado el número máximo de intentos permitidos\n");
  }
  return 0;
}