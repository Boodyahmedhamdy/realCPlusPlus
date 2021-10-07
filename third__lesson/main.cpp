#include <iostream>

using namespace std;

int main()
{
//    auto x = 44u;
    // this makes it is 10 in hexdicimal
//    int x = 0x10;
//    cout << "x in hexadecimal is " << x << endl;
//
//    x = 010;
//    cout << "x in octal is " << x << endl ;
//
//    x = 10;
//    cout << "x in decimal is " << x << endl;

    int x = 22;
    // this doesn't change the value on the screen
    // it changes the value of x and store it in it
    cout << x <<" in hexadicimal is ";
    cout << hex << x << endl ;

    cout << x << endl ;
    x = 22;
    cout << x <<" in octal is " ;
    cout << oct << x << endl ;
//    x = 22;











    return 0;
}
