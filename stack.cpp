#include "stack.h"

stack::stack()
{
    this->head = NULL;
    this->tail = NULL;
}
stack::~stack()
{
    //loop through each node and deallocate the memory in the sequence it was allocated in
    while(this->head != NULL)
    {
        this->head = this->head->next;
        delete head;
    }
}

void stack::add(node newNode)
{
    //Allocate memory for the new node
    node *tmp = new node;
    //Extract the data from the new node into the linked list
    tmp->setInt_EmployeeID(newNode.getInt_EmployeeID());
    tmp->setString_Name(newNode.getString_Name());
    tmp->setString_JobTitle(newNode.getString_JobTitle());

    //Every new node because the new head and the first node becomes the tail
    if(this->head == NULL)
    {
        this->head = tmp;
        this->tail = tmp;
    }
    else 
    {
        tmp->next = this->head;
        this->head = tmp;
    }
}
void stack::printAll()
{
    //loop through each node a print out all the values within the node in a clean and meaningful ways
    node *tmp;
    tmp = this->head;
    while(tmp != NULL)
    {
        std::cout << tmp->getInt_EmployeeID() << std::endl;
        std::cout << tmp->getString_Name() << std::endl;
        std::cout << tmp->getString_JobTitle() << std::endl;
        tmp = tmp->next;
    }
}