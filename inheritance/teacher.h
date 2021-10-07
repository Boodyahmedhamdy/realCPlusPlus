#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED
#include <iostream>
#include <vector>
#include "baseClass.h"

class Teacher : public User
{



public :
    std::vector <std::string> lectures;
    int grade;

    void add_lecture(std::string lecture);

};

#endif // TEACHER_H_INCLUDED
