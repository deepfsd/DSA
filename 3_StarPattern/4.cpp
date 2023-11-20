#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4
    */

    int n = 4;
    int i = 0;

    while(i < n){
        int j = 0;
        while(j < n){
            cout << j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
