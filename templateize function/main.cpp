#include <iostream>

using namespace std;
// only works with int
//void change(int &x, int &y)
//{
//    int temp  = x;
//    x = y;
//    y = temp;
//}
// this one works with all different data types
template <typename T>
void change(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <typename T>
void change(T a[], T b[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp ;
    }

}
template <typename T>
void print_array(T arr[], int size)
{
    for (int i = 0 ; i < size ; i++)
        cout << arr[i] << "\t";
}
int main()
{
    int a = 2, b = 4;


    cout << "a = " << a << "\t b = " << b << endl;
    change(a, b);
    cout << "a = " << a << "\t b = " << b << endl;

    string one = "ahmed";
    string two = "hamdy";

    cout << "one = " << one << "\t two = " << two << endl;
    change(one, two);
    cout << "one = " << one << "\t two = " << two << endl;

    int arr1[] = {1,2,4,6};
    int arr2[] = {22, 33, 55, 66};

    cout << "arr1 = " ;
    print_array(arr1, 4);
    cout << endl;
    cout << "arr2 = "  ;
    print_array(arr2, 4);

    cout << "\n---------------------------\n";

    change(arr1, arr2, 4);

    cout << "\n---------------------------\n";

    cout << "arr1 = " ;
    print_array(arr1, 4);
    cout << endl;
    cout << "arr2 = "  ;
    print_array(arr2, 4);







    return 0;
}
