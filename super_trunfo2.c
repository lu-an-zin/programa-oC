#include <stdio.h>
int main(){
    char estado, estado2;
    char codigo[50], codigo2[50], cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    int pontoTuristico, pontoTuristico2, escolha;
    float area, area2, pib, pib2, densidadePopulacional,densidadePopulacional2,pibCapita,pibCapita2, superPoder, superPoder2 ;

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

    // calculo do super poder
    superPoder = (float) populacao + area + pib + pontoTuristico + pibCapita + (1 / densidadePopulacional);
    superPoder2 =(float) populacao2 + area2 + pib2 + pontoTuristico2 + pibCapita2 + (1 / densidadePopulacional2);


    // Menu interativo

    printf("### Escolha um atributo para comparar ###\n");
    printf("1. Nome do pais ( apenas exibição)\n");
    printf("2. população\n");
    printf("3. Área\n");
    printf("4. Pib\n");
    printf("5. Número de pontos turisticos\n");
    printf("6. Densidade demográfica\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("cidade da Carta 1: %s - cidade carta 2: %s\n ", cidade, cidade2);
        break;
    case 2:
        printf("população da Carta 1: %d - população da carta 2: %d\n ", populacao, populacao2);
        if(populacao == populacao2){
            printf("Empate!\n");
        }
        else if (populacao > populacao2)
        {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }
        break;
    case 3:
    printf("Área da Carta 1: %.2f - Área da carta 2: %.2f \n", area, area2);
        if(area == area2){
            printf("Empate!\n");
        }
        else if (area > area2)
        {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }
        
        break;
    case 4:
    printf("Pib da Carta 1: %.2f - Pib da carta 2: %.2f \n", pib, pib2);
        if(pib == pib2){
            printf("Empate!\n");
        }
        else if (pib > pib2)
        {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }
        
        break;
    case 5:
    printf("Pontos turisticos da Carta 1: %d - Pontos turisticos da carta 2: %d \n", pontoTuristico, pontoTuristico2);
        if(pontoTuristico== pontoTuristico2){
            printf("Empate!\n");
        }
        else if (pontoTuristico > pontoTuristico2)
        {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }
        
        break;
    case 6:
    printf("Densidade demo. carta 1: %.2f - Densidade demo. carta 2: %.2f\n ", densidadePopulacional, densidadePopulacional2);
        if(densidadePopulacional == densidadePopulacional2){
            printf("Empate!\n");
        }
        else if (densidadePopulacional < densidadePopulacional2)
        {
            printf("Carta 1 venceu!\n");
        }
        else{
            printf("Carta 2 venceu!\n");
        }
        
        break;

    default:
        printf("### Opção invalida! ###\n");
        break;
    }


    /*saida de dados da carta 1
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

    // Comparações
    printf("*******Resultados*******");
    printf("(1) para vitória e (0) para derrota ");
    printf("Resultado carta 1\n");
    printf("População carta 1: (%d)\n", populacao > populacao2);
    printf("Área carta 1: (%d)\n", area > area2);
    printf("PIB carta 1: (%d)\n", pib > pib2);
    printf("Pontos Turísticos carta 1: (%d)\n", pontoTuristico > pontoTuristico2);
    printf("Densidade Populacional carta 1 (menor vence): (%d)\n", densidadePopulacional < densidadePopulacional2);
    printf("PIB per Capita carta 1: (%d)\n", pibCapita > pibCapita2);
    printf("Super Poder carta 1: (%d)\n", superPoder > superPoder2);
    printf("---------------------------------");
    printf("Resultado carta 2\n");
    printf("População carta 2: (%d)\n", populacao2 > populacao);
    printf("Área carta 2: (%d)\n", area2 > area);
    printf("PIB carta 2: (%d)\n", pib2 > pib);
    printf("Pontos Turísticos carta 2: (%d)\n", pontoTuristico2 > pontoTuristico);
    printf("Densidade Populacional carta 2 (menor vence): (%d)\n", densidadePopulacional2 < densidadePopulacional);
    printf("PIB per Capita carta 2: (%d)\n", pibCapita2 > pibCapita);
    printf("Super Poder carta 2: (%d)\n", superPoder2 > superPoder);

     antiga comparação usando if-else

    printf("--------------------------------------------------");

    if(populacao > populacao2){
        printf("A cidade %s, venceu em quesito de população\n", cidade);
    }
    else{
        printf("A cidade %s, venceu em quesito de população\n", cidade2);
    }
*/



    return 0;
}
