#include <iostream>
using namespace std;

class Product
{
public:
    int markedPrice();
    int discount();
};

// Product class methods.
int Product::markedPrice()
{
    return 1000;
}

int Product::discount()
{
    return 40;
}

class Dress : public Product
{
public:
    char size(int chestSize);
};

char Dress::size(int chestSize)
{
    if (chestSize >= 20 && chestSize <= 30)
        return 'S';
    else if (chestSize >= 31 && chestSize <= 40)
        return 'M';
    else if (chestSize > 40)
        return 'L';
    else
        return 'E';
}

class Shirt : public Dress
{
public:
    int price(int chestSize);
};

int Shirt::price(int chestSize)
{
    switch (size(chestSize))
    {
    case 'S':
        return (markedPrice()) - (markedPrice() * discount() / 100);
        break;
    case 'M':
        return (markedPrice() + 500) - (markedPrice() * discount() / 100);
        break;
    case 'L':
        return (markedPrice() + 1000) - (markedPrice() * discount() / 100);
        break;
    default:
        return 0;
        break;
    }
}

int main()
{
    int chestSize;
    cout << "Enter the chest size: ";
    cin >> chestSize;

    Shirt s;
    cout << "Dress size: " << s.size(chestSize) << " price: $" << s.price(chestSize) << endl;
    return 0;
}