#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

// Generic type
template <typename T>
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
    int count = 0;  // Track the number of elements in the queue

public:
    explicit Queue(int queueSize);

    // Insert element
    void enqueue(const T& value);

    // Remove the first element from the queue
    void dequeue();

    // Return the first element without removing it
    T front();

    // Return the number of elements in the queue
    int number_of_elements();

    ~Queue();
};

template<typename T>
Queue<T>::Queue(int queue_size) {
    // Initializing the queue array
    this->queue_size = queue_size;
    queue_array = new T[queue_size];
}

template<typename T>
void Queue<T>::enqueue(const T& value) {
    if (!isFull()) {
        queue_array[get_queue_array_end_point()] = value;
        std::cout << "add: " << value << std::endl;
        queue_end_point = (queue_end_point + 1) % queue_size;
        count++;  // Update count after successful enqueue
    } else {
        std::cout << "queue is full" << std::endl;
    }
}

template<typename T>
void Queue<T>::dequeue() {
    if (!isEmpty()) {
        std::cout << "remove: " << queue_array[get_queue_array_first_point()] << std::endl;
        queue_first_point = (queue_first_point + 1) % queue_size;
        count--;  // Update count after successful dequeue
    } else {
        std::cout << "queue is empty" << std::endl;
    }
}

template<typename T>
T Queue<T>::front() {
    if (isEmpty()) {
        std::cout << "queue is empty" << std::endl;
        return T();  // Return a default value for type T
    }
    std::cout << "first element: " << queue_array[get_queue_array_first_point()] << std::endl;
    return queue_array[get_queue_array_first_point()];
}

template<typename T>
int Queue<T>::get_queue_array_end_point() {
    return queue_end_point % queue_size;
}

template<typename T>
int Queue<T>::get_queue_array_first_point() {
    return queue_first_point % queue_size;
}

template<typename T>
bool Queue<T>::isFull() {
    return count == queue_size;
}

template<typename T>
bool Queue<T>::isEmpty() {
    return count == 0;
}

template<typename T>
int Queue<T>::number_of_elements() {
    // The number of elements can be calculated using the count variable
    std::cout << "number of elements: " << count << std::endl;
    return count;
}

template<typename T>
Queue<T>::~Queue() {
    delete[] queue_array;  // Free the allocated memory
}

#endif //QUEUE_H
