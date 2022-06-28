#include <iostream>

using namespace std;

int main()
{

    int min;

    int array[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Element " << i+1 << " of the Array : ";
        cin >> array[i];
    }

    min = array[0];

    for (int i = 0; i < 5; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    cout << "Minimum Element of the Array is ----> " << min;
    return 0;
}