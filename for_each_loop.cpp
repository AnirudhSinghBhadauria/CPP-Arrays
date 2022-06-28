#include <iostream>

using namespace std;

int main()
{

    int array[] = {2,4,6,8,10};

    for (auto k : array) //CALL BY VALUE
    {
        cout << k << endl;
    }

    cout<<array[0];

    return 0;
}