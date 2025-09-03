#include <iostream>
#include "./linkedList/linkedList.h"

enum MenuOption {
    PUSH_FRONT = 1,
    PUSH_BACK  = 2,
    POP_FRONT  = 3,
    POP_BACK   = 4,
    PRINT      = 5,
    SIZE       = 6,
    GET_INDEX  = 7,
    SET_INDEX  = 8,
    QUIT       = 9
};

// Function that displays the menu and handles user interaction
void menuFunction(LinkedList<std::string>* list) {
    while (true) {
        int function;
        std::string input;

        std::cout << "\n=== Linked List Menu ===" << std::endl;
        std::cout << "1 - Push Front" << std::endl;
        std::cout << "2 - Push Back" << std::endl;
        std::cout << "3 - Pop Front" << std::endl;
        std::cout << "4 - Pop Back" << std::endl;
        std::cout << "5 - Print List" << std::endl;
        std::cout << "6 - List Size" << std::endl;
        std::cout << "7 - Get Element by Index" << std::endl;
        std::cout << "8 - Set Element by Index" << std::endl;
        std::cout << "9 - Quit" << std::endl;
        std::cout << "Choose an option: ";

        std::getline(std::cin, input);

        try {
            function = std::stoi(input);
        } catch (std::invalid_argument&) {
            std::cout << "Invalid input! Please type a number." << std::endl;
            continue;
        }

        switch (function) {
            case PUSH_FRONT: {
                std::string value;
                std::cout << "Enter value to push at the front: ";
                std::getline(std::cin, value);
                list->pushFront(value);
                break;
            }

            case PUSH_BACK: {
                std::string value;
                std::cout << "Enter value to push at the back: ";
                std::getline(std::cin, value);
                list->pushBack(value);
                break;
            }

            case POP_FRONT: {
                std::cout << "Removing element from the front..." << std::endl;
                list->popFront();
                break;
            }

            case POP_BACK: {
                std::cout << "Removing element from the back..." << std::endl;
                list->popBack();
                break;
            }

            case PRINT: {
                std::cout << "Current list: ";
                list->print();
                break;
            }

            case SIZE: {
                list->size();
                break;
            }

            case GET_INDEX: {
                int idx;
                std::cout << "Enter index to get: ";
                std::getline(std::cin, input);
                try {
                    idx = std::stoi(input);
                    std::string value = list->getIndex(idx);
                    std::cout << "Element at index " << idx << ": " << value << std::endl;
                } catch (std::exception& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }

            case SET_INDEX: {
                int idx;
                std::string value;
                std::cout << "Enter index to set: ";
                std::getline(std::cin, input);
                try {
                    idx = std::stoi(input);
                    std::cout << "Enter new value: ";
                    std::getline(std::cin, value);
                    list->setIndex(idx, value);
                    std::cout << "Element at index " << idx << " updated." << std::endl;
                } catch (std::exception& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }

            case QUIT: {
                std::cout << "Exiting program. Goodbye!" << std::endl;
                return;
            }

            default: {
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
            }
        }
    }
}

int main() {
    std::cout << "Welcome to Linked List Interactive Program!" << std::endl;

    // Create a new linked list of strings
    LinkedList<std::string>* list = new LinkedList<std::string>();

    // Run the interactive menu
    menuFunction(list);

    // Free allocated memory
    delete list;
    return 0;
}
