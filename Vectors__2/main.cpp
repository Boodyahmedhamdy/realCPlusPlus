#include <iostream>
#include <vector>
using namespace std;

vector <int> returnVector()
{
    vector <int> temp ;
    for (int i = 0 ; i < 10 ; i++)
        temp.push_back(i + 1);
    return temp ;
}
void print__vector(vector <int> V)
{
    for (int i = 0 ; i < V.size() ; i++)
        cout << V[i] << endl;
}


int main()
{
//    vector <int> emptyV;
//    emptyV = returnVector();
//    print__vector(emptyV);


    // welcome back


    return 0;
}
