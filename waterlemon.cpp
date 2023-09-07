#include <iostream>
using namespace std;

int main()
{
    int weight;
    cout << "Enter the weight of waterlemon : ";
    cin >> weight;

    if (weight <= 100 && weight >= 1)
    {
        if (weight % 2 == 0 && weight > 2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else{
        cout<<"Enter weight within 1 to 100";
    }

    return 0;
}