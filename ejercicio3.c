#include <stdio.h>

int main() {
  float num1, num2, num3;

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);
  printf("Ingrese el tercer número: ");
  scanf("%f", &num3);

  if (num1 <= num2 && num1 <= num3) {
    if (num2 <= num3) {
      printf("%.2f %.2f %.2f\n", num1, num2, num3);
    } else {
      printf("%.2f %.2f %.2f\n", num1, num3, num2);
    }
  } else if (num2 <= num1 && num2 <= num3) {
    if (num1 <= num3) {
      printf("%.2f %.2f %.2f\n", num2, num1, num3);
    } else {
      printf("%.2f %.2f %.2f\n", num2, num3, num1);
    }
  } else {
    if (num1 <= num2) {
      printf("%.2f %.2f %.2f\n", num3, num1, num2);
    } else {
      printf("%.2f %.2f %.2f\n", num3, num2, num1);
    }
  }

  return 0;
}