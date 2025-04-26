

#include <iostream>
#include "./queue/queue.h"

enum type {
     enqueue = 1,
     dequeue = 2 ,
     front = 3,
     size = 4,
     quit = 5
};


void menuFunction ( Queue<std::string> *randomQueue ) {

     while (1) {
          int function;
          std::string input;
          std::cout << "1-enqueue 2-dequeue 3-front 4-size 5-quit" << std::endl;;

          /*To fix the "infinite loop"*/
          std::getline(std::cin,input);
          try {
               function = std::stoi(input);
          }catch (std::invalid_argument &e) {
               std::cout << " Invalid input!" << std::endl;
               continue;
          }

          switch (function) {

               case enqueue: {
                    std::string input;
                    std::cout << "What should I input? " << std::endl;;
                    std::getline(std::cin, input);
                    randomQueue->enqueue(input);
                    break;
               }

               case dequeue: {
                    randomQueue->dequeue();
                    break;
               }

               case  front: {
                    randomQueue->front();
                    break;
               }

               case  size: {
                    randomQueue->number_of_elements();
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
}


int main () {

     /*stack size*/
     int size;
     std::cout << "i am a queue algorithm" << std::endl;
     std::cout << "Tell me how many elements my queue should have?" << std::endl;;
     std::cin >> size;
     std::cin.ignore();

     /* create stack */
     Queue<std::string> *queue = new Queue<std::string>(size);

     menuFunction(queue);

     // /* free memory */
     delete queue;
     return 0;
}

