#ifndef BASECLASS_H_INCLUDED
#define BASECLASS_H_INCLUDED
#include <iostream>
class User
{

    std::string status = "gold";

public:
    static int userCount;

    std::string firstName;
    std::string lastName;

    unsigned short int age;

    void set_status(std::string status);
    void get_status();

    static int get_user_count();
    void print_user_count();

    void print_user();

    User();

};

#endif // BASECLASS_H_INCLUDED
