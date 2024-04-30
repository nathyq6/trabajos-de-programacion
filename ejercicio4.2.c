include <stdio.h>

int main() {
  char letra;

  printf("Ingrese un carácter: ");
  scanf(" %c", &letra);

  letra = tolower(letra);

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
    printf("%c es una vocal.\n", letra);
  } else {
  
    if (letra >= 'a' && letra <= 'z') {
      printf("%c es una consonante.\n", letra);
    } else {
      
      printf("%c no es ni una vocal ni una consonante.\n", letra);
    }
  }

  return 0;
}