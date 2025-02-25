#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1, estado2, codigo1[3], codigo2[3], nomeDaCidade1[50], nomeDaCidade2[50];
    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float area1, area2, pib1, pib2;

    printf("Digite a letra do estado: ");
    scanf("%c", estado1);

    printf("Digite a letra do estado seguido de um numero de 01 a 04 (ex: A01, B03): ");
    scanf("%c", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontoTuristico1);

    //printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPib: %f\nNúmero de Pontos Turísticos: %d", estado1, codigo1, nomeDaCidade1, populacao1, area1, pib1, pontoTuristico1);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
