template <typename T>
class node {
    node * next;
    T data;
};

template <typename T>
class queue {
    public:
        queue() {
            head = 0, tail = 0, size = 0;
        }

        // Returns whether the queue is empty
        bool empty () {
            return size == 0;
        }

        // Returns number of queued nodes
        int getSize () {
            return size;
        }

    private:
        int size;
        node<T> * head, * tail;
};
