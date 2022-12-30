#include <iostream>
using namespace std;

class MonthlyExpense
{
private:
    double household_exp, medical_exp;

public:
    // Constructors.
    MonthlyExpense(double household_exp, double medical_exp)
    {
        this->household_exp = household_exp;
        this->medical_exp = medical_exp;
    }

    MonthlyExpense()
    {
    }

    // Getters and setters.
    void setHousehold_exp(double household_exp)
    {
        this->household_exp = household_exp;
    }

    void setMedical_exp(double medical_exp)
    {
        this->medical_exp = medical_exp;
    }

    double getHousehold_exp()
    {
        return this->household_exp;
    }

    double getMedical_exp()
    {
        return this->medical_exp;
    }

    // Member functions.
    double calculateTotalExpense()
    {
        return this->household_exp + this->medical_exp;
    }

    // Operator overloading.
    MonthlyExpense operator+(const MonthlyExpense b)
    {
        MonthlyExpense expense;
        expense.household_exp = this->household_exp + b.household_exp;
        expense.medical_exp = this->medical_exp + b.medical_exp;
        return expense;
    }
};

int main()
{
    double household_exp, medical_exp;
    cout << "Enter november's household and medical expenses separated by space: ";
    cin >> household_exp >> medical_exp;
    MonthlyExpense nov_budget(household_exp, medical_exp);
    double nov_total = nov_budget.calculateTotalExpense();

    cout << "Enter december's household and medical expenses separated by space: ";
    cin >> household_exp >> medical_exp;
    MonthlyExpense dec_budget(household_exp, medical_exp);
    double dec_total = dec_budget.calculateTotalExpense();

    MonthlyExpense total_budget = nov_budget + dec_budget;
    double total_total = total_budget.calculateTotalExpense();

    printf("Total november expenses were: $%.2f.\n", nov_total);
    printf("Total december expenses were: $%.2f.\n", dec_total);
    printf("Total expenses: $%.2f.\n", total_total);

    return 0;
}