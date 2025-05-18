#include <stdio.h>
int main(){
    char estado, estado2;
    char codigo[50], codigo2[50], cidade[50], cidade2[50];
    int populacao, populacao2, pontoTuristico, pontoTuristico2;
    float area, area2, pib, pib2, densidadePopulacional,densidadePopulacional2,pibCapita,pibCapita2 ;

    //Entrada de dados da carta 1
    printf("----------------------------------------------------------------------------\n");
    printf("Digite os dados para a carta 1!\n");
    printf("----------------------------------------------------------------------------\n");
    printf("Digite uma letra de 'A' à 'H' representando um Estado: ");
    scanf(" %c", &estado);
    printf("Digite a letra do estado digitado anteriormente seguido de um número de 01 a 04: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao);
    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontoTuristico);

    //calculo da densidade populacional

    densidadePopulacional =(float) populacao / area;

    //calculo do PIB per Capita

    pibCapita =(float) pib / populacao;

    //Entrada de dados da carta 2
    printf("----------------------------------------------------------------------------\n");
    printf("Digite os dados para a carta 2!\n");
    printf("----------------------------------------------------------------------------\n");
    printf("Carta 2\n");
    printf("Digite uma letra de 'A' à 'H' representando um Estado: ");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado digitado anteriormente seguido de um número de 01 a 04: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);
    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontoTuristico2);

    //calculo da densidade populacional

    densidadePopulacional2 =(float) populacao2 / area2;

    //calculo do PIB per Capita

    pibCapita2 =(float) pib2 / populacao2;

    //saida de dados da carta 1
    printf("----------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos Turísticos: %d\n", pontoTuristico);
    printf("Densidade populacional: %.2f hab/km2\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibCapita);
    printf("----------------------------------\n");

        //saida de dados da carta 2
    printf("----------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontoTuristico2);
    printf("Densidade populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);
    printf("----------------------------------\n");

    return 0;
}