#include "queue.hpp"
#include <iostream>

int main ( int argc, char ** argv ) {
    queue<int> q;

    std::cout << "Is the queue empty? " << q.empty () << std::endl;

    std::cout << "Enqueueing item 1" << std::endl;
    q.enqueue ( 1 );
    std::cout << "Enqueueing item 2" << std::endl;
    q.enqueue ( 2 );
    std::cout << "Enqueueing item 3" << std::endl;
    q.enqueue ( 3 );
    std::cout << "Enqueueing item 4" << std::endl;
    q.enqueue ( 4 );
    std::cout << "Enqueueing item 5" << std::endl;
    q.enqueue ( 5 );

    std::cout << "Queue size is = " << q.getSize () << std::endl;

    std::cout << "Is the queue empty? " << q.empty () << std::endl;

    std::cout << "Dequeueing item: " << q.dequeue () << std::endl;
    std::cout << "Dequeueing item: " << q.dequeue () << std::endl;
    std::cout << "Dequeueing item: " << q.dequeue () << std::endl;
    std::cout << "Dequeueing item: " << q.dequeue () << std::endl;
    std::cout << "Dequeueing item: " << q.dequeue () << std::endl;

    std::cout << "Queue size is = " << q.getSize () << std::endl;

    std::cout << "Is the queue empty? " << q.empty () << std::endl;

    return 0;
}