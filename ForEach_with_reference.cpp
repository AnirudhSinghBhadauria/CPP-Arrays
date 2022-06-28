#include <iostream>

using namespace std;

int main()
{

    int array[] = {2, 4, 5, 6, 7, 8, 9};

    // for (auto k : array) ----> CALL BY value
    for (auto &k : array) // CALL BY REFERENCE
    {
        cout << ++k << endl;
    }

    cout << array[0]; // GETS CHANGED IN CALL BY REFERENCE BUT NOT IN CALL BY VALUE !

    return 0;
}