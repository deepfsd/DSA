#include <iostream>
using namespace std;

int main(){
    int a = 123;
    cout << a << endl;
    char ch = 'c';
    cout << ch << endl;
    bool bl = true;
    cout << bl;
    float f = 1.2;
    cout << endl << f << endl;
    double d =1.23;
    cout << d << endl;

    int size = sizeof(a);

    cout << "Size of a is: " << size << endl;

}