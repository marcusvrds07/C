#include <stdio.h>

int main(void) {
//     float matriz[4][4];
//     float soma = 0;
//     int qtd = 0;

//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4; j++) {
//             printf("Digite um número: ");
//             scanf("%f", &matriz[i][j]);
//         }
//     }

//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4; j++) {
//             if(i == j) {
//                 printf("%.0f", matriz[i][j]);
//                 soma += matriz[i][j];
//                 qtd++;
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//         printf("\n");

//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4; j++) {
//             if((i + j) == 3) {
//                 printf("%0.f", matriz[i][j]);
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     float media = soma / qtd;

//     printf("\nMedia: %.2f\n\n", media);
//     soma = 0;

// for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4; j++) {
//             if(i < j) {
//                 printf("%0.f", matriz[i][j]);
//             }
//             else if( i > j) {
//                 printf(" ");
//             }
//             else {
//                 printf("*");
//             }
//             if((i + j) >= 4) {
//                 soma += matriz[i][j];
//             }
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("Soma: %.1f", soma);

//     printf("\n");

    int matriz[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };
    int transposta[4][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

        printf("\n"); 

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            transposta[i][j] = matriz[j][i];
            printf("%d", transposta[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}

//00 01 02 **
//10 11 ** 13
//20 ** 22 23
//** 31 32 33