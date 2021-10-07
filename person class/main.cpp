#include <iostream>

using namespace std;

class Person
{

static int population;

public:

    static int get_population()
    {
        return population;
    }

    // string types
    string firstName;
    string lastName;


    // numbers .. int
    int nationalID;
    int normalID;
    int age;

    // numbers .. float
    float salary;

    // bool
    bool haveAdog;
    bool haveAcar;

    // status
    bool isMarried;
    bool isHuman = true;
    bool isAlive = true;

    enum gerand{male, female};

    int theGerand = male;




    Person()
    {
      population++;
    }

    Person(int nationalID)
    {
        this -> nationalID = nationalID;
    }

    void delete_person()
    {
        this -> ~Person();
    }

    ~Person()
    {
        population--;
    }



};
int Person::population  = 0;

int main()
{
    Person ahmed, hassan, koky, boody, hamdy;
    cout << "you have " << Person::get_population() << " people" << endl;

    cout << "the first one will be deleted" << endl;

    Person him = Person();

    ahmed.delete_person();
    cout << "you have " << Person::get_population() << " people" << endl;

    cout << him.theGerand<< endl;

    return 0;
}
