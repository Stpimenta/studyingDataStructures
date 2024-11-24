

#include <iostream>
#include "stack.h"
enum type {
     push = 1,
     pop = 2 ,
     peek = 3,
     quit = 4,
};


void menuFunction ( Stack<std::string> *randomStack ) {

     while (1) {
          int function;
          std::string input;
          std::cout << " what would you like do? 1-push 2-pop 3-peek 4-quit" << std::endl;;

          /*To fix the "infinite loop"*/
          std::getline(std::cin,input);
          try {
               function = std::stoi(input);
          }catch (std::invalid_argument &e) {
               std::cout << " Invalid input!" << std::endl;
               continue;
          }

          switch (function) {

               case push: {
                    std::string input;
                    std::cout << " what i must input? " << std::endl;;
                    std::getline(std::cin, input);
                    randomStack->push(input);
                    break;
               }

               case pop: {
                    randomStack->pop();
                    break;
               }

               case  peek: {
                    randomStack->peek();
                    break;
               }

               case  quit: {
                    return;
               }

               default: {
                    std::cout << " Invalid input!" << std::endl;
                    std::cin.clear();
                    function = 0;
               }

          }
     }
     /*fail recursive form*/
     // std::cout << " what would you like do? 1-push 2-pop 3-peek 4-quit" << std::endl;;
     // std::cin >> function;
     //
     // if (function == push) {
     //
     //      std::string input;
     //
     //      std::cout << " what i must input? " << std::endl;;
     //      std::cin >> input;
     //
     //      randomStack->push(input);
     //      menuFunction(randomStack);
     // }
     //
     // if (function == pop) {
     //      randomStack->pop();
     //      menuFunction(randomStack);
     // }
     //
     // if (function == peek) {
     //      randomStack->peek();
     //      menuFunction(randomStack);
     // }
     //
     // if (function == quit) {
     //      return;
     // }
     //
     // std::cout << " args is invalid " << std::endl;;
     // menuFunction(randomStack);
}


int main () {

     /*stack size*/
     int size;
     std::cout << "i am a stack algorithm" << std::endl;
     std::cout << "tell me how many elements should  my stack?" << std::endl;;
     std::cin >> size;
     std::cin.ignore();

     /* create stack */
     Stack<std::string> *myStack = new Stack<std::string>(size);
     menuFunction(myStack);

     /* free memory */
     delete myStack;

     return 0;
}
