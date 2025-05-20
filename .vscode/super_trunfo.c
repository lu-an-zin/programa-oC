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
    printf("*******Resultados*******")
    printf("(1) para vitória e (0) para derrota ")
    printf("\nResultado carta 1\n");
    printf("População carta 1: (%d)\n", populacao > populacao2);
    printf("Área carta 1: (%d)\n", area > area2);
    printf("PIB carta 1: (%d)\n", pib > pib2);
    printf("Pontos Turísticos carta 1: (%d)\n", pontoTuristico > pontoTuristico2);
    printf("Densidade Populacional carta 1 (menor vence): (%d)\n", densidadePopulacional < densidadePopulacional2);
    printf("PIB per Capita carta 1: (%d)\n", pibCapita > pibCapita2);
    printf("Super Poder carta 1: (%d)\n", superPoder > superPoder2);
    printf("---------------------------------")
    printf("\nResultado carta 2\n");
    printf("População carta 2: (%d)\n", populacao2 > populacao);
    printf("Área carta 2: (%d)\n", area2 > area);
    printf("PIB carta 2: (%d)\n", pib2 > pib);
    printf("Pontos Turísticos carta 2: (%d)\n", pontoTuristico2 > pontoTuristico);
    printf("Densidade Populacional carta 2 (menor vence): (%d)\n", densidadePopulacional2 < densidadePopulacional);
    printf("PIB per Capita carta 2: (%d)\n", pibCapita2 > pibCapita);
    printf("Super Poder carta 2: (%d)\n", superPoder2 > superPoder);


    return 0;
}