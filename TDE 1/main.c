//Exercicio 1

// #include <stdio.h>

// int main(void) {
//     int a[2][4];

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 4; j++) {
//             printf("Digite um número: ");
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 4; j++) {
//             a[i][j] = a[i][j] * 2;
//         }
//     }

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 4; j++) {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//Exercicio 2

// #include <stdio.h>

// int main(void) {
//     int a[3][3], b[3][3];

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("Digite um número para A-%dx%d:", i, j);
//             scanf("%d", &a[i][j]);
//             printf("Digite um número para B-%dx%d:", i, j);
//             scanf("%d", &b[i][j]);
//         }
//     }

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             a[i][j] = a[i][j] * 3;
//             b[i][j] = a[i][j] - b[i][j];
//         }
//     }

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Exercicio 3

// #include <stdio.h>

// int main(void) {
//     int matriz[5][2], transposta[2][5];

//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 2; j++) {
//             printf("Digite um número para %dx%d:", i, j);
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     printf("\nMatriz 5x2:\n\n");

//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 2; j++) {
//             printf("%d ", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 5; j++) {
//             transposta[i][j] = matriz[j][i];
//         }
//     }

//     printf("\nMatriz Transposta:\n\n");

//         for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 5; j++) {
//             printf("%d ", transposta[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

//Exercicio 4 

#include <stdio.h> 

int main(void) {
    int matriz[4][2], transposta[2][4], resultado[4][2];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Digite um número para a Matriz #%dx%d:", i, j);
            scanf("%d", &matriz[i][j]);
            printf("Digite um número para a Matriz Transposta #%dx%d:", j, i);
            scanf("%d", &transposta[j][i]);
        }
    }
    printf("\nMatriz 4x2:\n\n");

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            printf("#%d-%d = %d ", i, j, matriz[i][j]);
        }
        printf("\n");
    }

        printf("\nMatriz Transposta:\n\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            printf("#%d-%d = %d ", j, i, transposta[i][j]);
        }
        printf("\n");
    }

        printf("\nMatriz Transposta + Matriz Normal:\n\n");

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            resultado[i][j] = matriz[i][j] * transposta[j][i];
            printf("%d x %d = %d     ", matriz[i][j], transposta[j][i], resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}