#include <iostream>


// to create random number
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int r = rand() % 301;
    int choice;
    int gusses = 0;
    while(true)
    {
        cout << "guess the random number : ";
        cin >> choice;

        gusses++;

        if (r == choice)
        {
            cout << "that is true " << "after " << gusses << " choices\n";
            break;
        }
        if (r < choice )
        {
            cout << "guess smaller\n";
        }
        if (r > choice)
        {
            cout << "guess bigger\n";
        }
    }



    return 0;
}
