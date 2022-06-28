#include <iostream>

using namespace std;

int main()
{

    int array[2][3];

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the Value of (" << (i + 1) << "," << (j + 1) << ") : ";
            cin >> array[i][j];
        }
    }
    cout << "Here is Your Array -\n";
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}