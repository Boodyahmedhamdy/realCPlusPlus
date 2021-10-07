#include <iostream>

using namespace std;


struct USER
{
    int id;
    float salary;

    string get__name()
    {
        return name;
    }
private:
    string name = "ahmed";

};
int main()
{
    USER user;
    cout << "the name of user is " << user.get__name() << endl;



    return 0;
}
