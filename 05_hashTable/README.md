# 🚀 Desafio: Estruturas de Dados com Linked List

## 📌 Conceito
A **lista encadeada (Linked List)** é uma estrutura de dados dinâmica composta por nós.  
Cada nó contém:
- Um valor (dado).
- Um ponteiro para o próximo nó.

Com ela podemos implementar outras estruturas, como **Pilha (Stack)** e **Fila (Queue)**.

---

## 🎯 Objetivo
- Implementar uma classe **LinkedList** em C++.
- Utilizar essa estrutura como base para criar uma **Pilha (Stack)**.
- Como exercício extra, implementar também uma **Fila (Queue)**.

---

## 🏗️ Estrutura esperada

### 🔹 Classe `LinkedList`
Operações básicas:
- `pushFront(T value)` → Insere no início.
- `pushBack(T value)` → Insere no final.
- `popFront()` → Remove do início.
- `popBack()` → Remove do final.
- `get(int index)` → Retorna o elemento na posição `index`.
- `set(int index, T value)` → Altera o elemento na posição `index`.
- `size()` → Retorna o número de elementos.
- *(Opcional)* `print()` → Exibe os elementos da lista.

---


---

## 🧑‍💻 Requisitos Técnicos
- Linguagem: **C++**
- Paradigma: **Programação Orientada a Objetos**
- Conceitos trabalhados: listas encadeadas

---

## 📝 Desafio
1. Implementar a classe `LinkedList`.
2Criar um programa principal (`main.cpp`) para testar as operações.

---

## 📚 Exemplos de Uso (simulação)
```cpp
LinkedList lista;
lista.pushBack(10);
lista.pushBack(20);
lista.insertAt(1, 15);
cout << lista.get(1); // 15
lista.removeAt(0);
cout << lista.get(0); // 15

Stack pilha;
pilha.push(100);
pilha.push(200);
cout << pilha.top(); // 200
pilha.pop();
cout << pilha.top(); // 100

Queue fila;
fila.enqueue(5);
fila.enqueue(15);
cout << fila.front(); // 5
fila.dequeue();
cout << fila.front(); // 15
