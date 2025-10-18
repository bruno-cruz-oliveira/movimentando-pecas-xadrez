# Movimentando Peças de Xadrez 🧩

Este programa em C simula o movimento de três peças de xadrez — **Torre**, **Bispo** e **Rainha** — com base nas escolhas do usuário.

## 🧠 Visão Geral

O objetivo do programa é demonstrar o uso de estruturas de controle em C (`do-while`, `switch-case`, `for`, `while`) para controlar fluxos de decisão e repetição conforme a escolha do usuário.  
O usuário interage com o programa escolhendo:

1. **Qual peça mover** (Torre, Bispo ou Rainha)
2. **Quantas posições mover** (de 1 a 10)
3. **A direção do movimento**, conforme as possibilidades da peça.

O programa, então, imprime repetidamente a direção correspondente ao movimento escolhido.

## ⚙️ Estrutura do Código

### 1. **Declaração de Variáveis**

```c
unsigned short int chessPiece = 1, positionsNumber = 1, direction = 1;
const char *directionName;
```

- `chessPiece`: armazena a peça escolhida pelo usuário.
- `positionsNumber`: número de posições que a peça deve se mover.
- `direction`: direção do movimento (varia conforme a peça).
- `directionName`: texto da direção, definido conforme a escolha do usuário.

---

### 2. **Escolha da Peça**

Um laço `do...while` garante que o valor digitado esteja entre 1 e 3.

```c
do {
    printf("Escolha Qual Peça Deseja Mover!\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf(" %hu", &chessPiece);
} while (chessPiece <= 0 || chessPiece > 3);
```

---

### 3. **Número de Posições**

Semelhante à escolha da peça, o usuário deve informar quantas casas mover (1 a 10).

```c
do {
    printf("Quantas Posições a Peça Moverá?\n");
    scanf(" %hu", &positionsNumber);
} while (positionsNumber <= 0 || positionsNumber > 10);
```

---

### 4. **Lógica de Movimentação**

O programa usa um `switch(chessPiece)` para tratar cada tipo de peça separadamente:

#### 🏰 Torre

Movimenta-se apenas nas direções **verticais e horizontais**.
Usa um **loop `for`** para repetir o movimento.

#### ⛪ Bispo

Movimenta-se apenas **nas diagonais**.
Usa um **loop `while`** para repetir o movimento.

#### 👑 Rainha

Combina todos os movimentos da Torre e do Bispo.
Usa um **loop `do...while`** para repetir o movimento.

---

### 5. **Direções Possíveis**

Cada peça apresenta um menu de direções diferentes, e o programa repete a impressão da direção conforme o número de posições informado.

Exemplo de saída:

```
Escolha a Direção que a Peça Moverá!
1. Cima
2. Baixo
3. Direita
4. Esquerda
> 1

Cima!
Cima!
Cima!
```

## 🧩 Estruturas de Controle Utilizadas

| Estrutura                    | Função                                            |
| ---------------------------- | ------------------------------------------------- |
| `do...while`                 | Repetir até que uma entrada válida seja fornecida |
| `switch...case`              | Determinar o comportamento de cada peça           |
| `for`, `while`, `do...while` | Exibir o movimento repetidamente                  |
| `if`                         | Validar as escolhas do usuário                    |

## ⚠️ Tratamento de Erros

O programa valida todas as entradas para evitar valores inválidos:

- Peça deve estar entre **1 e 3**
- Número de posições entre **1 e 10**
- Direção dentro das opções válidas da peça

Em caso de erro, o programa exibe mensagens como:

```
Peça Inválida!
Número de Posições Inválido!
Direção Inválida!
```

## 🚀 Compilação e Execução

### Compilando:

```bash
gcc movimentando-pecas-xadrez.c -o xadrez
```

### Executando:

```bash
./xadrez
```

## 📚 Conceitos Demonstrados

- Validação de entradas do usuário
- Controle de fluxo e repetição (`for`, `while`, `do-while`)
- Estrutura condicional `switch-case`
- Uso de ponteiros (`const char *`)
- Lógica booleana em expressões de repetição

**Autor:** Bruno - Estudante de Análise e Desenvolvimento de Sistemas  
**Linguagem:** C  
**Propósito:** Exercício de lógica e controle de fluxo usando simulação de movimentos de xadrez.
