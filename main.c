#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// sistema bancario
// armazenar dinheiro
// e sacar
float armazenar_dinheiro(float saldo_atual) {
  float dinheiro_armazenado;
  printf("Quanto dinhero voce deseja armazenar?");
  scanf("%f", &dinheiro_armazenado);
  saldo_atual = saldo_atual + dinheiro_armazenado;
  return saldo_atual;
}

float sacar_dinheiro(float saldo_atual) {
  float dinhero_a_sacar;
  printf("Quanto dinheiro deseja sacar");
  scanf("%f", &dinhero_a_sacar);
  saldo_atual = saldo_atual - dinhero_a_sacar;
  return saldo_atual;
}
int main(int argc, char *argv[]) {
  float saldo_atual;

  return EXIT_SUCCESS;
}
