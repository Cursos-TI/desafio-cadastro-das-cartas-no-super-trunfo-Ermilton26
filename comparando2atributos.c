#include <stdio.h>


int main() {
  
  int resultado1, resultado2;
  char primeiroAtributo, segundoAtributo;
  int ataque1, ataque2, ataque3, defesa1, defesa2, recuo1, recuo2;

  ataque1 = 1;
  ataque2 = 0;
  defesa1 = 1;
  defesa2 = 0;
  recuo1 = 1;
  recuo2 = 0;

  printf("BEM VINDO AO JOGO \n");
  printf ("Escolha o primeiro atributo. \n");
  printf("A. Ataque \n");
  printf("D. Defesa \n");
  printf("R. Recuo \n");

  printf("Escolha a comparação : ");
  scanf("%c", &primeiroAtributo);


  switch (primeiroAtributo)
  {
  case 'A':
  case 'a':
    printf("Você escolheu o atributo Ataque! \n");
    resultado1  = ataque1 > ataque2 ? 1 : 0;
    break;
    case 'D':
    case 'd':
      printf("Você escolheu o atributo Defesa! \n");
      resultado1  = defesa1 > defesa2 ? 1 : 0;
      break;
      case 'R':
      case 'r':
        printf("Você escolheu o atributo Ataque! \n");
        resultado1  = recuo1 > recuo2 ? 1 : 0;
        break;
  default:
    printf("Opção inválida!!!! \n");
    break;
  }

  printf ("Escolha o segundo atributo. \n");
  printf("A. Ataque \n");
  printf("D. Defesa \n");
  printf("R. Recuo \n");

  printf("Escolha a comparação : \n");
  scanf("%c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) 
    {

      printf("Você escolheu o mesmo atributo !!! \n");

    } else {
  switch (segundoAtributo)
  {
  case 'A':
  case 'a':
    printf("Você escolheu o atributo Ataque! \n");
    resultado2  = ataque1 > ataque2 ? 1 : 0;
    break;
    case 'D':
    case 'd':
      printf("Você escolheu o atributo Defesa! \n");
      resultado2 = defesa1 > defesa2 ? 1 : 0;
      break;
      case 'R':
      case 'r':
        printf("Você escolheu o atributo Ataque! \n");
        resultado2 = recuo1 > recuo2 ? 1 : 0;
        break;
  default:
    printf("Opção inválida!!!! \n");
    break;
  }
    }
  return 0;
}