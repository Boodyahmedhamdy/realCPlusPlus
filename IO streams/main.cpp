#include <iostream>
#include <vector>

using namespace std;

int main()
{

    typedef struct xx {
        int id ;
        float salary;
        string name;

    } lol ;

    lol ahmed;
    ahmed.id = 2;
    ahmed.salary  = 22.4;
    ahmed.name = "ahmedHassanKoky";

    lol boody;
    boody.id = 233;
    boody.salary  = 223.4;
    boody.name = "boodyAhmedHamdy";

    vector <lol> allStudents;
    allStudents.push_back(ahmed);
    allStudents.push_back(boody);


    for (lol student : allStudents)
    {
        cout << "id : " << student.id <<  endl;
        cout << "salary : " <<  student.salary <<  endl;
        cout << "name : " << student.name <<  endl;
        cout << "----------------------\n";
    }

    return 0;
}
