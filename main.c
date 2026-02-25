#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief depositar dinheiro na conta
 *
 * @param saldo_atual Dinheiro na conta
 */
void depositar_dinheiro(float *saldo_atual) {
  float dinheiro_armazenado = 0;
  printf("Quanto dinhero voce deseja armazenar?\n");
  scanf("%f", &dinheiro_armazenado);
  getchar();
  if (dinheiro_armazenado > 0) {
    *saldo_atual = *saldo_atual + dinheiro_armazenado;
  }
}

/**
 * @brief Permite retirar dinheiro da conta
 *
 * @param saldo_atual dinheiro na conta
 */
void sacar_dinheiro(float *saldo_atual) {
  float dinheiro_a_sacar = 0;
  printf("Quanto dinheiro deseja sacar\n");
  scanf("%f", &dinheiro_a_sacar);
  getchar();
  if (dinheiro_a_sacar > *saldo_atual) {
    printf("Voce nao consegue realizar essa operacao\nsaldo insuficiente\n");
    return;
  }
  *saldo_atual = *saldo_atual - dinheiro_a_sacar;
}
/**
 * @brief lida com a interface do sistema
 *
 * @param saldo_atual  dinheiro na conta
 */
void menu(float *saldo_atual) {
  int escolha = 0;
  int fim = 0;
  while (fim == 0) {
    printf("Oque deseja fazer\n");
    printf("1 - depositar\n");
    printf("2 - Sacar\n");
    printf("3 - exibir saldo\n");
    printf("4 - sair\n");

    scanf("%d", &escolha);
    getchar();
    switch (escolha) {
    case 1:
      depositar_dinheiro(saldo_atual);
      break;
    case 2:
      if (*saldo_atual <= 0) {
        printf("Voce nao tem dinheiro para executar a operacao\n\n");
        break;
      }
      sacar_dinheiro(saldo_atual);
      break;
    case 3:
      printf("%.2f\n", *saldo_atual);
      break;
    case 4:
      fim = 1;
      break;
    default:
      printf("escolha uma opcao valida\n");
      break;
    }
  }
}

int main(int argc, char *argv[]) {
  float saldo_atual = 0;
  menu(&saldo_atual);
  return EXIT_SUCCESS;
}
