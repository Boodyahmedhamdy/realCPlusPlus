#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{

    // reading from files
    ifstream myFile ;
    myFile.open("../IO streams__3/files/ahmed.txt");

    if (myFile.is_open())
        cout << "opened successfully\n";
//
//    vector <string> lines;
//    string line;
//
//    while (myFile >> line)
//    {
//        lines.push_back(line);
//    }
//
//    for(string l : lines)
//        cout << l << endl;

    string line ;
    while (getline(myFile, line))
    {
        cout << line << endl;
    }



    return 0;
}

