#include "queue.hpp"
#include <iostream>

int main () {
    queue<int> q;

    std::cout << "Is the queue empty? " << q.empty () << std::endl;

    q.enqueue ( 1 );
    q.enqueue ( 2 );
    q.enqueue ( 3 );
    q.enqueue ( 4 );
    q.enqueue ( 5 );

    std::cout << "Queue size is = " << q.getSize () << std::endl;

    return 0;
}