#include <stdio.h>

void receber(float *maior, float *menor, float *vetor);
void obterMedia(float *vetor, float *media);

int main(void) {
    float vetor[4];
    float maior = 0, menor = 0;
    float media;

    for(int i = 0; i < 4; i++){
        printf("Digite o %d número: ", i);
        scanf("%f", &vetor[i]);
    }

    receber(&maior, &menor, vetor);

    printf("O maior número é %.2f", maior);
    printf("\nO menor número é %.2f", menor);
    obterMedia(vetor, &media);
    printf("\nA media é %.2f", media);
    return 0;
}

void receber(float *maior, float *menor, float *vetor) {
    for(int i = 0; i < 4; i++) {
        if(*(vetor + i) > *maior) {
            *maior = *(vetor + i);
        }
        if(*(vetor + i) < *menor || i == 0) {
            *menor = *(vetor + i);
        }
    }
}

void obterMedia(float *vetor, float *media) {
    float soma = 0;
    for(int i = 0; i < 4; i++) {
        soma += *(vetor + i);
    }
    *media = soma / 4;
}