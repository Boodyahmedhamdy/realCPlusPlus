#include <iostream>
#include <vector>

using namespace std;

class User
{

 static int usersCount;

public:

    static int get_users_count()
    {
        return usersCount;
    }

    string firstName;
    string lastName;
    string email;


    int id;
    int nationalID;


    bool haveAcar = false;


    float salary;

    // GETTERS AND SETTERS
    int get__nationalID()
    {
        return nationalID;
    }
    void set_salary(float salary)
    {
        this -> salary = salary;
    }


    // CONSTRUCTORS
    User()
    {
        usersCount++;
    }

    User(string firstName, string lastName)
    {
        this -> firstName = firstName;
        this -> lastName = lastName;
        usersCount++;

    }
    void delete_user()
    {
        this -> ~User();
    }


    ~User()
    {
        usersCount--;
    }
};

int User::usersCount = 0;

void output__user(User u);
void output__list__of__users(vector <User> users);
bool add__user__if__not__exist(vector <User> &users, User user);


int main()
{
    User me = User();
    User him = User();
    cout << User::get_users_count()<< endl;

    User her = User();
    cout << User::get_users_count()<< endl;

    me.delete_user();
    cout  << User::get_users_count() << endl;



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

