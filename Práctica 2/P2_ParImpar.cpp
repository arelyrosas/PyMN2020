#include <stdio.h>
#include <conio.h>
int num;
int main() {
  printf("Ingresa un numero entero y positivo\n");
  scanf("%d",&num);
    if (num%2==0) {
    printf("El numero es par\n");
  }
  else {
      printf("El numero es impar\n");
  }
  getch();
  return 0;
}
