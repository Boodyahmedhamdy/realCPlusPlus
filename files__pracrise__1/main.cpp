#include <iostream>
#include <fstream>
using namespace std;



void print_file(ifstream& theFile);
ofstream create_file_numbers(string path, int start, int end);
void print_file(string path);

int main()
{

//    ofstream originalFile ("numbers.txt");
//    for (int i = 0 ; i < 100 ; i++)
//    {
//        originalFile << i << endl;
//    }
//    originalFile.close();

//    ifstream readFile ("numbers.txt");
//    if (readFile.is_open())
//    {
//        int x;
//        while (readFile >> x)
//            cout << x << endl;
//        readFile.close();
//    }
//    else
//    {
//        cout << "something went wrong" << endl;
//    }


    ofstream testFile = create_file_numbers("nums.txt", 1, 20);
    print_file("nums.txt");




    return 0;
}
/*
void print_file(ifstream& theFile)
{
    string line;
    while(getline(theFile, line))
        cout << line << endl;
    theFile.close();
}
*/

ofstream create_file_numbers(string path, int start, int end)
{
    ofstream tempFile (path);
    for (int i = start; i <= end  ; i++)
    {
        tempFile << i << endl;
    }
    tempFile.close();

    cout << "file was created successfully" << endl;

    return tempFile;


}


void print_file(string path)
{
    ifstream theFile (path);
    string line ;
    while (theFile >> line)
        cout << line << endl;
    theFile.close();
    cout << "printing was finished successfully" << endl;
}


