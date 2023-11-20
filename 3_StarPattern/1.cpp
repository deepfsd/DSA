#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

    /*
    * * * *
    * * * *
    * * * * 
    * * * * 
    */

    int n = 4;
    int i = 0;
    while(i < n){
        int j = 0;
        while(j < n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
