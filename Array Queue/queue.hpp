#include <iostream>

template <typename T> 
class queue
{
    private:
        T * q;
        int maxSize;
        int size;
        int read;
        int write;

    public:
        queue () {
            maxSize = 16;
            q = new int[maxSize];
            read = write = size = 0;
        }

        queue ( int maxSize ) {
            this->maxSize = maxSize;
            q = new int[maxSize];
            read = write = size = 0;
        }

        bool empty () {
            return !size;
        }

        bool full () {
            return size == maxSize;
        }

        void enqueue ( T value ) {
            if (maxSize == size) {
                std::cout << "ERROR: Queue is full." << std::endl;
                return;
            }

            q[write] = value;
            write = (write+1)%maxSize;
            size++;
            return;
        }

        T dequeue () {
            if (!size) {
                std::cout << "ERROR: Queue is empty." << std::endl;
                return 0;
            }

            T val = q[read];
            read = (read+1)%maxSize;
            size--;
            return val;
        }
};
