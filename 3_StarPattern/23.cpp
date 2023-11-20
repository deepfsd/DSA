/*
    1 1 1 1
      2 2 2
        3 3
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
        int value = i;
        while(space < n){
            cout << " ";
            space++;
        }
        while(j < n - i){
            cout << value + 1;
            j++;
        }
        cout << endl;
        i++;
    }        
    return 0;
}
