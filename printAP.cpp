#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int number;
    cout << "Enter the number ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {   cout<<a<<" ";
        a = a + 3;
    }
    return 0;
}
