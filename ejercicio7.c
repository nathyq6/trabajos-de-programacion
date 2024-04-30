#include <stdio.h>
#include <math.h>

int main() {

  int menu;

  printf("CALCULAR AREA DE FIGURAS\n");
  printf("1) Triángulo\n");
  printf("2) Trapecio\n");
  printf("3) Rectángulo\n");
  printf("4) Ninguna\n");

  printf("Dime una opción: ");
  scanf("%d", &menu);

  switch (menu) {
    case 1: {
      float area, base, altura;

      printf("Dime la base del triángulo: ");
      scanf("%f", &base);
      printf("Dime la altura del triángulo: ");
      scanf("%f", &altura);

      area = base * altura / 2;
      printf("El área del triángulo es: %.2f\n", area);
      break;
    }

    case 2: {
      float baseMayor, baseMenor, altura, area;

      printf("Dime la base mayor del trapecio: ");
      scanf("%f", &baseMayor);
      printf("Dime la base menor del trapecio: ");
      scanf("%f", &baseMenor);
      printf("Dime la altura del trapecio: ");
      scanf("%f", &altura);

      area = (baseMayor + baseMenor) * altura / 2;
      printf("El área del trapecio es: %.2f\n", area);
      break;
    }

    case 3: {
      float base, altura, area;

      printf("Dime la base del rectángulo: ");
      scanf("%f", &base);
      printf("Dime la altura del rectángulo: ");
      scanf("%f", &altura);

      area = base * altura;
      printf("El área del rectángulo es: %.2f\n", area);
      break;
    }

    case 4:
      printf("Ninguna de las opciones\n");
      break;

    default:
      printf("Opción no válida\n");
  }

  return 0;
}
