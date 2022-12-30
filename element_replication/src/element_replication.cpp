#include <iostream>
using namespace std;

class ElementReplication
{
private:
    int arraySize;
    int *array;
    int *rep_array;

public:
    ElementReplication(int arraySize)
    {
        this->arraySize = arraySize;
        this->array = new int[arraySize];
        this->rep_array = new int[arraySize + 1];
    }

    void setArray(int array[])
    {
        for (int i = 0; i < this->arraySize; i++)
        {
            this->array[i] = array[i];
        }
    }

    int *getArray()
    {
        return this->array;
    }

    int *getRep_array()
    {
        return this->rep_array;
    }

    void setArrayFromUser()
    {
        cout << "Enter the array elements: \n";
        for (int i = 0; i < this->arraySize; i++)
        {
            cin >> this->array[i];
        }
    }

    void elementReplication(int index)
    {
        if (index < this->arraySize)
        {

            for (int i = 0; i < this->arraySize; i++)
            {
                this->rep_array[i] = this->array[i];
                cout << this->rep_array[i] << " ";
            }

            this->rep_array[this->arraySize] = this->array[index];
            cout << this->rep_array[this->arraySize] << endl;
        }
        else
        {
            throw runtime_error("Array index is out of range.");
        }
    }
};

int main()
{
    int arraySize, index;
    cout << "Enter size of array: ";
    cin >> arraySize;

    ElementReplication er(arraySize);
    er.setArrayFromUser();

    cout << "Enter the position of element to be replicated: ";
    cin >> index;

    try
    {
        er.elementReplication(index);
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}
