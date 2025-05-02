#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    char estado [10], estado02 [10];
    char codigo [10], codigo02 [10];
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

    float superpoder1, superpoder2;
    
    
    superpoder1 = (populacao + area + pib + pontosturisticos + pibpercapita + 
        (1/densidade));
    
    superpoder2 = (populacao02 + area02 + pib02 + pontosturisticos02 + pibpercapita2 + 
                   (1/densidade2));

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
    printf("SUPER PODER CARTA 1 : %.2f \n", superpoder1);

    //Impressão na tela da carta 02
    //Utilização do printf para tal tarefa;

    printf("\n");
    printf("******IMPRESSÃO DA CARTA 02*****\n");
    printf("\n");
    printf("nome do estado : %s \n", estado02);
    printf("codigo : %s \n", codigo02);
    printf("nome da cidade : %s \n", cidade02);
    printf("populacao : %.0f \n", populacao02);
    printf("area : %.2f  km² \n", area02);
    printf("pib : %.2f bilhões de reais\n", pib02);
    printf("pontos turisticos : %d \n", pontosturisticos02);
    printf("densidade populacional : %.2f hab/km² \n", densidade2);
    printf("PIB per Capita : %.2f reais \n", pibpercapita2*1000000000);
    printf("SUPER PODER CARTA 2 : %.2f \n", superpoder2);

/*  Comparação de Cartas:

    População: Carta 1 venceu (1)
    Área : Carta 1 venceu (1)
    PIB: Carta 1 venceu (1)
    Pontos Turísticos: Carta 1 venceu (1)
    Densidade Populacional: Carta 2 venceu (0)
    PIB per Capita: Carta 1 venceu (1)
    Super Poder: Carta 1 venceu (1)*/

    printf("\n");
    printf("******COMPARAÇÃO DE CARTAS*****\n");
    printf("\n");

      if (populacao > populacao02) {  // Verifica se valor1 é maior que valor2
        printf("População : Carta 01 venceu! (1) \n");
      } else {
        printf("População : Carta 02 venceu! (0)\n");
      }

      if (area > area02) {  // Verifica se valor1 é maior que valor2
        printf("Area : Carta 01 venceu! (1) \n");
      } else {
        printf("Area : Carta 02 venceu! (0)\n");
      }
    
      if (pib > pib02) {  // Verifica se valor1 é maior que valor2
        printf("PIB : Carta 01 venceu! (1) \n");
      } else {
        printf("PIB : Carta 02 venceu! (0)\n");
      }
      if (pontosturisticos > pontosturisticos02) {  // Verifica se valor1 é maior que valor2
        printf("Pontos turisticos : Carta 01 venceu! (1) \n");
      } else {
        printf("Pontos turisticos : Carta 02 venceu! (0)\n");
      }
      
      if (densidade2 > densidade) {  // Verifica se valor1 é maior que valor2
        printf("Densidade : Carta 01 venceu! (1) \n");
      } else {
        printf("Densidade : Carta 02 venceu! (0)\n");
      }

      if (pibpercapita > pibpercapita2) {  // Verifica se valor1 é maior que valor2
        printf("PIB percapita : Carta 01 venceu! (1) \n");
      } else {
        printf("PIB percapita : Carta 02 venceu! (0)\n");
      }

      if (superpoder1 > superpoder2) {  // Verifica se valor1 é maior que valor2
        printf("Super poder : Carta 01 venceu! (1) \n");
      } else {
        printf("Super Poder : Carta 02 venceu! (0)\n");
      }
      printf("\n");
      printf("Comparação de cartas (Atributo: População): \n");
      printf("\n");

      printf("Carta 1 - %s (%s) :  %.0f \n", cidade, estado, populacao);
      printf("Carta 2 - %s (%s) :  %.0f \n", cidade02, estado02, populacao02);
      printf("\n");

      if (populacao > populacao02) {  // Verifica se valor1 é maior que valor2
        printf("Resultado : Carta 01 (%s) venceu! \n", cidade);
      } else {
        printf("Resultado : Carta 02 (%s) venceu! \n", cidade02);
      }     
