#include <string>
#include <iostream>


#ifndef NODE
#define NODE
class node
{
    private:
        int int_EmployeeID;
        std::string string_Name;
        std::string string_JobTitle;

        
    public:
        node *next;

        node(); 
        node(int intEmployeeID, std::string string_Name, std::string string_JobTitle);

        void setInt_EmployeeID(int);
        int getInt_EmployeeID();

        void setString_Name(std::string);
        std::string getString_Name();

        void setString_JobTitle(std::string);
        std::string getString_JobTitle();
};

#endif
