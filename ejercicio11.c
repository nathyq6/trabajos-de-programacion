#include <stdio.h>
#include <string.h>

float calcularImporteArticulo(float precioUnidad, float cantidad) {
  if (precioUnidad <= 0 || cantidad <= 0) {
    printf(" el precio y la cantidad deben ser números positivos\n");
    return 0;
  } else {
    return precioUnidad * cantidad;
  }
}

int main() {
  char nombre[50];
  char gradoGrupo[10];
  int intentos = 0;

  const char *nombreCorrecto = "nathaly";
  const char *gradoGrupoCorrecto = "2b6";

  while (intentos < 3) {
    intentos++;

    printf("Introduzca su nombre ");
    scanf("%s", nombre);

    printf("Introduzca su grado y grupo y numero de lista ");
    scanf("%s", gradoGrupo);

    if (strcmp(nombre, nombreCorrecto) == 0 && strcmp(gradoGrupo, gradoGrupoCorrecto) == 0) {
      printf("Bienvenido al sistema\n");
      break;
    } else {
      printf("Datos incorrectos Intentos restantes %d\n", 3 - intentos);
    }
  }

  if (intentos == 3) {
    printf("Se ha superado el número máximo de intentos permitidos.\n");
  }

  float precioUnidad, cantidad, importeTotal = 0.0;

  while (precioUnidad !=0) {
    printf("Introduzca el precio unitario del artículo (0 para terminar) ");
    scanf("%f", &precioUnidad);

    if (precioUnidad <= 0) {
      printf("el precio unitario debe ser un número positivo\n");
      continue;
    }

    printf("Introduzca la cantidad vendida: ");
    scanf("%f", &cantidad);

    if (cantidad <= 0) {
      printf(" la cantidad vendida debe ser un número positivo.\n");
      continue;
    }

    importeTotal += calcularImporteArticulo(precioUnidad, cantidad);

    printf("Importe parcial %.2f\n",importeTotal);

  }

  printf("Importe total de la factura: %.2f\n", importeTotal);

  return 0;
}