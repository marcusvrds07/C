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

// #include <stdio.h>

// #define M2 7
//     void resultado(int limite) {
//         int result = 0;
        
//         for(int i = 0; (i * M2) <= limite; i++) {
//                 result = i * M2;
//                 printf("%d x %d = %d\n", i, M2, result);
//         }
//     }

// int main(void) {
//     int limite;

//     printf("Digite o Limite do resultado da tabuada: ");
//     scanf("%d", &limite);

//     resultado(limite);

//     return 0;
// }

//Exercicio 11

// #include <stdio.h>
// #include <stdbool.h>

// int maior(int num1, int num2, int num3);

// int main(void) {
//     int num1, num2, num3;
//     char entrada[30];
//     bool valid = false;
    
    // do {
    //     printf("Digite 3 numeros da seguinte forma (01 02 03): ");
    //     fgets(entrada, sizeof(entrada), stdin);
    // if(sscanf(entrada, "%d %d %d", &num1, &num2, &num3) == 3) {
    //         valid = true;
    //     }
    //     else {
    //         printf("\nERROR: Certifique-se de fornecer um formato válido.\n\n");
    //     }
    // } while (valid == false);


//     int resultado = maior(num1, num2, num3);
//     printf("O maior número é %d", resultado);

//     return 0;
// }

// int maior(int num1, int num2, int num3) {
//     if(num1 > num2 && num1 > num3) {
//         return num1;
//     }
//     else if(num2 > num3 && num2 > num1) {
//         return num2;
//     }
//     else {
//         return num3;
//     }
// }

//Exercicio 12

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h> // inclui boleanos
// #include <ctype.h> // inclui toLower

// float reajustar(float salario, char nivelE[30]);

// int main(void) {
//     float salario;
//     char nivelE[30], entrada[30];
//     bool valid = false;
    
//     do {
//         printf("Digite o seu salario: ");
//         fgets(entrada, sizeof(entrada), stdin);
//         if(sscanf(entrada, "%f", &salario) == 1 && salario > 0) {
//             valid = true;
//         }
//         else {
//             printf("\nERROR: Certifique-se de fornecer um salario válido.\n\n");
//         }
//     } while(valid == false);

//     valid = false;
//     do {
//         printf("Digite o seu nível de experiencia (senior, pleno ou junior): ");
//         scanf(" %19s", nivelE);

//         int len = strlen(nivelE);

//         for(int i = 0; i < len; i++) {
//             nivelE[i] = tolower(nivelE[i]);
//         }

//         if(strcmp(nivelE, "senior") == 0 || strcmp(nivelE, "pleno") == 0 || strcmp(nivelE, "junior") == 0) {
//             valid = true;
//         }
//     } while(valid == false);

//     float resultado = reajustar(salario, nivelE);

//     printf("O seu novo salario é %.2f", resultado);

//     return 0;
// }

// float reajustar(float salario, char nivelE[30]) {
//     if(strcmp(nivelE, "senior") == 0) {
//         return salario * 1.05;
//     }
//     else if (strcmp(nivelE, "pleno") == 0) {
//         return salario * 1.1;
//     }
//     else {
//         return salario * 1.15;
//     }
// }

// Exercicio 13

// #include <stdio.h>
// #include <stdbool.h>

// float somar(float num1, float num2, float num3);
// float media(float resultado);

// int main(void) {
//     float num1, num2, num3;
//     char entrada[30];
//     bool valid = false;

//     do {
//         printf("Digite 3 números no seguinte formato (01 02 03): ");
//         fgets(entrada, sizeof(entrada), stdin);

//         if((sscanf(entrada, "%f %f %f", &num1, &num2, &num3) == 3) && (num1 > 0 && num2 > 0 && num3 > 0)) {
//             valid = true;
//         }
//         else {
//             printf("\nERROR: Certifique-se de fornecer 3 números válidos e no formato certo.\n\n");
//         }
//     } while(valid == false);

//     float resultado = media(somar(num1, num2, num3));
//     printf("Resultado = %.2f", resultado);

//     return 0;
// }

// float somar(float num1, float num2, float num3) {
//     return num1 + num2 + num3;
// }

// float media(float resultado) {
//     return resultado / 3;
// }

//Exercicio 14

// #include <stdio.h>
// #include <stdbool.h>

// int pontosTotais(int vitorias, int empates);
// float media(float resultado, int jogosTotais);

// int main(void) {
//     int vitorias, empates, derrotas, jogosTotais;
//     bool valid = false;

//     do {
//         char entrada[30];

//         printf("Digite o número vitorias, empates e derrotas do seu time, seguindo esse formato (vt-et-dt): ");
//         fgets(entrada, sizeof(entrada), stdin);
//         if((sscanf(entrada, "%d-%d-%d", &vitorias, &empates, &derrotas) == 3) && (vitorias >= 0 && empates >= 0 && derrotas >= 0)) {
//             valid = true;
//         }
//         else {
//             printf("\nERROR: Certifique-se de fornecer 3 números válidos e no formato certo.\n\n");
//         }


//     } while(valid == false);
    
//     jogosTotais = vitorias + empates + derrotas;
//     float total = pontosTotais(vitorias, empates);
//     float mediaFinal = media(total, jogosTotais);

//     printf("\n\nEm %d jogos o seu time fez %d pontos, tendo uma média de %.2f pontos por partida.\n\n", jogosTotais, total, mediaFinal);

//     return 0;
// }

// int pontosTotais(int vitorias, int empates) {
//     return (vitorias * 3) + empates;
// }
// float media(float resultado, int jogosTotais) {
//     return resultado / jogosTotais;
// }

//Exercicio 15

// #include <stdio.h>

// int main(void) {
//     int a = 25;
//     int *pa = &a; // ponteiro PA recebe o endereço de A
//     int b = *pa + a; // conteudo do endereço de pa = 25 + a = 25
//     printf("%d %p %p %d %d %p\n", a, pa, &a, *pa, b, &b);

//     //a) O programa irá dar erro pois o % para ponteiro, endereço é %p
//     // o % do conteudo do endereço (*pa) vai depender do tipo de variavel que o ponteiro ta fazendo referencia, nesse caso o ponteiro ta referindo ao int a que é um inteiro e o % é o %d, mas se fosse float usariamos %f

//     //b)

//     // O printf vai exibir em ordem o valor de A que é 25, depois vai exibir o enderço de a que está guardado no ponteiro PA, vai exibir o endreço de A novamente, o conteudo do enderço que ta guardado em PA, vai exibir o resultado de B que é 50 e depois o endereço de B.

//     return 0;
// }

//Exercicio 16