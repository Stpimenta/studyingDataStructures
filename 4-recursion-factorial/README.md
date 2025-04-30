

# O que é Recursão?

Recursão é uma técnica onde uma função **chama a si mesma** para resolver um problema.

Cada chamada resolve **uma parte** do problema e **empilha** o restante para ser resolvido depois.

## Características de uma função recursiva:

- **Caso base**: uma condição que define quando a função deve parar de se chamar.
- **Chamada recursiva**: a função se chama novamente, mas com um problema reduzido.

## Explicação resumida

> Recursão quebra um problema grande em problemas menores até que seja simples o suficiente para resolver diretamente.

---

# Desafio: Fatorial

## Descrição

Este desafio é criar uma **função recursiva** que calcula o **fatorial** de um número inteiro não negativo.

O fatorial de um número `n` é:

- `fatorial(0) = 1`
- `fatorial(n) = n * fatorial(n-1)`, para `n > 0`

Exemplo: fatorial(5) = 5 × 4 × 3 × 2 × 1 = 120


## O que fazer

- Ler um número do usuário.
- Calcular o fatorial usando **recursão**.
- Mostrar o resultado.

## Regras

- Não usar laços (`for`, `while`).
- Só aceitar número inteiro **maior ou igual a zero**.
- Se for número negativo, mostrar erro.

## Exemplo

Entrada:





