#include <iostream>

using namespace std;

int main()
{

    int max, array[] = {2, 4, 6, 8, 10};

    max = array[0];

    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    cout << "The Maximum Elemnt of the Array is ----> " << max;

    return 0;
}