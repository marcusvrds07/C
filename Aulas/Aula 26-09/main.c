// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     int N;
//     int *vetor, maior = 0;

//     printf("Digite um número pro vetor: ");
//     scanf("%d", &N);

//     vetor = (int*) malloc(N * sizeof(int));
    
//     if(vetor == NULL) {
//         printf("Error");
//         return 1;
//     } 

//     for(int i = 0; i < N; i++) {
//         printf("Digite um número");
//         scanf("%d", &vetor[i]);
//     }

//     for(int i = 0; i < N; i++) {
//         printf("%d ", vetor[i]);
//         if(vetor[i] > maior || i == 0) {
//             maior = vetor[i];
//         }
//     }
    
//     printf("\n\n%d é o maior de todos!", maior);

//     free(vetor);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int linha = 3, coluna = 2;
    float **matriz, soma = 0;

    matriz = (float**) malloc(linha * sizeof(float*));
    if(matriz == NULL) {
        printf("Error");
        return 1;
    }

    for(int i = 0; i < linha; i++) {
        matriz[i] = (float*) malloc(coluna * sizeof(float));
        if(matriz[i] == NULL) {
            printf("Error");
            return 1;
        }

        for(int j = 0; j < coluna; j++) {
            printf("Digite um valor: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++) {
            printf("%.2f ", matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    float media = soma / (linha * coluna);

    printf("\n\nA média %.2f", media);

    for(int i = 0; i < linha; i++) {
        free(matriz[i]);
    }

    free(matriz);
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>

// char* preencheAlfabeto(int tam);

// int main(void) {
//     int i, tam=10; char *vetor;
//     vetor = preencheAlfabeto(tam);
//     if(vetor == NULL) {
//         printf("Error");
//         return 1;
//     }

//     for (i=0; i<tam; i++){
//         printf("%c ", vetor[i]);
//     }

//     free(vetor);
//     return 0;
// }

// char* preencheAlfabeto(int tam) {
//     char* resultado = (char*) malloc(tam);
//     if(resultado == NULL) {
//         printf("Error");
//         return NULL;
//     }

//     for (int i = 0; i < tam; i++) {
//         resultado[i] = 'a' + i;
//     }

//     return resultado;
// }