/*
    A B C
    D E F
    G H I
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 0;
    char ch = 'A';
    while(i < n){
        int j = 0;
        while(j < n){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }        
    return 0;
}
