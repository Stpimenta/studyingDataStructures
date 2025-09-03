//
// Created by stpimenta on 22/08/25.
//
#include "../linkedList/linkedList.h"


#ifndef HASHTABLE_H
#define HASHTABLE_H


template<typename T>

struct HashNode {
    T data;
    int key;
    HashNode(int k, T v):key(k), data(v){}
};

template <typename T>
class HashTable {

    private:
    LinkedList<HashNode<T>>* array;

    int size;
    int calculateHash(int key);

    public:
    HashTable(int size):size(size) {
        array = new LinkedList<HashNode<T>>[size];
    };

    void insert(int key, T value);
    void update (int key, T value);
    T get(int key);
    void remove(int key);
    void print();

    ~HashTable();
};

template<typename T>
HashTable<T>::~HashTable() {
    delete [] array;
}

template<typename T>
void HashTable<T>::insert(int key, T value) {
    int hashCode = calculateHash(key);
    HashNode<T> newNode = HashNode<T>(key, value);
    array[hashCode].pushBack(newNode);
}

template<typename T>
void HashTable<T>::update(int key, T value) {

    int hashCode = calculateHash(key);
    int nodeSize = array[hashCode].size();

    if (nodeSize == 0) {
        std::cout << "key not found" << std::endl;
        return;
    }

    for (int i = 0; i < nodeSize; i++) {
        int nodeKey = array[hashCode].getIndex(i).key;
        if (nodeKey == key) {
            std::cout << "updated key " << key << " with value " << value << std::endl;
            array[hashCode].getIndex(i).data = value;;
            return;
        }
    }

    std::cout << "key not found" << std::endl;
}

template<typename T>
T HashTable<T>::get(int key) {

    int hashCode = calculateHash(key);
    int nodeSize = array[hashCode].size();

    if (nodeSize == 0) {
        std::cout << "key not found"<< std::endl;
        return T();
    }

    for (int i = 0; i < nodeSize; i++) {
        int nodeKey = array[hashCode].getIndex(i).key;
        if (nodeKey == key) {
            std::cout << array[hashCode].getIndex(i).data << std::endl;
            return array[hashCode].getIndex(i).data;
        }
    }

    std::cout << "key not found"<< std::endl;
    return T();
}

template<typename T>
void HashTable<T>::remove(int key) {
    int hashCode = calculateHash(key);
    int nodeSize = array[hashCode].size();

    if (nodeSize == 0) {
        std::cout << "key not found"<< std::endl;
    }

    for (int i = 0; i < nodeSize; i++) {

        int nodeKey = array[hashCode].getIndex(i).key;
        if (nodeKey == key) {
            std::cout << "removed:  "<< array[hashCode].getIndex(i).data << std::endl;
            array[hashCode].removeAt(i);
            return;
        }
    }

    std::cout << "key not found" << std::endl;
}

template<typename T>
void HashTable<T>::print() {
    for (int i = 0; i < size; i++) {
        int nodeSize = array[i].size();

        if (nodeSize > 0)
        {
            for (int j = 0; j < nodeSize; j++)
            {
                std::cout << "bucket "<< i << " -> " << array[i].getIndex(j).key << "," << array[i].getIndex(j).data << std::endl;
            }
        }

        else
        {
            std::cout << "bucket " << i << " empty" << std::endl;
        }
    }
}

template<typename T>
int HashTable<T>::calculateHash(int key) {
    int hash = key%size;
    return hash;
}

#endif //HASHTABLE_H
