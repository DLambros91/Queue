template <typename T>
class node {
    public:
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

        void enqueue ( T value ) {
            if ( !size ) {
                head = tail = new node<T>;
                head->data = value;
                head->next = 0;
                size++;
                return;
            }
            tail->next = new node<T>;
            tail = tail->next;
            tail->data = value;
            size++;
            return;
        }

    private:
        int size;
        node<T> * head, * tail;
};
