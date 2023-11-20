/*
        1
       121
      12321
     1234321   
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
        // space
        int space = n - i - 1;
        while(space){
            cout << " ";
            space--;
        }
        // value1
        
        int j = 0;
        int value1 = 1;
        while(j <= i){
            cout << value1;
            value1++;
            j++;
        }
        //value2
        int k = 0;
        int value2 = i;
        while(k < i){
            cout << value2;
            k++;
            value2--;
        }
        cout << endl;
        i++;
    }        
    return 0;
}
