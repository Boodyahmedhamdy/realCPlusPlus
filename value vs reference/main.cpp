#include <iostream>

using namespace std;

void swap_numbers(int &x, int &y)
{
    int temp = x;
    x = y ;
    y = temp;

}
int main()
{

    int a = 22, b = 33;
    cout << "before swapping \na = " << a << " b = " << b << endl;
    swap_numbers(a, b);
    cout << "after swapping \na = " << a << " b = " << b << endl;


    return 0;
}
