#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

int escolhadojogador, escolhadocomputador;

srand(time(0));

printf("*****JOGO DE JOKENPO*******\n");
printf("\n");
printf("ESCOLHA UMA OPÇÃO \n");
printf("1. PEDRA \n");
printf("2. PAPEL \n");
printf("3. TESOURA \n");
printf("ESCOLHA UM NUMERO DE 1 A 3: \n");
scanf("%d", &escolhadojogador);

escolhadocomputador= rand() % 3 + 1;

switch (escolhadojogador)
{
case 1:
    printf("jogador: Pedra - \n");
break;
case 2:
    printf("jogador: Papel - \n");
break;
case 3:
  printf("jogador: Tesoura - \n");
break;
default:
  printf("opção invalida!!!!!!");
}

switch (escolhadocomputador)
{
case 1:
    printf("computador: Pedra - \n");
break;
case 2:
    printf("computador: Papel - \n");
break;
case 3:
printf("computador: Tesoura - \n")  ;
break;
}




  return 0;
}