#include <stdio.h>

int main() {
  int carta;

  printf("Dime el número de la carta: ");
  scanf("%d", &carta);

  switch (carta) {
    case 1:
      printf("Es un as\n");
      break;
    case 10:
      printf("Es un sota\n");
      break;
    case 11:
      printf("Es un caballo\n");
      break;
    case 12:
      printf("Es un rey\n");
      break;
    default:
      if (carta >= 2 && carta <= 9) {
        printf("No es ninguna figura ni tampoco as\n");
      } else {
        printf("Este número no está en la baraja española\n");
      }
  }


  return 0;
}
