#include <iostream>

using namespace std;

int main()
{

    int array1[2][3];
    int array2[2][3];
    int array3[2][3];

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value of (" << i + 1 << "," << j + 1 << ") for Array 1: ";
            cin >> array1[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value of (" << i + 1 << "," << j + 1 << ") for Array 2: ";
            cin >> array2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            array3[i][j] = array2[i][j] + array1[i][j];
        }
    }

    cout << "Addition of the Array 1 and Array 2 is - \n\n";
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << array3[i][j]<<"  ";
        }
        cout << "\n";
    }
    return 0;
}