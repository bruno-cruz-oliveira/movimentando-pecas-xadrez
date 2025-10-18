#include <stdio.h>

int main()
{

  // Definição das variáveis auxiliares com o valor já definido para evitar a armazenamento de "lixo"
  unsigned short int chessPiece = 1, positionsNumber = 1, direction = 1, secondDirection = 1;
  const char *directionName, *secondDirectionName;

  // Loops para impedir que o programa seja interrompido caso a opção escolhida, seja invalida
  // Pegunta qual Paça será movida
  do
  {
    if (chessPiece && chessPiece <= 0 || chessPiece > 4)
    {
      printf("Paça Invalida!\n");
    }

    printf("Escolha Qual Paça Deseja Move!\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf(" %hu", &chessPiece);
  } while (chessPiece <= 0 || chessPiece > 4);

  if (chessPiece != 4)
  {
    // Pegunta o numero de posições que Paça a moverá
    do
    {
      if (positionsNumber && positionsNumber <= 0 || positionsNumber > 10)
      {
        printf("Numero de Posições Invalido!\n");
        printf("Numero de Posições deve ser entre 1 e 10!\n");
      }

      printf("Quantas Posições a Paça Moverá!\n");
      scanf(" %hu", &positionsNumber);
    } while (positionsNumber <= 0 || positionsNumber > 10);
  }
  else
    positionsNumber = 1;

  switch (chessPiece)
  {
  // Torre
  case 1:
  {
    // Pergunta em qual direção a peça moverá com base nela
    do
    {
      if (direction && direction <= 0 || direction > 4)
      {
        printf("Direção Invalida!\n");
      }

      printf("Escolha a Direção que a Paça Moverá!\n");
      printf("1. Cima\n");
      printf("2. Baixo\n");
      printf("3. Direita\n");
      printf("4. Esquerda\n");
      scanf(" %hu", &direction);
    } while (direction <= 0 || direction > 4);

    // "Armazena" qual direção foi escolhida
    switch (direction)
    {
    case 1:
      directionName = "Cima!";
      break;
    case 2:
      directionName = "Baixo!";
      break;
    case 3:
      directionName = "Direita!";
      break;
    case 4:
      directionName = "Esquerda!";
      break;
    }

    // Imprime a direção do movimento
    for (int i = 1; i <= positionsNumber; i++)
    {
      printf("%s\n", directionName);
    }
    break;
  }

  // Bispo
  case 2:
  {
    // Pergunta em qual direção a peça moverá com base nela
    do
    {
      if (direction && direction <= 0 || direction > 4)
      {
        printf("Direção Invalida!\n");
      }

      printf("Escolha a Direção que o Bispo Moverá!\n");
      printf("1. Cima Direita\n");
      printf("2. Cima Esquerda\n");
      printf("3. Baixo Direita\n");
      printf("4. Baixo Esquerda\n");
      scanf(" %hu", &direction);
    } while (direction <= 0 || direction > 4);

    // "Armazena" qual direção foi escolhida
    switch (direction)
    {
    case 1:
      directionName = "Cima Direita!";
      break;
    case 2:
      directionName = "Cima Esquerda!";
      break;
    case 3:
      directionName = "Baixo Direita!";
      break;
    case 4:
      directionName = "Baixo Esquerda!";
      break;
    }

    // Imprime a direção do movimento
    int i = 1;
    while (i <= positionsNumber)
    {
      printf("%s\n", directionName);
      i++;
    }
    break;
  }

  // Rainha
  case 3:
  {
    // Pergunta em qual direção a peça moverá com base nela
    do
    {
      if (direction && direction <= 0 || direction > 8)
      {
        printf("Direção Invalida!\n");
      }

      printf("Escolha a Direção que o Bispo Moverá!\n");
      printf("1. Cima\n");
      printf("2. Baixo\n");
      printf("3. Direita\n");
      printf("4. Esquerda\n");
      printf("5. Cima Direita\n");
      printf("6. Cima Esquerda\n");
      printf("7. Baixo Direita\n");
      printf("8. Baixo Esquerda\n");
      scanf(" %hu", &direction);
    } while (direction <= 0 || direction > 8);

    // "Armazena" qual direção foi escolhida
    switch (direction)
    {
    case 1:
      directionName = "Cima!";
      break;
    case 2:
      directionName = "Baixo!";
      break;
    case 3:
      directionName = "Direita!";
      break;
    case 4:
      directionName = "Esquerda!";
      break;
    case 5:
      directionName = "Cima Direita!";
      break;
    case 6:
      directionName = "Cima Esquerda!";
      break;
    case 7:
      directionName = "Baixo Direita!";
      break;
    case 8:
      directionName = "Baixo Esquerda!";
      break;
    }

    // Imprime a direção do movimento
    int i = 1;
    do
    {
      printf("%s\n", directionName);
      i++;
    } while (i <= positionsNumber);
    break;
  }

  case 4:
  {
    // Pergunta qual a Primeira direção que o cavalo se moverá
    {
      if (direction && direction <= 0 || direction > 4)
      {
        printf("Direção Invalida!\n");
      }

      printf("Escolha a Primeira Direção que o Cavalo Moverá!\n");
      printf("1. Cima\n");
      printf("2. Baixo\n");
      printf("3. Direita\n");
      printf("4. Esquerda\n");
      scanf(" %hu", &direction);
    }
    while (direction <= 0 || direction > 4)
      ;

    // Pergunta qual a Segunda direção que o cavalo se moverá
    do
    {
      if (secondDirection && secondDirection <= 0 || secondDirection > 2)
      {
        printf("Direção Invalida!\n");
      }

      printf("Escolha a Segunda Direção que o Cavalo Moverá!\n");

      if (direction == 3 || direction == 4)
      {
        printf("1. Cima\n");
        printf("2. Baixo\n");
      }
      else
      {
        printf("1. Direita\n");
        printf("2. Esquerda\n");
      }

      scanf(" %hu", &secondDirection);
    } while (secondDirection <= 0 || secondDirection > 2);

    // "Armazena" qual foi a primeira direção escolhida
    switch (direction)
    {
    case 1:
      directionName = "Cima!";
      break;
    case 2:
      directionName = "Baixo!";
      break;
    case 3:
      directionName = "Direita!";
      break;
    case 4:
      directionName = "Esquerda!";
      break;
    }

    // "Armazena" qual foi a segunda direção escolhida
    switch (secondDirection)
    {
    case 1:
      if (direction == 1 || direction == 2)
        secondDirectionName = "Direita!";
      else
        secondDirectionName = "Cima!";
      break;
    case 2:
      if (direction == 1 || direction == 2)
        secondDirectionName = "Esquerda!";
      else
        secondDirectionName = "Baixo!";
      break;
    }

    int j = 1;

    for (int i = 1; i <= positionsNumber; i++)
    {
      // Imprime a Primeira direção do movimento
      while (j <= 2)
      {
        printf("%s\n", directionName);
        j++;
      }

      // Imprime a segunda direção do movimento
      printf("%s\n", secondDirectionName);
    }
  }
  }

  return 0;
}