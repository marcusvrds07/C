// #include <stdio.h>

// int multiplicar(int a, int b) {
//     return a * b;
// };

// int main(void) {
//     int num1, num2;
//     printf("Digite dois numeros: ");
//     scanf("%d %d", &num1, &num2);

//     int resultado = multiplicar(num1, num2);
//     printf("%d x %d = %d", num1, num2, resultado);
//     return 0;
// }

// #include <stdio.h>
// void votar(int idade);


// int main(void) {
//     int idade;
//     printf("Digite sua idade: ");
//     scanf("%d", &idade);

//     votar(idade);
//     return 0;
// }

// void votar(int idade) {
//     if(idade >= 18 && idade <= 70) {
//         printf("Precisa votar!");
//     }
//     else {
//         printf("Não precisa votar!");
//     }
// }

// #include <stdio.h>

// int vida(int ano, int mes, int dia);

// int main(void) {
//     int anos, meses, dias;
//     printf("Digite no seguinte formato a quantidade de anos, mes, dias que você tem. (ano-mes-dia): ");
//     scanf("%d-%d-%d", &anos, &meses, &dias);

//     int resultado = vida(anos, meses, dias);
//     printf("Você possui um total de %d dias de vida\n\n", resultado);

//     return 0;
// }

// int vida(int ano, int mes, int dia) {
//     ano *= 365;
//     mes *= 30;

//     int total = ano + mes + dia;
//     return total;
// }

#include <stdio.h>

float valor(char sexo, char tamanho) {
    switch (tamanho)
    {
    case 'P':
        if(sexo == 'M') {
            return 22.25;
        }
        else {
            return 28.75;
        }
        break;
    case 'M':
        if(sexo == 'M') {
            return 27.15;
        }
        else {
            return 39.99;
        }
        break;
    case 'G':
        if(sexo == 'M') {
            return 40.00;
        }
        else {
            return 51.00;
        }
        break;
    default:
        printf("O sexo informado está errado!");
        break;
    }
}
 
int main(void) {
    char sexo, tamanho;
    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);

    printf("Digite seu tamanho: ");
    scanf(" %c", &tamanho);

    float precoFinal = valor(sexo, tamanho);

    printf("O preço final da sua blusa pro tamanho %c e sexo %c é %.2f", tamanho, sexo, precoFinal);

    return 0;
}