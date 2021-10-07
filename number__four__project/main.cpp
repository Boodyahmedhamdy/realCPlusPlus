#include <iostream>

using namespace std;

int main()
{
//    short i = 1;
//    while(i > 0)
//    {
//        cout << i << endl;
//        i = i + 10;
//    }
//    cout << "we are done and they were right"<< endl;
    int x = 10, y = 22;
    bool result;
    // is x == y if so result = true else result = false
    result = x == y ? true: false;
    cout << result << endl;

    x == y ? cout << "they are the same": cout << "no they arn't the same";



    return 0;
}
