# 🚀 Desafio: Tabela Hash com Encadeamento Externo

## 📌 Conceito
A **Tabela Hash** é uma estrutura que associa **chaves** a **valores** de forma eficiente.  
Ela utiliza uma **função hash** para mapear cada chave a um índice em um array interno.

Quando duas chaves diferentes caem no mesmo índice (**colisão**), usamos **endereçamento externo (chaining)**, ou seja, uma **lista encadeada** para armazenar os elementos daquele bucket.

---

## 🎯 Objetivo
- Implementar uma **Tabela Hash** em C++ com **chaves inteiras (`int`)**.
- Usar **listas encadeadas** para resolver colisões.
- Implementar operações de **inserção, atualização, busca e remoção**.

---

## 🏗️ Estrutura Esperada

### 🔹 Classe `HashTable`
Operações básicas:

- `insert(int key, V value)` → Insere um par chave-valor **somente se a chave ainda não existir**.
- `update(int key, V value)` → Atualiza o valor de uma chave existente **somente se a chave já existir**.
- `get(int key)` → Retorna o valor associado a uma chave.
- `remove(int key)` → Remove o elemento pela chave.
- `print()` → Exibe os buckets e seus elementos.

---

## 🧑‍💻 Requisitos Técnicos
- **Linguagem:** C++
- **Paradigma:** Programação Orientada a Objetos
- **Conceitos trabalhados:** Hashing, Listas Encadeadas, Estruturas de Dados Avançadas

---
