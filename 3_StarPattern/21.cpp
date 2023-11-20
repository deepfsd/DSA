/*
    * * * *
    * * *
    * * 
    * 
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    int n;
    cin >> n;
    cout << endl;
    while(i < n){
        int j = 0;
        while(j < n-i){
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }        
    return 0;
}
