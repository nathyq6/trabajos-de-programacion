#include <stdio.h>
#include <string.h>

int main() {
  char nombre[20];
  char grupoLista[20];
  int intentos = 0;

  do {
    printf("dime tu nombre ");
    scanf("%s",&nombre);

    printf("dime tu grupo grado y numero de lista ");
    scanf("%s",&grupoLista);

    if (strcmp(nombre, "nathaly") == 0 && strcmp(grupoLista, "2b6") == 0) {
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
