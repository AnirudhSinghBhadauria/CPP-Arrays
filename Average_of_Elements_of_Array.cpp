#include <iostream>

using namespace std;

int main()
{

    int sum, array[5];
    int noElements;
    cout << "Enter the number of Elements Your Array has : ";
    cin >> noElements;
    float average;
    for (int i = 0; i < noElements; i++)
    {
        cout << "Enter the Element '" << i + 1 << "' of the Array : ";
        cin >> array[i];
    }
    for (int i = 0; i < noElements; i++)
    {
        sum += array[i];
    }
    average = sum / noElements;
    cout << "The Average of Elements of Array is ----> " << average;

    return 0;
}