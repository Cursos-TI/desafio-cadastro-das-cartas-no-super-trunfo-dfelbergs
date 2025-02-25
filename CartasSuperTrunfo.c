#include <stdio.h>

int main() {
    //Criação das variáveis para cada atributo de cada carta
    char estado, estado2, codigo1[3], codigo2[3], nomeDaCidade1[50], nomeDaCidade2[50];
    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float area1, area2, pib1, pib2;
    
    //Aqui é criado os prints para cada solicitação de scan e os scans pra guardar os atributos da carta 1
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado);

    printf("Digite a letra do estado seguido de um numero de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontoTuristico1);

    //Print com o resultado de todos os scans que foram feito
    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPib: %f\nNúmero de Pontos Turísticos: %d\n", estado, codigo1, nomeDaCidade1, populacao1, area1, pib1, pontoTuristico1);

    // Aqui é onde começa os atributos da carta 2
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguido de um numero de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontoTuristico2);

    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPib: %f\nNúmero de Pontos Turísticos: %d", estado2, codigo2, nomeDaCidade2, populacao2, area2, pib2, pontoTuristico2);

    return 0;
}
