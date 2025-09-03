#include <iostream>
#include <string>
#include "hashTable/hashTable.h"

enum MenuOption {
    INSERT = 1,
    UPDATE = 2,
    GET    = 3,
    REMOVE = 4,
    PRINT  = 5,
    QUIT   = 6
};

void menuFunction(HashTable<std::string>* ht) {
    while (true) {
        int option;
        std::string input;

        std::cout << "\n=== Hash Table Menu ===" << std::endl;
        std::cout << "1 - Insert (key, value)" << std::endl;
        std::cout << "2 - Update value by key" << std::endl;
        std::cout << "3 - Get value by key" << std::endl;
        std::cout << "4 - Remove by key" << std::endl;
        std::cout << "5 - Print hash table" << std::endl;
        std::cout << "6 - Quit" << std::endl;
        std::cout << "Choose an option: ";

        std::getline(std::cin, input);
        try {
            option = std::stoi(input);
        } catch (...) {
            std::cout << "Invalid input! Please type a number." << std::endl;
            continue;
        }

        switch (option) {
            case INSERT: {
                int key;
                std::string value;
                std::cout << "Enter key (int): ";
                std::getline(std::cin, input);
                key = std::stoi(input);
                std::cout << "Enter value (string): ";
                std::getline(std::cin, value);
                ht->insert(key, value);
                std::cout << "Inserted (" << key << ", " << value << ")" << std::endl;
                break;
            }

            case UPDATE: {
                int key;
                std::string value;
                std::cout << "Enter key to update: ";
                std::getline(std::cin, input);
                key = std::stoi(input);
                std::cout << "Enter new value: ";
                std::getline(std::cin, value);
                ht->update(key, value);
                break;
            }

            case GET: {
                int key;
                std::cout << "Enter key to get: ";
                std::getline(std::cin, input);
                key = std::stoi(input);
                std::string value = ht->get(key);
                break;
            }

            case REMOVE: {
                int key;
                std::cout << "Enter key to remove: ";
                std::getline(std::cin, input);
                key = std::stoi(input);
                ht->remove(key);
                break;
            }

            case PRINT: {
                ht->print();
                break;
            }

            case QUIT: {
                return;
            }

            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
        }
    }
}

int main() {
    int tableSize;
    std::cout << "Enter hash table size: ";
    std::cin >> tableSize;
    std::cin.ignore(); // limpa o buffer

    HashTable<std::string>* ht = new HashTable<std::string>(tableSize);
    menuFunction(ht);
    delete ht;
    return 0;
}
