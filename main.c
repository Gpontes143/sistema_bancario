#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief deposita dinheiro na conta
 *
 * @param saldo_atual valor que esta na conta do usuario
 * @return valor que esta na conta
 */
float armazenar_dinheiro(float saldo_atual) {
  float dinheiro_armazenado;
  printf("Quanto dinhero voce deseja armazenar?\n");
  scanf("%f", &dinheiro_armazenado);
  saldo_atual = saldo_atual + dinheiro_armazenado;
  return saldo_atual;
}

/**
 * @brief Permite  o usuario sacar o dinheiro que
 * esta na conta
 *
 * @param saldo_atual saldo que esta na conta do usuario
 * @return retorna o saldo_atual
 */
float sacar_dinheiro(float saldo_atual) {
  float dinhero_a_sacar;
  printf("Quanto dinheiro deseja sacar\n");
  scanf("%f", &dinhero_a_sacar);
  saldo_atual = saldo_atual - dinhero_a_sacar;
  return saldo_atual;
}
/**
 * @brief lida com a interface
 *
 * @param saldo_atual valores na conta do usuario
 * @return valor na conta do usuario
 */
float menu(float saldo_atual) {
  int escolha = 0;
  int fim = 0;
  while (fim == 0) {
    printf("Oque deseja fazer\n");
    printf("1 - depositar\n");
    printf("2 - Sacar\n");
    printf("3 - exibir saldo\n");
    printf("4 - sair\n");

    scanf("%d", &escolha);
    switch (escolha) {
    case 1:
      saldo_atual = armazenar_dinheiro(saldo_atual);
      break;
    case 2:
      if (saldo_atual <= 0) {
        printf("Voce nao tem dinheiro para executar a operacao\n\n");
        break;
      }
      saldo_atual = sacar_dinheiro(saldo_atual);
      break;
    case 3:
      printf("%.2f\n", saldo_atual);
      break;
    case 4:
      fim = 1;
      break;
    }
  }
  return saldo_atual;
}

int main(int argc, char *argv[]) {
  float saldo_atual;
  saldo_atual = menu(saldo_atual);
  return EXIT_SUCCESS;
}
