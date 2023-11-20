#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    /*
        3 2 1
        3 2 1
        3 2 1
    */

    int n = 3;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << n-j;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
