template <typename T> 
class queue
{
    private:
        T * q;
        int maxSize;
        int size;
    public:
        queue () {
            maxSize = 16;
            q = new int[maxSize];
            size = 0;
        }

        queue ( int maxSize ) {
            this->maxSize = maxSize;
            q = new int[maxSize];
            size = 0;
        }

        bool empty () {
            return !size;
        }
};
