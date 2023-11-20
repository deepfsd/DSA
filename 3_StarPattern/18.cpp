/*
    A
    B C
    C D E
    D E F G
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
            ch++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
