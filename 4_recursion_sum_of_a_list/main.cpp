#include <iostream>
#include <ostream>

int sumOfList (int *arr, size_t size, int index = 0){

    if (size == 0)
        throw std::invalid_argument("Empty list");

    //caso base
    if (index == size)
           return 0;

    int totalSum = arr[index] + sumOfList(arr, size, index + 1);

    return totalSum;

}


// int main ()
// {
//     int numbers[] = {1, 3, 5, 7, 9};
//     size_t size = sizeof(numbers) / sizeof(numbers[0]);
//
//     sumOfList(numbers, size);
//     std::cout << "result: " << sumOfList(numbers, size) << std::endl;
//
//
//     return 0;
//
// }

int main () {

    int size;
    std::cout << "tell me how many numbers  i need tom sum?" << std::endl;
    std::cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter number: " << i + 1 << std::endl;
        std::cin >> arr[i];
    }

    std::cout << "result:" << sumOfList(arr, size) << std::endl;

    return 0;
}