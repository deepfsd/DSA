/*
    D
    C D
    B C D
    A B C D
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
        char ch = 'A' + n - i - 1;
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
