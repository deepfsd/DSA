/*
    1 1 1 1
    2 2 2 2 
    3 3 3 3 
    4 4 4 4
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 4;
    int i = 0;
    while(i < n){
        int j = 0;
        while(j < n){
            cout << i+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }        
    return 0;
}

