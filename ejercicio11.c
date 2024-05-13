#include <stdio.h>
#include <string.h>

float calcularImporteArticulo(float unidad, float cantidad) {
  if (unidad <= 0 || cantidad <= 0) {
    printf("el precio y la cantidad deben ser números positivos\n");
    return 0;
  } else {
   unidad*cantidad;
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

    printf("Introduzca su nombre  ");
    scanf("%s", nombre);

    printf("Introduzca su grado grupo y numero de lista ");
    scanf("%s", gradoGrupo);

    if (strcmp(nombre, nombreCorrecto) == 0 && strcmp(gradoGrupo, gradoGrupoCorrecto) == 0) {
      printf("Bienvenido al sistema\n");
      break;
    } else {
      printf("Datos incorrectos Intentos restantes %d\n", 3 - intentos);
    }
  }

  if (intentos == 3) {
    printf("Se ha superado el número máximo de intentos permitidos\n");
  }

 float unidad, cantidad, importeTotal = 0;
 float calcularImporteDelArticulo;

  while (1) {
    printf("Introduzca el precio unitario del artículo introduzca 0 para terminar ");
    scanf("%f", &unidad);

    if (unidad <= 0) {
      printf("el precio unitario debe ser un número positivo\n");
      continue;
    }

    printf("Introduzca la cantidad que vendiste ");
    scanf("%f", &cantidad);

    if (cantidad <= 0) {
      printf("la cantidad vendida debe ser un número positivo\n");
      continue;
    }

    importeTotal +=calcularImporteDelArticulo,cantidad;

    printf("Importe parcial: %.2f\n", importeTotal);

    if (unidad == 0) {
      break;
    }
  }

  printf("Importe total de la factura: %.2f\n", importeTotal);

  return 0;
}