// #include <stdio.h>

// int main(void) {
//   float altura[5], soma = 0, media = 0;
//   int qtd = 0;

//   for(int i = 0; i < 5; i++) {
//     printf("Digite a altura da pessoa #%d: ", i + 1);
//     scanf("%f", &altura[i]);

//     soma += altura[i];

//     if (altura[i] > 1.75) {
//       qtd++;
//     }
//   }

//   media = soma / 5;

//   printf("Soma das alturas é: %.2f", soma);
//   printf("\nA media das alturas é %.2f", media);
//   printf("\nA quantidade de pessoas com mais de 1.75m é %d", qtd);

//   return 0;
// }

// #include <stdio.h>
//   int main(void) {
//   int idades[4], qtd = 0, maisVelha = 0, maisNova = 0;
//   float pesos[4], menorPeso = 0, save = 0;

//   for(int i = 0; i < 4; i++) {
//     printf("Informe a idade da #%d pessoa: ", i + 1);
//     scanf("%d", &idades[i]);

//     printf("Informe o peso da #%d pessoa: ", i + 1);
//     scanf("%f", &pesos[i]);

//     printf("\n\n");

//     if(idades[i] > 20 && pesos[i] < 70) {
//       qtd++;
//     }
//     if(idades[i] > maisVelha) {
//       maisVelha = idades[i];
//     }
//     if(pesos[i] < menorPeso || menorPeso == 0) {
//       menorPeso = pesos[i];
//     }
//     if(idades[i] < maisNova || maisNova == 0) {
//       maisNova = idades[i];
//       save = pesos[i];
//     }
//   }
//     printf("A quantidade de pessoas que tem mais de 20 anos e menos de 70kg é
//     %d\n", qtd); printf("A idade da pessoa mais velha é %d\n", maisVelha);
//     printf("O peso da pessoa com menor peso é %.2f\n", menorPeso);
//     printf("o peso da pessoa mais nova é %.2f", save);

//     return 0;
//   }

#include <stdio.h>
int main(void) {
  float salarios[2][3], media = 0, soma = 0;
  int qtd = 0, qtdAbaixoMedia = 0, qtdSalarios = 0, qtdAbaixo = 0;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite o salario %dx%d: ", i, j);
      scanf("%f", &salarios[i][j]);

      soma += salarios[i][j];
      qtdSalarios++;
    }
  }

  media = soma / qtdSalarios;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      if (salarios[i][j] > 1250 && salarios[i][j] < 1800) {
        qtd++;
      }
      if (salarios[i][j] < media) {
        qtdAbaixo++;
      } else if (salarios[i][j] > media) {
        printf("O salario %.2f está acima da media\n", salarios[i][j]);
      }
    }
  }

  printf("\nA quantidade de salarios acima de 1250 e menor que 1800 é %d", qtd);
  printf("\nA media de salarios é %.2f", media);
  printf("\nA quantidadde de salarios abaixo da media é %d", qtdAbaixo);

  return 0;
}