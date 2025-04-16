#include <stdio.h>

int main () {

    char estado [2], estado02 [2];
    char codigo [3], codigo02 [3];
    char cidade [50], cidade02 [50];
    int  pontosturisticos, pontosturisticos02;
    float area, pib, area02, pib02, populacao, populacao02;

    //ENTRADA DE DADOS ATRAVÉS DO scanf
    //cada variável com suas devidas declarações e funções
    
    printf("CARTA 01: \n");
    printf("digite seu estado: ");
    scanf("%s", estado);
    
    printf("digite o codigo: ");
    scanf("%s", codigo);

    printf("digite o cidade: ");
    scanf("%s", cidade);

    printf("digite a populacao: ");
    scanf("%f", &populacao);

    printf("digite a area: ");
    scanf("%f", &area);

    printf("digite o pib: ");
    scanf("%f", &pib);

    printf("digite a pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    //ENTRADA DE DADOS ATRAVÉS DO scanf
    //cada variável com suas devidas declarações e funções
    printf("\n");
    printf("CARTA 02: \n");
    printf("\n");
    printf("digite seu estado: ");
    scanf("%s", estado02);

    printf("digite o codigo: ");
    scanf("%s", codigo02);

    printf("digite o cidade: ");
    scanf("%s", cidade02);

    printf("digite a populacao: ");
    scanf("%f", &populacao02);

    printf("digite a area: ");
    scanf("%f", &area02);

    printf("digite o pib: ");
    scanf("%f", &pib02);

    printf("digite a pontos turisticos: ");
    scanf("%d", &pontosturisticos02);

    //declaração das variaveis para calculo de densidade e pibpercapita
    
    float  densidade, pibpercapita, densidade2, pibpercapita2;
    
    //calculo das variaveis

    densidade = populacao / area;
    pibpercapita = pib / populacao;

    densidade2 = populacao02 / area02;
    pibpercapita2 = pib02 / populacao02;


    //Impressão na tela da carta 01
    //Utilização do printf para tal tarefa

    printf("\n");
    printf("******IMPRESSÃO DA CARTA 01*****\n");
    printf("\n");
    printf("nome do estado : %s \n", estado);
    printf("codigo : %s \n", codigo);
    printf("nome da cidade : %s \n", cidade);
    printf("populacao : %.0f \n", populacao);
    printf("area : %.2f km² \n", area);
    printf("pib : %f bilhões de reais \n", pib);
    printf("pontos turisticos : %d \n", pontosturisticos);
    printf("densidade populacional : %.2f hab/km² \n", densidade);
    printf("PIB per Capita : %.2f reais \n", pibpercapita*1000000000);

    //Impressão na tela da carta 02
    //Utilização do printf para tal tarefa;

    printf("\n");
    printf("******IMPRESSÃO DA CARTA 02*****\n");
    printf("\n");
    printf("nome do estado : %s \n", estado02);
    printf("codigo : %s \n", codigo02);
    printf("nome da cidade : %s \n", cidade02);
    printf("populacao : %.0f \n", populacao02);
    printf("area : %.2f \n", area02);
    printf("pib : %.2f \n", pib02);
    printf("pontos turisticos : %d \n", pontosturisticos02);
    printf("densidade populacional : %.2f hab/km² \n", densidade2);
    printf("PIB per Capita : %.2f reais \n", pibpercapita2*1000000000);

    return 0;
}