# Movimentando Peças de Xadrez ♟️

Este programa em **C** simula o movimento de quatro peças de xadrez — **Torre**, **Bispo**, **Rainha** e **Cavalo** — com base nas escolhas do usuário.  
Ele demonstra o uso de **estruturas de controle**, **validação de entrada**, e **lógica condicional**.

## 🧠 Visão Geral

O objetivo do programa é permitir que o usuário escolha uma peça, informe quantas posições ela deve mover e em qual direção o movimento será realizado.  
Com base nas regras do xadrez, o programa exibe a direção do movimento quantas vezes forem necessárias.

### Peças Suportadas:

1. **Torre** — movimentos verticais e horizontais.
2. **Bispo** — movimentos nas diagonais.
3. **Rainha** — combina os movimentos da Torre e do Bispo.
4. **Cavalo** — movimento em “L”, combinando duas direções.

## ⚙️ Estrutura do Código

### 1. Declaração das Variáveis

```c
unsigned short int chessPiece = 1, positionsNumber = 1, direction = 1, secondDirection = 1;
const char *directionName, *secondDirectionName;
```

- `chessPiece`: identifica a peça selecionada.
- `positionsNumber`: número de casas a mover (1–10).
- `direction`: direção principal do movimento.
- `secondDirection`: direção complementar (usada pelo Cavalo).
- `directionName` / `secondDirectionName`: nomes textuais das direções.

---

### 2. Escolha da Peça

Um laço `do...while` garante que o usuário escolha um valor entre **1 e 4**.

```c
do {
  printf("Escolha Qual Peça Deseja Mover!\n");
  printf("1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n");
  scanf(" %hu", &chessPiece);
} while (chessPiece <= 0 || chessPiece > 4);
```

---

### 3. Definição do Número de Posições

Apenas as três primeiras peças solicitam um número de casas.  
O **Cavalo** move sempre uma posição composta (em “L”), então não precisa dessa entrada.

```c
if (chessPiece != 4) {
  do {
    printf("Quantas Posições a Peça Moverá?\n");
    scanf(" %hu", &positionsNumber);
  } while (positionsNumber <= 0 || positionsNumber > 10);
}
```

---

### 4. Lógica de Movimento

O programa utiliza `switch (chessPiece)` para aplicar as regras de cada peça.

#### 🏰 Torre

- Direções válidas: **Cima**, **Baixo**, **Direita**, **Esquerda**
- Usa `for` para repetir o movimento

#### ⛪ Bispo

- Direções válidas: **Cima Direita**, **Cima Esquerda**, **Baixo Direita**, **Baixo Esquerda**
- Usa `while` para repetir

#### 👑 Rainha

- Direções válidas: todas as da Torre e do Bispo
- Usa `do...while` para repetir

#### 🐴 Cavalo

- Movimento em “L”: combina duas direções (ex: “Cima + Direita”)
- Usa dois laços aninhados (`for` e `while`) para representar o deslocamento

---

### 5. Exemplo de Saída

```
Escolha Qual Peça Deseja Mover!
1. Torre
2. Bispo
3. Rainha
4. Cavalo
> 1

Quantas Posições a Peça Moverá?
> 3

Escolha a Direção que a Peça Moverá!
1. Cima
2. Baixo
3. Direita
4. Esquerda
> 3

Direita!
Direita!
Direita!
```

---

## 🧩 Estruturas de Controle Utilizadas

| Estrutura                    | Função                                |
| ---------------------------- | ------------------------------------- |
| `do...while`                 | Garante entrada válida do usuário     |
| `switch...case`              | Controla o comportamento de cada peça |
| `for`, `while`, `do...while` | Repetem o movimento da peça           |
| `if`                         | Valida condições e restringe valores  |

## ⚠️ Validação e Tratamento de Erros

O programa impede entradas inválidas através de verificações condicionais.  
Exemplo de mensagens de erro:

```
Peça Inválida!
Número de Posições Inválido!
Direção Inválida!
```

Isso evita que o programa leia valores incorretos e trave.

## 🚀 Compilação e Execução

### Compilar:

```bash
gcc movimentando-pecas-xadrez.c -o xadrez
```

### Executar:

```bash
./xadrez
```

## 📚 Conceitos Demonstrados

- **Validação de entradas do usuário**
- **Controle de fluxo e repetição**
- **Uso de variáveis e ponteiros de string**
- **Boas práticas: inicialização de variáveis para evitar lixo de memória**

---

**Autor:** Bruno — Estudante de Análise e Desenvolvimento de Sistemas  
**Linguagem:** C  
**Propósito:** Exercício prático sobre estruturas de controle, repetição e simulação lógica de movimentos de xadrez.
