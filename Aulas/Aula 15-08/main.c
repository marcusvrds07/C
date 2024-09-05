#include <stdio.h>
#include <string.h>

#define TAM 2

int main(void) {

  char nomes[TAM][20], nomeAlta[20], nome[20];
  float alturas[TAM], media = 0, soma = 0, maiorAltura = 0;

  for(int i = 0; i < TAM; i++) {
    printf("Digite seu nome: ");
    scanf(" %19[^\n]s", nomes[i]);

    printf("%s digite sua altura: ", nomes[i]);
    scanf("%f", &alturas[i]);

    soma += alturas[i];

    if(alturas[i] > maiorAltura) {
      maiorAltura = alturas[i];
      strcpy(nomeAlta, nomes[i]);
    }
  }

    media = soma / TAM;
    strcpy(nome, "Sr(a) ");
    strcat(nome, nomeAlta);

    printf("\nA media é %.2f", media);
    printf("\nO nome da pessoa mais alta é %s", nomeAlta);
    printf("\nA pessoa mais alta é o(a) %s", nome);
  
  return 0;
  }

// char nomes[3][20], nomeMenor[20], nomeMaior[20];
  // int qtdCaracter = 0, menorNome = 0;
  // for(int i = 0; i < 3; i++) {
  //   printf("Digite seu nome: ");
  //   scanf(" %19[^\n]s", nomes[i]);

  //   if(strlen(nomes[i]) > qtdCaracter) {
  //     qtdCaracter = strlen(nomes[i]);
  //     strcpy(nomeMaior, nomes[i]);
  //   }
  //   if(strlen(nomes[i]) < menorNome || i == 0) {
  //     menorNome = strlen(nomes[i]);
  //     strcpy(nomeMenor, nomes[i]);
  //   }
  // }

  //   printf("O nome %s é o maior e tem %d carcaters\n", nomeMaior, qtdCaracter);
  //   printf("O menor nome é %s\n", nomeMenor);

  //   for(int i = 0; i < 3; i++) {
  //     if(strcmp(nomes[i], "Ana") == 0) {
  //     printf("Ana foi informado");
  //     } 
  //   }

// Exercicio 2
  // int idades[3][2], qtdMaior = 0, qtdPar = 0, maiorIdade = 0;
  // for(int i = 0; i < 3; i++) {
  //   for(int j = 0; j < 2; j++) {
  //     printf("Digite sua idade:");
  //     scanf("%d", &idades[i][j]);
  //   }
  // }

  // for(int i = 0; i < 3; i++) {
  //   for(int j = 0; j < 2; j++) {

  //     if(idades[i][j] >= 18) {
  //       qtdMaior++;
  //     }
  //     else {
  //       printf("%d é menor que 18 anos\n", idades[i][j]);
  //     }

  //     if(idades[i][j] % 2 == 0) {
  //       qtdPar++;
  //     }

  //   }
  // }
  // if(qtdPar != 0) {
  // printf("\n\nExiste %d idades pares", qtdPar);  
  // }
  // else {
  //   printf("\n\nNão existe idade par.");
  // }

  // Exercicio 1
  // char nomes[4][20];
  // for(int i = 0; i < 4; i++) {
  //   printf("Digite seu nome: ");
  //   scanf(" %19[^\n]", nomes[i]);
  // }
  // for(int i = 0; i < 4; i++) {
  //   printf("Seu nome é %s\n", nomes[i]);                  
  // }
  