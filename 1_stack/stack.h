//
// Created by sergio on 22/11/24.
//

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <sstream>

// generic type
template <typename T>
class Stack {

private:

    // pointer for the stack
    T* pointerStack;
    int stackSize;
    int stackPoint = 0;

    // show stack
    void showStack();

public:
    explicit Stack(int capacity);
    // add
    // const because the parameter isn't changed, and & to avoid making a copy
    void push(const T& element);

    // delete
    void pop();

    // Print the top element
    void peek();

    // return whether stack is empty
    bool isEmpty();

    // return whether stack is full
    bool isFull();

    // destructor
    ~Stack();
};

/* The implementation is here because template <T> requires this. */

// Constructor
template<typename T>
Stack<T>::Stack(int capacity) {
    this->stackSize = capacity;
    pointerStack = new T[stackSize];
}

// Add element to stack
template<typename T>
void Stack<T>::push(const T& element) {

    /* verify if full */
    if (isFull()) {
        std::cout << "stack is full" << std::endl;
    } else {
        /* add */
        pointerStack[stackPoint] = element;
        stackPoint++;
        showStack();
    }
}

// Show stack elements
template<typename T>
void Stack<T>::showStack() {

    if (isEmpty()) {
        std::cout << "stack is empty" << std::endl;
    } else {
        std::ostringstream oss;
        for (int i = 0; i < stackPoint; i++) {
            oss << pointerStack[i] << " ";
        }
        std::cout << "Stack: \n" << oss.str() << std::endl;
    }
}

// Remove top element from stack
template<typename T>
void Stack<T>::pop() {

    if (isEmpty()) {
        std::cout << "stack is empty" << std::endl;
    } else {
        std::cout << "element popped: " << pointerStack[stackPoint - 1] << std::endl;
        stackPoint--;
    }
}

// Show top element
template<typename T>
void Stack<T>::peek() {

    if (isEmpty()) {
        std::cout << "stack is empty" << std::endl;
    } else {
        std::cout << "element top: " << pointerStack[stackPoint - 1] << std::endl;
    }
}

// Check if stack is empty
template<typename T>
bool Stack<T>::isEmpty() {

    if (stackPoint == 0) {
        return true;
    }

    return false;
}

// Check if stack is full
template<typename T>
bool Stack<T>::isFull() {

    if (stackPoint >= stackSize) {
        return true;
    }

    return false;
}

// Destructor
template<typename T>
Stack<T>::~Stack() {
    delete[] pointerStack;
}

#endif //STACK_H
