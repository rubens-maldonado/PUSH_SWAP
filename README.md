# Push Swap

O **Push Swap** é um projeto da 42 Rio que consiste em ordenar uma pilha de números usando um conjunto limitado de operações em duas pilhas (`A` e `B`). O objetivo do projeto é desenvolver um algoritmo eficiente de ordenação com um número mínimo de movimentos.

## Objetivo do Projeto

O **Push Swap** tem como objetivo desenvolver um programa capaz de ordenar uma lista de números inteiros utilizando apenas um conjunto específico de operações em pilhas. O desafio está em encontrar a solução mais eficiente em termos de quantidade de movimentos.

## Regras do Projeto

- O programa recebe uma sequência de números inteiros como argumento.
- Apenas as operações permitidas podem ser utilizadas para ordenar os números.
- O objetivo é ordenar a pilha **A** com o menor número possível de movimentos.
- O programa deve lidar com casos como números repetidos, entrada inválida e limites de números inteiros.

## Operações Disponíveis

O **Push Swap** permite o uso das seguintes operações para manipular as pilhas:

- **sa**: Troca os dois primeiros elementos da pilha A.
- **sb**: Troca os dois primeiros elementos da pilha B.
- **ss**: Executa `sa` e `sb` simultaneamente.
- **pa**: Move o topo da pilha B para o topo da pilha A.
- **pb**: Move o topo da pilha A para o topo da pilha B.
- **ra**: Roda a pilha A para cima.
- **rb**: Roda a pilha B para cima.
- **rr**: Executa `ra` e `rb` simultaneamente.
- **rra**: Roda a pilha A para baixo.
- **rrb**: Roda a pilha B para baixo.
- **rrr**: Executa `rra` e `rrb` simultaneamente.

## Instalação

Para compilar o projeto, siga estas etapas:

1. Clone o repositório:
   ```bash
   git clone https://github.com/SEU-USUARIO/PUSH_SWAP.git
   cd PUSH_SWAP

2. Compile o programa:
    ```bash
    make

## Como Usar

1. Após compilar, você pode executar o Push Swap passando uma sequência de números inteiros como argumento:
    ```bash
    ./push_swap 5 2 8 1 3

2. O programa retornará a sequência de operações necessárias para ordenar a lista.
Se quiser testar a solução usando o checker, compile e execute:
    ```bash
    ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_Mac $ARG

## Exemplo de Execução

1. Entrada:
   ```bash
   ./push_swap 3 2 1

3. Saída (exemplo de sequência de operações gerada):
   ```bash
   sa
   rra
