#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Multiplication table for " << number << ":\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    return 0;
}

/*
Enter a number: 18
Multiplication table for 18:
18 x 1 = 18
18 x 2 = 36
18 x 3 = 54
18 x 4 = 72
18 x 5 = 90
18 x 6 = 108
18 x 7 = 126
18 x 8 = 144
18 x 9 = 162
18 x 10 = 180 */