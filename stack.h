#include "node.h"

class stack
{
    private:
        node *head;
        node *tail;
    public:
        stack();
        ~stack();

        void add(node);
        void printAll();
};

