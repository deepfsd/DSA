/*
    A B C
    B C D
    C D E
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{             
    int n; 
    cin >> n;
    int i = 0;        
    while(i < n){
        char ch = 'A' + i;
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
