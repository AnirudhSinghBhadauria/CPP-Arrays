#include <iostream>

using namespace std;

int main()
{

    int sum , array[] = {2, 4, 6, 8, 10};

    for (int i = 0 ; i < 5 ; i++)
    {
        
        sum += array[i];
    }
    cout<<"Sum of Elements of Array is ----> " << sum;

    return 0;
}