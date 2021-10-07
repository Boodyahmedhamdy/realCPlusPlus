#include <iostream>

using namespace std;
class Position
{

public:
    int x = 1;
    int y = 1;

    Position operator + (Position pos)
    {
        Position temp;
        temp.x = x + pos.x;
        temp.y = y + pos.y;

        return temp;
    }

    bool operator == (Position pos)
    {
        if (x == pos.x && y == pos.y)
        {
            return true;
        }
        return false;
    }


    void display()
    {
        cout << "("<< this->x << ", " << this->y << ")" << endl;
    }
};

ostream& operator << (ostream& output, Position point)
{
    output << "("<< point.x << ", " << point.y << ")";
    return output;

}
istream operator >> (istream &input , Position &point)
{
    input >> point.x >> point.y ;
    return input;
}

int main()
{

    Position pos1, pos2;

    if (pos1 == pos2)
    {
        cout << "they are equal" << endl;
    }

    Position pos3 = pos1 + pos2;

    pos3.display();

    cout << "-----------------------" << endl;

    cout << pos3 << endl;

    cin >> pos1 ;
    cout << pos1 << endl;





    return 0;
}
