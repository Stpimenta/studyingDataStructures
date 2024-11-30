# Desafio: Implementação de uma Fila

## Conceito
A fila é uma estrutura de dados linear que segue o princípio **FIFO (First In, First Out)**, ou seja, o primeiro elemento a entrar é o primeiro a sair. Filas são amplamente usadas em computação para gerenciar processos em sistemas operacionais, filas de impressão e outros cenários de espera.

## Objetivo
Implementar a estrutura de dados **Fila (Queue)** utilizando C++ e praticar os conceitos básicos de estruturas de dados e programação orientada a objetos.

## Requisitos

### Estrutura Básica:
- Criar uma classe chamada `Queue`.
- Utilizar um vetor dinâmico, ponteiros, ou uma lista encadeada para armazenar os elementos.
- Garantir que a fila siga a regra **FIFO (First In, First Out)**.

### Operações Obrigatórias:
1. `enqueue(T value)`: Insere um elemento no final da fila.
2. `dequeue()`: Remove o elemento do início da fila.
3. `front()`: Retorna o elemento do início sem removê-lo.
4. `isEmpty()`: Verifica se a fila está vazia.

### Extras:
- Implementar uma função para verificar se a fila está cheia (em caso de limite pré-definido).
- Adicionar exceções para manipulação de erros (ex.: remoção de elemento de uma fila vazia).
- Criar um método `size()` que retorna a quantidade de elementos na fila.
