/*
    1
    2 1 
    3 2 1
    4 3 2 1
*/
             
#include <iostream>
using namespace std;
             
int main(int argc, char const *argv[])
{            
    int i = 0;
    int n = 4;
             
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << i - j + 1;
            j++;
        }    
        cout << endl;
        i++; 
    }        
    return 0;
}            
