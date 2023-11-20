/*
    1 
    2 2
    3 3 3
    4 4 4 4
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << endl;
    int i = 0;
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << i+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
