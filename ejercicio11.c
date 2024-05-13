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

  float Unidad, cantidad, importeTotal = 0;

  do {
    printf("Introduzca el precio unitario del artículo si quiere terminar ingrese 0 ");
    scanf("%f", &Unidad);

    if (Unidad <= 0) {
      printf("el precio unitario debe ser un número positivo\n");
      continue;
    }

    printf("Introduzca la cantidad vendida ");
    scanf("%f", &cantidad);

    if (cantidad <= 0) {
      printf("Error la cantidad vendida debe ser un número positivo\n");
      continue;
    }

    importeTotal +=Unidad * cantidad;

    printf("Importe parcial %.2f\n", importeTotal);
  } while (Unidad != 0);

  printf("Importe total de la factura %.2f\n", importeTotal);
  


  return 0;



}

