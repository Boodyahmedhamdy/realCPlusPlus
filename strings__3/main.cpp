#include <iostream>

using namespace std;

int main()
{


    string text = "ahmed hassan koky";
    string word = "this is a new word";

//    text.replace(text.find("koky"), word.length(), word);
    cout << text << endl ;
    // index of start and number of characters
    cout << text.substr(0, 5) << endl;
    // return index of any character in the string that you give him
    cout << text.find_first_of("sd") << endl ;

//    unsigned long x = -1;
//    cout << x << endl ;





    return 0;
}


