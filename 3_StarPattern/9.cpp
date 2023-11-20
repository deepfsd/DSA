/*
    1
    2 3 
    4 5 6
    7 8 9 10
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 0;
    int num = 1;
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << num;
            num++;            
            j++;
        }
        cout << endl;
        i++;
    }        
    return 0;
}
