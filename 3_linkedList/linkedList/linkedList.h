//
// Created by stpimenta on 19/08/25.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

template <typename T>

struct Node {
    T data;
    Node<T>* prev;
    Node<T>* next;

    //construct
    Node(const T& value): data(value), prev(nullptr), next(nullptr) {}
};


template <typename T>
class LinkedList {

    private:
        int  listSize;
        Node<T>* firstNode;
        Node<T>* lastNode;

    public:
        LinkedList(): listSize(0), firstNode(nullptr), lastNode(nullptr) {}
        ~LinkedList();
        void pushFront(T value);
        void pushBack(T value);
        void popFront();
        void popBack();
        void print();
        int size();
        T getIndex(int index);
        void setIndex(int index, T value);



};


template <typename T>
void LinkedList<T>::pushFront(T value) {

    if (firstNode == nullptr) {
        firstNode = new Node<T>(value);
        lastNode = firstNode;
    }

    else {
        Node<T> *newNode = new Node<T>(value);
        newNode-> next = firstNode;
        firstNode->prev = newNode;
        firstNode = newNode;
    }

    listSize++;
}


template <typename T>
void LinkedList<T>::pushBack(T value) {

    if (lastNode == nullptr) {
        lastNode = new Node<T>(value);
        firstNode = lastNode;
    }
    else {
        Node<T> *newNode = new Node<T>(value);
        newNode -> prev = lastNode;
        lastNode->next = newNode;
        lastNode = newNode;
    }
    listSize++;
}

template <typename T>
void LinkedList<T>::print() {
    Node<T> *current = firstNode;

    std::cout << "[";

    while (current != nullptr) {
        std::cout << current->data;
        if (current->next != nullptr) {
            std::cout << ",";
        }
        current = current->next;
    }
    std::cout << "]" << std::endl;

}

template <typename T>
void LinkedList<T>::popFront() {

    if (firstNode == nullptr) {
        std::cout << "List is empty." << std::endl;
        return;
    }

    Node<T> *temp = firstNode;

    if (firstNode == lastNode) {
        firstNode = nullptr;
        lastNode = nullptr;
    }
    else {
        firstNode->next->prev = nullptr;
        firstNode = firstNode -> next;
    }
    listSize--;
    delete temp;
}

template <typename T>
void LinkedList<T>::popBack() {

    if (lastNode == nullptr) {
        std::cout << "List is empty." << std::endl;
        return;
    }

    Node<T> *temp = lastNode;

    if (lastNode == firstNode) {
        lastNode = nullptr;
        firstNode = nullptr;
    }

    else {
        lastNode->prev->next = nullptr;
        lastNode = lastNode->prev;
    }

    listSize--;
    delete temp;

}

template <typename T>
T LinkedList<T>::getIndex(int index) {

    Node<T> *current = firstNode;

    if (index < 0 || index >= listSize) {
        std::cout << "invalid index" << std::endl;
        throw std::out_of_range("Invalid index");
    }

    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    return current->data;
}

template <typename T>
void LinkedList<T>::setIndex(int index, T value) {

    Node<T> *current = firstNode;

    if (index < 0 || index >= listSize) {
        std::cout << "invalid index" << std::endl;
        throw std::out_of_range("Invalid index");
    }

    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    current->data = value;
}

template <typename T>
int LinkedList<T>::size() {
    std::cout << "size:" << listSize << std::endl;
    return  listSize;
}

template <typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = firstNode;

    while (current != nullptr) {
        Node<T> *temp = current;
        current = current->next;
        delete temp;
    }
}


#endif //LINKEDLIST_H
