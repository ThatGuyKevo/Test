#include "queue.h"
#include "stack.h"

int main(int argc, char const *argv[])
{
    queue queue_EmployeeList;
    stack stack_EmployeeList;

    std::cout << "Enter in the Number of Employees you wish to enter in: ";
    int int_UserEnteredNumberofEmployeesInLinkedList;
    std::cin >> int_UserEnteredNumberofEmployeesInLinkedList;

    for (size_t i = 0; i < int_UserEnteredNumberofEmployeesInLinkedList; i++)
    {
        //Create Node
        node NewNode;

        std::cout << "Enter in an employee ID: ";
        int int_UserEnteredEmployeeID;
        std::cin >> int_UserEnteredEmployeeID;
        NewNode.setInt_EmployeeID(int_UserEnteredEmployeeID);

        std::cout << "Enter in employee's name: ";
        std::string string_UserEnteredEmployeeName;
        std::cin.ignore();
        std::getline(std::cin, string_UserEnteredEmployeeName);
        NewNode.setString_Name(string_UserEnteredEmployeeName);

        std::cout << "Enter in employee's job title:";
        std::string string_UserEnteredEmployeeJobTitle;
        std::getline(std::cin, string_UserEnteredEmployeeJobTitle);
        NewNode.setString_JobTitle(string_UserEnteredEmployeeJobTitle);
        
        //Add Node Into Linked List
        queue_EmployeeList.add(NewNode);
        stack_EmployeeList.add(NewNode);
    }

    std::cout << std::endl << "Stack" << std::endl;
    stack_EmployeeList.printAll();
    std::cout << std::endl << "Queue" << std::endl;
    queue_EmployeeList.printAll();
    return 0;
}
