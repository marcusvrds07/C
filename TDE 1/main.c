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
//             transposta[j][i] = matriz[i][j];
//         }
//     }

//     printf("\nMatriz 5x2:\n\n");

//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 2; j++) {
//             printf("%d ", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nMatriz Transposta:\n\n");

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 5; j++) {
//             printf("%d ", transposta[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

//Exercicio 4 

// #include <stdio.h> 

// int main(void) {
//     int     matriz[4][2], 
//         transposta[2][4], 
//          resultado[4][4] = {{0}};

//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 2; j++) {
//             printf("Digite um número para a Matriz 4x2 #%dx%d:", i, j);
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     printf("\n\n");

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 4; j++) {
//             printf("Digite um número para a Matriz 2x4 #%dx%d:", i, j);
//             scanf("%d", &transposta[i][j]);
//         }
//     }
    
//     printf("\nMatriz 4x2:\n\n");

//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 2; j++) {
//             printf("#%d-%d = %d ", i, j, matriz[i][j]);
//         }
//         printf("\n");
//     }

//         printf("\nMatriz 2x4:\n\n");

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 4; j++) {
//             printf("#%d-%d = %d ", i, j, transposta[i][j]);
//         }
//         printf("\n");
//     }

//         printf("\nMatriz 2x4 x Matriz 4x2:\n\n");

//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4; j++) {
//             for(int k = 0; k < 2; k++) {
//                 resultado[i][j] = resultado[i][j] + matriz[i][k] * transposta[k][j];
//             }
//         }
//     }

//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4; j++) {
//             printf("%d ", resultado[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n");

//     return 0;
// }

//Exercicio 5

// #include <stdio.h>

// int main(void) {
//     int matriz[3][3];

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("Digite um número para posição %d-%d: ", i, j);
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             if(i < j) {
//                 printf("%d ", matriz[i][j]);
//             }
//             else {
//                 if(i == j) {
//                     printf("P ");
//                 }
//                 else {
//                     printf("* ");
//                 }
//             } 
//         }
//         printf("\n");
//     }

//     return 0;
// }

//Exercicio 6

// #include <stdio.h>

// int main(void) {
//     int matriz[4][4],
//         soma = 0;

//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4; j++) {
//             printf("Digite um número para posição %d-%d: ", i, j);
//             scanf("%d", &matriz[i][j]);
//         }
//     }
//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4; j++) {
//             if(i < j || i == j) {
//                 printf("%d ", matriz[i][j]);
//                 soma += matriz[i][j];
//             }
//             else {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }

//     printf("\n\nResultado: %d", soma);

//     return 0;
// }

//Exercicio 7

// #include <stdio.h>

// int main(void) {

//     int matriz[3][3];
//     int maior = 0;

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("Digite um número para posição %d-%d: ", i, j);
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     printf("\n");

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             if((i + j) < 2) {
//                 if(matriz[i][j] > maior) {
//                     maior = matriz[i][j];
//                 }
//                 printf("( %d ) ", matriz[i][j]);
//             }
//             else {
//                 if((i + j) == 2) {
//                     printf("(%d-S) ", matriz[i][j]);
//                 }else{
//                 printf("( * ) ");
//                 }
//             }
//         }
//         printf("\n");
//     }

//     printf("\nO maior número acima da matriz secúndaria é %d", maior);

//     return 0;
// }

//Exercicio 8

// #include <stdio.h>

// int main(void) {
//     float matriz[3][3], media, soma = 0;
//     int qtd = 0;

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("Digite um número para posição %d-%d: ", i, j);
//             scanf("%f", &matriz[i][j]);
//         }
//     }

//     printf("\n");

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             if((i + j) > 2) {
//                 printf("( %.0f ) ", matriz[i][j]);
//                 soma += matriz[i][j];
//                 qtd++;  
//             }
//             else {
//                 if((i + j) == 2) {
//                     printf("(%.0f-S) ", matriz[i][j]);
//                 }
//                 else {
//                     printf("( * ) ");
//                 }
//             } 
//         }
//         printf("\n");
//     }

//     media = soma / qtd;

//     printf("\nA media é %.2f", media); 

//     return 0;
// }

//Exercicio 9

// #include <stdio.h>

//     float soma(float num1, float num2) {
//         return num1 + num2;
//     }
//     float subtracao(float num1, float num2) {
//         return num1 - num2;
//     }
//     float divisao(float num1, float num2) {
//         return num1 / num2;
//     }
//     float multiplicacao(float num1, float num2) {
//         return num1 * num2;
//     }
// int main(void) {
//     float num1, num2, resultado;
//     int operacao;

//     printf("Digite um número: ");
//     scanf("%f", &num1);

//     printf("\nDigite outro número: ");
//     scanf("%f", &num2);

//     printf("\nEscolha a operação desejada:\n");
//     printf("1 - Soma\n");
//     printf("2 - Subtração\n");
//     printf("3 - Divisão\n");
//     printf("4 - multiplicação\n");
//     scanf("%d", &operacao);

//     switch (operacao)
//     {
//     case 1:
//         resultado = soma(num1,num2);
//         printf("Resultado de %.2f+%.2f=%.2f\n\n", num1, num2, resultado);
//         break;
//     case 2:
//         resultado = subtracao(num1,num2);
//         printf("Resultado de %.2f-%.2f=%.2f\n\n", num1, num2, resultado);
//         break;
//     case 3:
//         if(num2 > 0) {
//             resultado = divisao(num1,num2);
//             printf("Resultado de %.2f/%.2f=%.2f\n\n", num1, num2, resultado);
//         }
//         else {
//             printf("Divisão por 0 não é permitido!\n\n");
//         }
//         break;
//     case 4:
//         resultado = multiplicacao(num1,num2);
//         printf("Resultado de %.2fx%.2f=%.2f\n\n", num1, num2, resultado);
//         break;
//     default:
//         break;
//     }
//     return 0;
// }

//Exercicio 10

#include <stdio.h>

#define M2 7
    void resultado(int limite) {
        int result = 0;
        
        for(int i = 0; (i * M2) <= limite; i++) {
                result = i * M2;
                printf("%d x %d = %d\n", i, M2, result);
        }
    }

int main(void) {
    int limite;

    printf("Digite o Limite do resultado da tabuada: ");
    scanf("%d", &limite);

    resultado(limite);

    return 0;
}