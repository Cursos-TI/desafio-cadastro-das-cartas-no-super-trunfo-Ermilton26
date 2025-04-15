#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //DECLARAÇAO DE VARIÁVEIS PARA CARTA 01  E CARTA 02

    char estado [50], estado02 [50];
    char codigo [50], codigo02 [50];
    char cidade [50], cidade02 [50];
    int populacao, pontosturisticos, populacao02, pontosturisticos02;
    float area, pib, area02, pib02;

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
    scanf("%d", &populacao);

    printf("digite a area: ");
    scanf("%f", &area);

    printf("digite o pib: ");
    scanf("%f", &pib);

    printf("digite a pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    //ENTRADA DE DADOS ATRAVÉS DO scanf
    //cada variável com suas devidas declarações e funções

    printf("CARTA 02: \n");
    printf("digite seu estado: ");
    scanf("%s", estado02);

    printf("digite o codigo: ");
    scanf("%s", codigo02);

    printf("digite o cidade: ");
    scanf("%s", cidade02);

    printf("digite a populacao: ");
    scanf("%d", &populacao02);

    printf("digite a area: ");
    scanf("%f", &area02);

    printf("digite o pib: ");
    scanf("%f", &pib02);

    printf("digite a pontos turisticos: ");
    scanf("%d", &pontosturisticos02);

    //Impressão na tela da carta 01
    //Utilização do printf para tal tarefa;

    printf("nome do estado : %s \n", estado);
    printf("codigo : %s \n", codigo);
    printf("nome da cidade : %s \n", cidade);
    printf("populacao : %d \n", populacao);
    printf("area : %f \n", area);
    printf("pib : %f \n", pib);
    printf("pontos turisticos : %d \n", pontosturisticos);

    //Impressão na tela da carta 02
    //Utilização do printf para tal tarefa;

    printf("nome do estado : %s \n", estado02);
    printf("codigo : %s \n", codigo02);
    printf("nome da cidade : %s \n", cidade02);
    printf("populacao : %d \n", populacao02);
    printf("area : %f \n", area02);
    printf("pib : %f \n", pib02);
    printf("pontos turisticos : %d \n", pontosturisticos02);



    return 0;
}
