// #include <stdio.h>
// #include <string.h>

// struct aluno {
//     char nome[50];
//     float notas[3];
//     float media;
// };

// int main(void) {
//     struct aluno cadastro;
//     float soma = 0;

//     printf("Digite seu nome: ");
//     fgets(cadastro.nome, sizeof(cadastro.nome), stdin);

//     for(int i = 0; i < 3; i++) {
//         printf("Digite sua nota da P%d: ", i + 1);
//         scanf("%f", &cadastro.notas[i]);
//         soma += cadastro.notas[i];
//     }

//     cadastro.media = soma / 3;

//     for(int i = 0; i < 3; i++) {
//         printf("Nota da P%d: %.2f\n", i + 1, cadastro.notas[i]);
//     }

//     for(int i = 0; i < strlen(cadastro.nome); i++) {
//         if(cadastro.nome[i] == '\n') {
//             cadastro.nome[i] = '\0';
//         }
//     }

//     printf("%s sua media é %.2f\n", cadastro.nome, cadastro.media);

//     return 0;
// }

// #include <stdio.h>

// struct tempo {
//     int horas;
//     int minutos;
// };

// typedef struct tempo tempo;

// tempo converter(int num);

// int main(void) {
//     int num;

//     printf("Digite um numero: ");
//     scanf("%d", &num);

//     tempo convertido = converter(num);
//     printf("%d minutos equivalem a %d horas e %d minutos", num, convertido.horas, convertido.minutos);

//     return 0;
// }

// tempo converter(int num) {
//     tempo tmp;
//     tmp.horas = num / 60;
//     tmp.minutos = num % 60;
//     return tmp; 
// }

#include <stdio.h>

struct endereco
{
    char rua[100];
    char cidade[30];
    char estado[30];
};
typedef struct endereco endereco;

struct pessoa
{
    char nome[20];
    endereco enderecoPessoa;
};

typedef struct pessoa pessoa;

void receberPessoa(pessoa info);


int main(void) {
    pessoa informacao;
    printf("Digite seu nome: ");
    fgets(informacao.nome, sizeof(informacao.nome), stdin);

    printf("Digite sua rua: ");
    fgets(informacao.enderecoPessoa.rua, sizeof(informacao.enderecoPessoa.rua), stdin);

    printf("Digite sua cidade: ");
    fgets(informacao.enderecoPessoa.cidade, sizeof(informacao.enderecoPessoa.cidade), stdin);

    printf("Digite seu estado: ");
    fgets(informacao.enderecoPessoa.estado, sizeof(informacao.enderecoPessoa.estado), stdin);
    
    receberPessoa(informacao);

    return 0;
}

void receberPessoa(pessoa info) {
    printf("\n\n");
    printf("Seu nome é: %s", info.nome);
    printf("Sua rua é: %s", info.enderecoPessoa.rua);
    printf("Sua cidade é: %s", info.enderecoPessoa.cidade);
    printf("Seu estado é: %s", info.enderecoPessoa.estado);
}