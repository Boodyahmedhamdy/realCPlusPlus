#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector <string> namesTable;

    namesTable.push_back("ahmed");
    namesTable.push_back("hassan");
    namesTable.push_back("koky");
    namesTable.push_back("boody");
    namesTable.push_back("hamdy");



    ofstream myFile;

    myFile.open("files/ahmed.txt", ios::app);
    if (myFile.is_open())
    {
        cout << "the file opened successfully"<< endl;
    }
    myFile << "this is a new file with name of ahmed.txt" << endl;


    for (string name : namesTable)
    {
        myFile << name << endl;

    }


    myFile.close();



    // std::ofstream myFile;





    return 0;
}
