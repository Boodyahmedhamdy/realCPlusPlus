#include <iostream>
#ifndef THECLASS_H_INCLUDED
#define THECLASS_H_INCLUDED

class User
{

public:
    int age;
    std::string firstName;
    std::string lastName;

    void set__status(std::string status);
    void show();


};

#endif // THECLASS_H_INCLUDED
