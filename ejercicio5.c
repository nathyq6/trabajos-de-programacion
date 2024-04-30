#include <stdio.h>

int main() {
  float horasTrabajadas,precioHora,salarioNormal,horasExtra,precioHoraExtra,salarioExtra,salarioTotal;

  
  printf("Ingrese las horas trabajadas: ");
  scanf("%f", &horasTrabajadas);
  printf("Ingrese el precio por hora: ");
  scanf("%f", &precioHora);

  
  if (horasTrabajadas <= 40) {
    salarioNormal = horasTrabajadas * precioHora;
  } else {
    salarioNormal = 40 * precioHora;
  }

  
  if (horasTrabajadas > 40) {
    horasExtra = horasTrabajadas - 40;
  } else {
    horasExtra = 0;
  }

  
  precioHoraExtra = precioHora * 1.5;


  if (horasExtra <= 10) {
    salarioExtra = horasExtra * precioHoraExtra;
  } else {
    salarioExtra = 10 * precioHoraExtra + (horasExtra - 10) * precioHora * 2;
  }

  
  salarioTotal = salarioNormal + salarioExtra;

  
  printf("El salario total es: %.2f\n", salarioTotal);

  return 0;
}
