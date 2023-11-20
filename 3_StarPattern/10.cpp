/*
    1 
    2 3
    3 4 5
    4 5 6 7
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 0;
    while(i < n){
        int j = i;
        while(j <= (2*i)){
            cout << j+1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
