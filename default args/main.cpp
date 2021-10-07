#include <iostream>
#include <vector>
using namespace std;

// defining the User type with first name, second name and age
typedef struct c {
    string firstName = "firstname";
    string secondName = "secondname";
    int age = 0;
}User;

// as a constractor for the User type or object
User create_new_user(string firstName, string secondName, int age = 99)
{
    User tempUser;
    tempUser.firstName = firstName;
    tempUser.secondName = secondName;
    tempUser.age = age;

    return tempUser;

}

// to print list or vector of user objects
void print_user_list(vector <User> theList)
{
    for (User user : theList)
    {
        cout << "first name : " << user.firstName << endl;
        cout << "second name : " << user.secondName << endl;
        cout << "age : " << user.age << " years old" <<  endl;
        cout << "\n-------------------\n";
    }
}


int main()
{
    vector <User> userList;

    userList.push_back(create_new_user("ahmed", "hassan", 15));
    userList.push_back(create_new_user("boody", "ahmed"));

    // print the userList

    print_user_list(userList);

    return 0;
}


