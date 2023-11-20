/*
    A
    B B 
    C C C
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 0;

    while(i < n){
        int j = 0;
        char ch = 'A' + i;
        while(j <= i){
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }        
    return 0;
}
