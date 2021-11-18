#include "queue.h"

queue::queue()
{
    this->head = NULL;
    this->tail = NULL;
}
queue::~queue()
{
    //loop through each node and deallocate the memory in the sequence it was allocated in
    node *tmp;
    while(this->head != NULL)
    {
        tmp = tmp->next;
        delete head;
        this->head = tmp;
    }
}

void queue::add(node newNode)
{
    //Allocate memory for the new node
    node *tmp = new node;
    //Extract the data from the new node into the linked list
    tmp->setInt_EmployeeID(newNode.getInt_EmployeeID());
    tmp->setString_Name(newNode.getString_Name());
    tmp->setString_JobTitle(newNode.getString_JobTitle());

    tmp->next = NULL;
    //Determine if this new node is the frist node i.e. the head node or if its the new tail node
    if(this->head == NULL)
    {
        this->head = tmp;
        this->tail = tmp;
    }
    else 
    {
        this->tail->next = tmp;
        this->tail = tail->next;
    }
}
void queue::printAll()
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