#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int associateID;
    string associateName;
    string workStatus;

public:
    // Getters and setters.
    int getAssociateId()
    {
        return this->associateID;
    }

    string getAssociateName()
    {
        return this->associateName;
    }

    string getWorkStatus()
    {
        return this->workStatus;
    }

    void setAssociateId(int associateID)
    {
        this->associateID = associateID;
    }

    void setAssociateName(string associateName)
    {
        this->associateName = associateName;
    }

    void setWorkStatus(string workStatus)
    {
        this->workStatus = workStatus;
    }

    // Set class methods.
    void updateStatusDetails(int days)
    {
        if (days <= 20)
            this->setWorkStatus("Core skills");
        else if (days > 20 && days <= 40)
            this->setWorkStatus("Advanced modules");
        else if (days > 40)
            this->setWorkStatus("Project phase");
    }
};

int main()
{
    int id, days;
    string name;

    cout << "Enter the associate ID: ";
    cin >> id;
    cout << "Enter the associate name: ";
    cin >> name;
    cout << "Enter the number of days: ";
    cin >> days;

    Employee e1;
    e1.setAssociateId(id);
    e1.setAssociateName(name);
    e1.updateStatusDetails(days);

    cout << "The associate " << e1.getAssociateName() << "'s work status is: " << e1.getWorkStatus() << endl;

    return 0;
}