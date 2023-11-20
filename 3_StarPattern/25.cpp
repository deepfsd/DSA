/*
        1234
         234
          34
           4
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
        int space = n - i;
        while(space < n){
            cout << " ";
            space++;
        }
        int value = i;
        while(j < n - i){
            cout << value + 1;
            j++;
            value++;
        }
        cout << endl;
        i++;
    }       
    return 0;
}