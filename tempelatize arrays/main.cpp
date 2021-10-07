#include <iostream>
#include <array>
using namespace std;


void print__array__stl(array <int, 10> arr )
{
    for (int i = 0; i < arr.size() ; i++)
        cout << arr[i] << endl;


}
int main()
{

    int normalArray[] = {3, 4, 33,6 ,7, 4, 3,3};
    array <int, 10> data = {2, 44, 5};
//    print__array__stl(data);

    // like  for i in normalArray
    for(int i : normalArray)
        cout << i << endl;




    return 0;
}
