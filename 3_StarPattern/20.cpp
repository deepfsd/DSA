/*
           *
         * *
       * * *
     * * * *
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
        int space = n;
        while(space > i+1){
            cout << " ";
            space--;
        }
        while(j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
