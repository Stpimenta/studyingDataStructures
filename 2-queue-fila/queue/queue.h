//
// Created by sergio on 29/11/24.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <queue>

//generic type
template <typename  T>

class Queue {

private:
    int queue_size;
    int queue_first_point = 0;
    int queue_end_point = 0;
    T* queue_array;
    bool isFull();
    int get_queue_array_end_point ();
    int get_queue_array_first_point ();
    bool isEmpty();

public:
    explicit Queue (int queueSize);

    //insert element
    void enqueue (const T& value);

    //remove first element of the queue
    void dequeue();

    //return first element without remove it
    T front();


    //return number of elements in queue
    int number_of_elements();

    ~Queue();
};


template<typename T>
Queue<T>::Queue(int queue_size) {
    //initializing queue array
    this->queue_size = queue_size;
    queue_array = new T[queue_size];

}

template<typename T>
void Queue<T>::enqueue(const T& value) {

    if (!isFull()) {
        queue_array[get_queue_array_end_point()] = value;
        std::cout <<"add: " << value << std::endl;
        queue_end_point ++;
    }
    else {
        std::cout << "queue is full" << std::endl;
    }

}

template<typename T>
void Queue<T>::dequeue() {
    if (!isEmpty()) {
        std::cout << "remove: " << queue_array[get_queue_array_first_point()] << std::endl;
        queue_first_point ++;
    }
    else {
        std::cout << "queue is empty" << std::endl;
    }
}

template<typename T>
T Queue<T>::front() {
    if (!isEmpty()) {
        std::cout << "first element:"  << queue_array[get_queue_array_first_point()]<< std::endl;
        return queue_array[get_queue_array_first_point()];
    }
    std::cout << "queue is empty" << std::endl;
}



template<typename T>
int Queue<T>::get_queue_array_end_point() {

    int queue_array_point =   (queue_end_point )%queue_size;
    return queue_array_point;

}

template<typename T>
int Queue<T>::get_queue_array_first_point() {
    int queue_array_point = queue_first_point % queue_size;
    return queue_array_point;
}


template<typename T>
bool Queue<T>::isFull() {
    if ( queue_end_point - queue_first_point  == queue_size) {
        return true;
    }
    return false;
}

template<typename T>
bool Queue<T>::isEmpty() {
    if ( queue_end_point == queue_first_point)
    {
        return true;
    }
    return false;
}

template<typename T>
int Queue<T>::number_of_elements() {
    int elements = queue_end_point - queue_first_point;
    std::cout << "number of elements: " << elements << std::endl;
    return elements;
}

template<typename T>
Queue<T>::~Queue() {
    delete[] queue_array;
}

#endif //QUEUE_H
