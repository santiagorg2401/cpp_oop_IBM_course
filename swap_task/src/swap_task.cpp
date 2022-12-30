#include <iostream>
using namespace std;

template <class T>
class SwapTask
{
private:
    T value0;
    T value1;

public:
    SwapTask(T value0, T value1)
    {
        this->value0 = value0;
        this->value1 = value1;
    }

    T getValue0()
    {
        return this->value0;
    }

    T getValue1()
    {
        return this->value1;
    }

    void swap()
    {
        T temp = this->value0;
        this->value0 = this->value1;
        this->value1 = temp;
    }
};

int main()
{
    int i0 = 1, i1 = 2;
    double d0 = 3.0, d1 = 4.0;
    char c0 = 'A', c1 = 'B';

    SwapTask<int> st0(i0, i1);
    cout << "Original values: " << st0.getValue0() << " and " << st0.getValue1() << endl;
    st0.swap();
    cout << "Swapped values: " << st0.getValue0() << " and " << st0.getValue1() << endl
         << endl;

    SwapTask<double> st1(d0, d1);
    cout << "Original values: " << st1.getValue0() << " and " << st1.getValue1() << endl;
    st1.swap();
    cout << "Swapped values: " << st1.getValue0() << " and " << st1.getValue1() << endl
         << endl;

    SwapTask<char> st2(c0, c1);
    cout << "Original values: " << st2.getValue0() << " and " << st2.getValue1() << endl;
    st2.swap();
    cout << "Swapped values: " << st2.getValue0() << " and " << st2.getValue1() << endl
         << endl;
    return 0;
}