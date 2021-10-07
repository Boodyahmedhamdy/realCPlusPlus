#include <iostream>

using namespace std;

struct Rectangle
{
    float width;
    float height;
};

double area(Rectangle rectangle)
{
    return rectangle.width * rectangle.height ;
}

int main()
{
    Rectangle example;
    example.width = 12;
    example.height = 11;
    double theArea = area(example);
    cout << "the area of the rectangle = " << theArea << endl;

    return 0;
}
