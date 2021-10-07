#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x =33;
    string name;
//    cout << name << endl ;

    getline(cin, name);

//    string email;
//    cout << "what is your account : ";
//    cin >> email ;
//    cout << "hello " << name + email << endl;

    cout << name + " contains " << name.length() << " characters "<< endl ;

    // string methods
    name = name + " there";
    cout << name << endl;

    name.append("__name");
    cout << name << endl ;

    name.erase(11, 2);
    cout << name + " after erase " << endl ;

    name.insert(11, " ");
    cout << name << endl ;

    name.replace(0, 5, "no name here");
    cout << name << endl ;






    return 0;
}
