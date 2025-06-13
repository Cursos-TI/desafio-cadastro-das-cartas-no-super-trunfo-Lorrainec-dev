#include <stdio.h>

int main() {

    char estado [2]; //de A a H
    char codigo [5]; 
    char cidade [15];
    int populacao;
    int PontosTuristicos;
    float PIB;
    float area;
    float DensidadePopulacional ;
    float PIBperCapita ;


//dados da carta 1 
    printf("**Digite os dados da carta 1**\n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Código:\n");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("População total:\n");
    scanf("%d", &populacao);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &PontosTuristicos);

    printf("Área total:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &PIB);

//resultado carta 1
    printf("**Carta 1!**\n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s%s \n", estado ,codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Pontos Turisticos: %d \n" , PontosTuristicos);
    printf("Área total: %f KM²\n", area);
    printf("PIB: %f Bilhões de Reais\n", PIB);

    PIBperCapita = (float)(PIB / populacao);
    printf("PIB per Capita: %.2f Reais \n", PIBperCapita);

    DensidadePopulacional = (float)(populacao / area);
    printf("Densidade Populacional: %.2f hab/km² \n\n", DensidadePopulacional);



//dados da carta 2
    printf("**Digite os dados da carta 2**\n");

    printf("Digite o Estado:\n");
    scanf("%s", &estado);

    printf("Digite o Código:\n");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("População total:\n");
    scanf("%d", &populacao);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &PontosTuristicos);

    printf("Área total:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &PIB);


//Resultado carta 2
    printf("Carta 2!\n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s%s \n", estado ,codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Pontos Turisticos: %d \n" , PontosTuristicos);
    printf("Área total: %f KM² \n", area);
    printf("PIB: %f Bilhões de Reais\n", PIB);

    PIBperCapita = (float)(PIB / populacao);
    printf("PIB per Capita: %.2f Reais\n", PIBperCapita);

    DensidadePopulacional = (float)(populacao / area);
    printf("Densidade Populacional: %.2f hab/km² \n" , DensidadePopulacional);


    return 0;
} 
