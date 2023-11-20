#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
        /*
    1 1 1 1
    1 1 1 1
    1 1 1 1
    */

    int n = 3;
    int i = 0;

    while(i < n){
        int j = 0;
        while(j < n){
            cout << "1";
            j++;
        }
        cout << endl;
        i++;
    }
            
    return 0;
}
