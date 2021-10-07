#include <iostream>
#include <vector>
#include "baseClass.h"
#include "teacher.h"
using namespace std;


int main()
{

    Teacher mester;
    mester.firstName = "ahmed";
    mester.lastName = "hamdy";

    mester.add_lecture("math1");
    mester.add_lecture("math2");

    mester.print_user();




    return 0;
}
