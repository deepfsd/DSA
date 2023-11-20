/*
    A B C
    A B C
    A B C
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
        while(j < n){   
            cout << char('A' + j);
            j++;
        }   
        cout << endl;
        i++;
    }
    return 0;
}
