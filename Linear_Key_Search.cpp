#include <iostream>

using namespace std;

int main()
{

    int array[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the Value of Element " << i + 1 << " of the Array : ";
        cin >> array[i];
    }

    int key;

    cout << "Enter the Key you want : ";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (key == array[i])
        {
            cout << "Your Desired Index is ----> " << i;
            return 0;
        }
    }

    cout << "Search Unsuccesful !";

    return 0;
}