/*
        1
       22
      333
     4444 
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    int n;
    cin >> n;
    while(i < n){
        int j = 0;
        int space = n - i - 1;
        while(space){
            cout << " ";
            space--;
        }
        while(j <= i){
            cout << i + 1;
            j++;
        }
        cout << endl;
        i++;
    }        
    return 0;
}
