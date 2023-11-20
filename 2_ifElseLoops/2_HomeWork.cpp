#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    else {
        for (int i = 2; i < n; i++)
        {
            if(n%i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    //-----------------------------------------------------

    // Ques1 -> Find sum of all even number to n.

    // int n;
    // cout << "Enter a Number: ";
    // cin >> n;

    // int sum = 0;
    // cout << "Even: ";
    // for (int i = 2; i <= n; i = i + 2)
    // {
    //         cout <<  i << ", ";
    //         sum = sum + i;

    // }
    // cout <<  endl;
    // cout << "Sum: " << sum << endl;

    //-----------------------------------------------------

    // Ques2-> Faranite to celcius coversition.

    // double f;
    // cout << "Enter Fahrenheit degree, you want to convert into celsius: ";
    // cin >> f;

    // double c = ((f-32)*5/9);

    // cout << "Thier is " << c << " Celsius in " << f << " Fahrenheit";

    //-----------------------------------------------------

    // Ques3-> Print prime no. to n.

    int num;
    cout << "Enter: ";
    cin >> num;

    isPrime(num) ? cout << num << " is a prime Number " : cout << num << " not a prime number";

    return 0;
}