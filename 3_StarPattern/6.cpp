#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    int n = 3;
    int num = 0;

    while(i < n){
        int j = 0;
        while(j < n){
            cout << num + 1;
            num++;
            j++;
        }
        cout << endl;
        i++;
    }        
    return 0;
}
