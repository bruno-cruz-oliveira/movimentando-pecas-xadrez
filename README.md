# Movimentando Peças de Xadrez ♟️ — Versão com Funções Recursivas

Este programa em **C** simula o movimento de quatro peças de xadrez — **Torre**, **Bispo**, **Rainha** e **Cavalo** — utilizando **funções recursivas** para representar os movimentos das peças.  
Ele demonstra conceitos avançados de **recursão**, **controle de fluxo** e **validação de entrada** em C.

## 🧠 Visão Geral

O programa permite ao usuário escolher uma peça, a direção e o número de posições que ela deve mover.  
Com base nas regras do xadrez, o programa imprime o movimento da peça repetidamente — mas agora, usando **funções recursivas** no lugar de laços convencionais.

### Peças Suportadas:

1. **Torre** — movimentos verticais e horizontais.
2. **Bispo** — movimentos diagonais.
3. **Rainha** — combina os movimentos da Torre e do Bispo.
4. **Cavalo** — movimento em “L”, combinando duas direções.

## ⚙️ Estrutura do Código

### 1. Função Recursiva — `moveChessPiece()`

```c
void moveChessPiece(int positionsNumber, const char *directionName)
{
  if (positionsNumber > 0)
  {
    moveChessPiece(positionsNumber - 1, directionName);
    printf("%s\n", directionName);
  }
}
```

Essa função imprime o nome da direção (`directionName`) o número de vezes indicado por `positionsNumber`.  
A recursão continua chamando a função até que o contador atinja zero, quando a pilha de chamadas começa a imprimir na ordem correta.

**Exemplo:**  
Se `positionsNumber = 3` e `directionName = "Direita!"`, a saída será:

```
Direita!
Direita!
Direita!
```

---

### 2. Declaração de Variáveis

```c
unsigned short int chessPiece = 1, positionsNumber = 1, direction = 1, secondDirection = 1;
const char *directionName, *secondDirectionName;
```

Essas variáveis controlam as escolhas do usuário:

- `chessPiece`: peça selecionada.
- `positionsNumber`: número de casas a mover.
- `direction`: direção principal.
- `secondDirection`: usada no movimento em “L” do Cavalo.
- `directionName`: armazena o texto da direção escolhida.

Todas as variáveis são inicializadas para evitar **lixo de memória**.

---

### 3. Escolha da Peça

O usuário escolhe qual peça mover, e um `do...while` garante que a entrada esteja entre **1 e 4**.

```c
do {
  printf("Escolha Qual Peça Deseja Mover!\n");
  printf("1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n");
  scanf(" %hu", &chessPiece);
} while (chessPiece <= 0 || chessPiece > 4);
```

---

### 4. Lógica de Movimento

O comportamento de cada peça é definido com `switch (chessPiece)`:

#### 🏰 Torre

- Movimentos verticais e horizontais.
- Usa **recursão direta** para imprimir as direções repetidas.

#### ⛪ Bispo

- Movimentos nas diagonais.
- Usa uma combinação de `for` com chamadas recursivas para simular as direções duplas (horizontal + vertical).

#### 👑 Rainha

- Combina movimentos da Torre e do Bispo.
- Usa recursão condicional: se a direção for diagonal, faz chamadas recursivas duplas.

#### 🐴 Cavalo

- Movimento em “L”: combina duas direções com recursão e laço `for`.
- Exemplo: “Cima” seguido de “Direita”.

---

### 5. Exemplo de Saída

```
Escolha Qual Peça Deseja Mover!
1. Torre
2. Bispo
3. Rainha
4. Cavalo
> 2

Quantas Posições a Peça Moverá?
> 2

Escolha a Direção!
1. Cima Direita
2. Cima Esquerda
3. Baixo Direita
4. Baixo Esquerda
> 1

Direita!
Cima!
Direita!
Cima!
```

## 🔁 Como Funciona a Recursão

1. Cada chamada da função `moveChessPiece()` chama ela mesma, reduzindo `positionsNumber` em 1.
2. Quando o número chega a 0, a função para de chamar a si mesma.
3. Ao “voltar” na pilha, cada chamada imprime a direção — criando o efeito repetitivo.

Visualmente:

```
moveChessPiece(3, "Cima!") → moveChessPiece(2, "Cima!") → moveChessPiece(1, "Cima!") → stop
                               ↑ imprime "Cima!"
                               ↑ imprime "Cima!"
                               ↑ imprime "Cima!"
```

## ⚠️ Validação e Tratamento de Erros

O programa impede entradas inválidas com verificações condicionais:

```
Peça Inválida!
Número de Posições Inválido!
Direção Inválida!
```

Além disso, variáveis são **inicializadas com valores padrão** para evitar comportamento indefinido.

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

- **Recursão** (função chamando a si mesma)
- **Controle de fluxo e repetição**
- **Validação de entrada do usuário**
- **Boas práticas de inicialização de variáveis**
- **Uso de ponteiros para manipular strings constantes**

---

**Autor:** Bruno — Estudante de Análise e Desenvolvimento de Sistemas  
**Linguagem:** C  
**Propósito:** Exercício prático de lógica recursiva e simulação de movimentos de xadrez em terminal.
