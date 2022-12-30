#include <iostream>
#include <string>
using namespace std;

class College
{
private:
    static string principal_name;

public:
    static string getPrincipal_name()
    {
        return College::principal_name;
    }
};

class Student
{
private:
    int id;
    string name;
    float marks[5], average;
    char grade;
    College cObj;

public:
    // Getters and setters.
    int getId()
    {
        return this->id;
    }

    string getName()
    {
        return this->name;
    }

    float *getmarks()
    {
        return this->marks;
    }

    float getAverage()
    {
        return this->average;
    }

    char getGrade()
    {
        return this->grade;
    }

    College getCObj()
    {
        return this->cObj;
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setMarks(float marks[])
    {
        for (int i = 0; i < 5; i++)
        {
            this->marks[i] = marks[i];
        }
    }

    void setAverage(float average)
    {
        this->average = average;
    }

    void setGrade(char grade)
    {
        this->grade = grade;
    }

    // Class methods.
    void getStudentDetails();
    float calculateAverage();
    char findGrade();
    void displayStudentDetails();
};

// Student class methods.
void Student::getStudentDetails()
{
    cout << "Enter Student ID: ";
    cin >> this->id;
    cout << "Enter student name: ";
    cin >> this->name;
    cout << "Enter the five subject marks: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> this->marks[i];
    }
}

float Student::calculateAverage()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    this->average = sum / 5;
    return this->average;
}

char Student::findGrade()
{
    if (this->average <= 100 && this->average >= 80)
        this->grade = 'O';
    else if (this->average < 80 && this->average >= 50)
        this->grade = 'A';
    else
        this->grade = 'F';

    return this->grade;
}

void Student::displayStudentDetails()
{
    cout << "Student name: " << this->name << endl
         << "Student ID: " << this->id << endl
         << "Principal name: " << this->cObj.getPrincipal_name() << endl
         << "Average: " << this->calculateAverage() << endl
         << "Grade: " << this->findGrade();
}

string College::principal_name = "John";
int main()
{
    Student s1;
    s1.getStudentDetails();
    s1.displayStudentDetails();
    return 0;
}