#include "teacher.h"

    std::vector <std::string> Teacher::lectures;
    int Teacher::grade;


    void Teacher::add_lecture(std::string lecture)
    {

        lectures.push_back(lecture);
        std::cout << "added" << lecture << "to your own lectures" << std::endl;
    }

    void Teacher::print_lectures()
    {
        for (int i = 0 ; i < this->lectures.size() ; i++)
        {
            std::cout << this->lectures[i] << std::endl;
        }
    }
int Teacher::userCount = 0;
