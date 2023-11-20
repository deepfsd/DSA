/*
         1
        23
       456
     78910   
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;        
    int n;
    cin >> n;
    cout << endl;
    int value = 1;
    while(i < n){
        int j = 0;
        int space = n - i - 1;
        if(space != 0){   
        while(space+1){
            cout << " ";
            space--;
        }
        }else{
            while(space){
                cout << " ";
                space--;
            }
        }
        
        while(j <= i){
            cout << value;
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
