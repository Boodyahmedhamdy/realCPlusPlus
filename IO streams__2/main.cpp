#include <iostream>
#include <fstream> // for file streams
using namespace std;

int main()
{

    string fileName;

    cout << "please enter file name : ";
    cin >> fileName;


    std::ofstream file;

    file.open(fileName + ".txt");
    file << fileName <<endl << "ahmed hassan koky" << endl;

    return 0;
}
