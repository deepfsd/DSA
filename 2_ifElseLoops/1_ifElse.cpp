#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = a + 8;

    if ((a = 10) == b)
    {
        cout << a << endl;
    }
    else
    {
        cout << (a + 2);
    }

    char a1;
    cout << "Enter: ";
    cin >> a1;

    if (a1 >= 'A' && a1 <= 'Z')
    {
        cout << "Uppercase" << endl;
    }
    else if (a1 >= 'a' && a1 <= 'z')
    {
        cout << "LowerCase" << endl;
    }
    else if(a1 >= '0' && a1 <= '9') 
    {
        cout << "Intiger" << endl;
    }
    else
    {
        cout << "Wrong Input" << endl;
    }

    return 0;
}
