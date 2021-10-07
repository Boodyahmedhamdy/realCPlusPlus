#include <iostream>

using namespace std;


namespace my
{
    void print_author_name(string name)
    {
        cout << "the author is " << name << endl;
    }

    void print_author_age(int age)
    {
        cout << "the author is " << age << " years old" << endl;
    }

    void print_author_family_name(string familyName)
    {
        cout << "the author\'s family name is " << familyName << endl;
    }

}
using namespace my;

int main()
{

    my::print_author_age(33);
    my::print_author_name("ahmed hassan koky");
    print_author_family_name("hamdy hassan");


    return 0;
}
