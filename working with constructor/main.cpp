#include <iostream>
#include <vector>

using namespace std;

class User
{

// the default in class is the private values
// but in struct
// the default is the public values
 // private: <-- no need to put this private here


public:
    string firstName;
    string lastName;
    string email;


    int id;
    int nationalID;


    bool haveAcar = false;


    float salary;


    int get__nationalID()
    {
        return nationalID;
    }

    User()
    {
        cout << "created a new User object" << endl;
    }

    User(string firstName, string lastName)
    {
        this -> firstName = firstName;
        this -> lastName = lastName;
    }



};


void output__user(User u);
void output__list__of__users(vector <User> users);
bool add__user__if__not__exist(vector <User> &users, User user);


int main()
{
    User ahmed = User("ahmed", "hassan");
    User hassan = User();

    output__user(ahmed);
    output__user(hassan);




    return 0;
}

// print only single user object from User class 'as an argument'
void output__user(User u)
{
    cout << "user name is " << u.firstName << " " << u.lastName << endl;
    cout << "user email is " << u.email << endl;

    cout << "user national id is " << u.get__nationalID() << endl;
    cout << "user id is " << u.id << endl;
    cout << "\n----------------------\n";

}
// print vector of Users objects
void output__list__of__users(vector <User> users)
{

    for (int i = 0 ; i < users.size() ; i++)
    {
        output__user(users[i]);
    }
}

// adds a new user to any passed vector of users
// depending on the id
// no duplicated id in the passed vector
// it will return true or 1 if added any object
// returns false or 0 if no thing has been changed
bool add__user__if__not__exist(vector <User> &users, User user)
{
    for (int i = 0 ; i < users.size() ; i++)
    {
        if (users[i].id == user.id)
        {
            return false;
        }
    }

    users.push_back(user);
    return true;

}

