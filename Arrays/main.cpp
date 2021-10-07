#include <iostream>

using namespace std;

void print__array(int arr[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << endl;
    }

}

int main()
{
    int guesses[10] = {0};
    cout << "size of the array is " << sizeof(guesses) << " bytes" << endl;


    // print__array(guesses, 10);
    // -----------------------------------------------
    // -----------------------------------------------
    // -----------------------------------------------
    int x;

    if (cin >> x)
        cout << "done";
    else
        cout << "bad";

    cin.clear();




}
