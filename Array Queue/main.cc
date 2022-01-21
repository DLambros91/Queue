#include "queue.hpp"
#include <iostream>

int main ( int argc, char ** argv ) {
    queue<int> q (4);

    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(1);

    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;

    return 0;
}