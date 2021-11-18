#include "node.h"

class queue
{
    private:
        node *head;
        node *tail;
    public:
        queue();
        ~queue();

        void add(node);
        void printAll();
};

