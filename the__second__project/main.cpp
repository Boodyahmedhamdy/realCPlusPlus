#include <iostream>

using namespace std;

#define SEPARATOR printf("\n-------------------\n");
#include <math.h>
int main()
{
    cout << "Hello world!" << endl;
    SEPARATOR
    cout << "that was a separator";
    SEPARATOR

    cout << sqrt(25) << endl << NAN << endl << INFINITY << endl;

    SEPARATOR

    cout << remainder(10, 3.23) << endl;
//    cout << 10 % 1.23 << endl ; error --> the value always should be an integer

    cout << fmax(2, 4) << endl;

    SEPARATOR

    cout << round(1.4) << endl << round(4.8) << endl ;




    return 0;
}
