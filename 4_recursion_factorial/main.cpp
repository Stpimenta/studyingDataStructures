#include <iostream>
#include <ostream>

int factorial (int number){

    //caso base
    if(number == 1 || number == 0)
        return 1;

    int result = number * factorial(number - 1);
}

int main () {

    int number;
    std::cout << " What number should I calculate the factorial of ? " << std::endl;
    std::cin >> number;

    std::cout << "result:" << factorial(number) << std::endl;


    return 0;
}