//Carta 1 - São Paulo (SP): 12.300.000

//Carta 2 - Rio de Janeiro (RJ): 6.000.000

//Resultado: Carta 1 (São Paulo) venceu!


      printf("##### SELEÇÃO DE ATRIBUTOS PARA COMPARAÇÃO #####");
int opcao;
    
    printf("\n");
    printf("Dgite 1  - para o atributo POPULAÇÃO \n");
    printf("Dgite 2 - para o atributo AREA \n");
    printf("Dgite 3  - para o atributo PIB \n");
    printf("Dgite 4  - para o atributo PONTOS TURISTICOS \n");
    printf("\n");
    printf("#### QUAL ATRIBUTO VOCÊ DESEJA COMPARAR???? #### : ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
    case 1:
      printf("Comparação do atributo - POPULAÇÃO \n");
      if (populacao > populacao02) {
        printf("Carta 01 - VENCEU !!!!!! \n");
      } else if (populacao < populacao02) {
        printf ("Carta 02 - VENCEU !!!!!! \n");
      } else {
        printf("JOGO EMPATADO \n");
      }
    break;
    case 2:
      printf("Comparação do atributo - AREA \n");
      if (area > area02) {
        printf("Carta 01 - VENCEU !!!!!! \n");
      } else if (area < area02) {
        printf ("Carta 02 - VENCEU !!!!!! \n");
      } else {
        printf("JOGO EMPATADO \n");
      }
    break;  
    case 3:
      printf("Comparação do atributo - PIB \n");
      if (pib > pib02) {
        printf("Carta 01 - VENCEU !!!!!! \n");
      } else if (pib < pib02) {
        printf ("Carta 02 - VENCEU !!!!!! \n");
      } else {
        printf("JOGO EMPATADO \n");
      }
    break;  

    case 4:
      printf("Comparação do atributo - PIB \n");
      if (pontosturisticos > pontosturisticos02) {
        printf("Carta 01 - VENCEU !!!!!! \n");
      } else if (pontosturisticos < pontosturisticos02) {
        printf ("Carta 02 - VENCEU !!!!!! \n");
      } else {
        printf("JOGO EMPATADO \n");
      }
    break;  
    default:
    printf("Opçao inválida !!!!!!!! \n");
    break;
    }

    int resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;
    float soma1, soma2, soma3, soma4, soma5, soma6;

    printf("\n");
    printf("\n");

  printf("BEM VINDO A COMPARAÇÃO DE ATRIBUTOS \n");
  printf ("Escolha o primeiro atributo da CARTA 01 \n");
  printf("1. População \n");
  printf("2. Area \n");
  printf("3. Pib \n");

  printf("Escolha a comparação : ");
  scanf("%d", &primeiroAtributo);

  switch (primeiroAtributo)
  {
  case 1:
    printf("Você escolheu o atributo População! \n");
    printf("O atributo população da carta 01 é %.2f \n",  populacao);
    printf("O atributo população da carta 02 é %.2f \n",  populacao02);
    

    break;
  case 2:
      printf("Você escolheu o atributo Area! \n");
      printf("O atributo area da carta 01 é %.2f \n",  area);
      printf("O atributo area da carta 02 é %.2f \n",  area02);
      //resultado1  = area > area02 ? 1 : 0;
      break;
  case 3:

      printf("Você escolheu o atributo PIB! \n");
      printf("O atributo PIB da carta 01 é %.2f \n",  pib);
      printf("O atributo PIB da carta 02 é %.2f \n",  pib02);
      //resultado1  = pib > pib02 ? 1 : 0;
      break;
  default:
    printf("Opção inválida!!!! \n");
    break;
  }

  printf ("Escolha o segundo atributo. \n");
  printf("1. População \n");
  printf("2. Area \n");
  printf("3. PIB \n");

  printf("Escolha a comparação : ");
  scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) 
    {
      printf("Você escolheu o mesmo atributo !!! \n");

    } else {

  switch (segundoAtributo)
  {
  case 1:
    printf("Você escolheu o atributo População! \n");
    printf("O atributo população da carta 01 é %.2f \n",  populacao);
    printf("O atributo população da carta 02 é %.2f \n",  populacao02);
    //resultado2  = populacao > populacao02 ? 1 : 0;
    break;
  case 2:
  printf("Você escolheu o atributo Area! \n");
  printf("O atributo AREA da carta 01 é %.2f \n",  area);
  printf("O atributo AREA da carta 02 é %.2f \n",  area02);
    //resultado2 = area > area02? 1 : 0;
    break;
  case 3:
  printf("Você escolheu o atributo PIB! \n");
  printf("O atributo PIB da carta 01 é %.2f \n",  area);
  printf("O atributo PIB da carta 02 é %.2f \n",  area02);
      //resultado2 = pib > pib02? 1 : 0;
      break;
  default:
    printf("Opção inválida!!!! \n");
    break;
  } }
    
    soma1 = populacao + area;   //atributo 1 - carta 01 
    soma2 = populacao + pib;    // atributo 2 - carta 01
    soma3= area + pib;          //atributo 3 - carta 01
    soma4= populacao02 + area02; // atributo 1 - carta 02
    soma5 = populacao02 + pib02; // atributo 2 - carta 02
    soma6 = area02 + pib02;       // atributo 3 - carta 02
    
    printf("soma %.2f \n", soma1);
    printf("soma %.2f \n", soma2);
    printf("soma %.2f \n", soma3);
    printf("soma %.2f \n", soma4);
    printf("soma %.2f \n", soma5);
    printf("soma %.2f \n", soma6);

    if ((primeiroAtributo == 1) && (segundoAtributo == 2)) {
      printf("Soma dos atributos da carta 01 é :  %.2f \n", soma1);
      printf("Soma dos atributos da carta 02 é : %.2f \n", soma5);
      if (soma1 > soma5) {
        printf("Carta 01 - Venceu!!!!! \n");
      } else 
        printf("Carta 02 - Venceu !!!! \n");

    } else if ((primeiroAtributo == 1) && (segundoAtributo == 3)) {
      printf("Soma dos atributos da carta 01 é : %.2f \n", soma1);
      printf("Soma dos atributos da carta 02 é : %.2f \n", soma6); 
      if (soma1 > soma6) {
        printf("Carta 01 - Venceu!!!!! \n");
      } else 
        printf("Carta 02 - Venceu !!!! \n");

    } else if ((primeiroAtributo == 2) && (segundoAtributo == 1)) {
      printf("Soma dos atributos da carta 01 é : %.2f \n", soma2);
      printf("Soma dos atributos da carta 02 é : %.2f \n", soma4); 
      if (soma2 > soma4) {
        printf("Carta 01 - Venceu!!!!! \n");
      } else 
        printf("Carta 02 - Venceu !!!! \n");

    } else if ((primeiroAtributo == 2) && (segundoAtributo == 3)) {
      printf("Soma dos atributos da carta 01 é : %.2f \n", soma2);
      printf("Soma dos atributos da carta 02 é : %.2f \n", soma6); 
      if (soma2 > soma6) {
        printf("Carta 01 - Venceu!!!!! \n");
      } else 
        printf("Carta 02 - Venceu !!!! \n");

    } else if ((primeiroAtributo == 3) && (segundoAtributo == 1)) {
      printf("Soma dos atributos da carta 01 é : %.2f \n", soma6);
      printf("Soma dos atributos da carta 02 é : %.2f \n", soma1);
      if (soma6 > soma1) {
        printf("Carta 01 - Venceu!!!!! \n");
      } else 
        printf("Carta 02 - Venceu !!!! \n");

    } else if ((primeiroAtributo == 3 ) && (segundoAtributo == 2)) {
      printf("Soma dos atributos da carta 01 é : %.2f \n", soma3);
      printf("Soma dos atributos da carta 02 é : %.2f \n", soma5);
      if (soma3 > soma5) {
        printf("Carta 01 - Venceu!!!!! \n");
      } else 
        printf("Carta 02 - Venceu !!!! \n");
    }
    
  
    return 0;
}