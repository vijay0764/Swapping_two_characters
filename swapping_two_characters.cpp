#include <iostream>

using namespace std;
// swapping two char value.

int main()
{
    char a , b;
    cout << " enter the 1 character  ";
    cin >> a ;
    cout << " enter the 2 character  ";
    cin >> b;
    cout << " Before swapping\n a=" << a << " b=" << b;

    // int -- changes the char value to ACSII code for char

    a = int(a+b) ;
    b=int (a-b);                // b assigns Acsii code of a value
    a=int (a-b);                    // a assigns Acsii code of b value
    cout << " \nAfter swapping\n a=" << a << " b=" << b;            // \n for appending line













    return 0;
}
