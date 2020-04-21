#include <stdio.h>

int main() {

  int numberA = 10;
  int numberB = 20;
  int numberC = 5;

  int total = numberA + numberB + numberC;
  float division = numberB / numberC;
  int multiplication = numberA * numberB * numberC;

  printf("A soma de todos os número é: %i\n", total);
  printf("A divisão de %i por %i é: %f\n", numberB, numberC, division);
  printf("A multiplixação de %i x %i x %i é: %i\n", numberA, numberB, numberC, multiplication);

  return 0;
}
