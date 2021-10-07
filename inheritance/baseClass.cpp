#include <iostream>
#include "baseClass.h"

    // private
    std::string status = "gold";



    // public
    static int userCount;

    std::string firstName;
    std::string lastName;

    unsigned short int age;

    void User::set_status(std::string status)
    {
        this -> status = status;
    }
    void User::get_status()
    {
        std::cout << this -> status << std::endl;
    }

    static int get_user_count()
    {
        return userCount;
    }
    void User::print_user_count()
    {
        std::cout << "you have " << User::userCount << " active users" << std::endl;
    }

    void User::print_user()
    {
        std::cout << "first name : " << this -> firstName << std::endl;
        std::cout << "last name : " << this -> lastName << std::endl;

        std::cout << "age : " << this -> age << std::endl;

        std::cout << "status : ";
        get_status();

    }
    // constructor
    User::User()
    {
        userCount++;
    }

// static initial value
int User::userCount = 0;
