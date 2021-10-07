#include <iostream>
#include <vector>

using namespace std;

void print__vector(vector <int> v)
{
    for (int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i] << endl;
    }

}

int main()
{
    vector  <int> myVector = {2, 4, 5, 6, 66, 32, 2, 123, 3};
    print__vector(myVector);
    cout << "\n--------------------------\n";

    vector<int> data;
    data.push_back(1);
    cout << "the first element in this vector is " << data[0] << endl;
    data.push_back(33);
    cout << "last element in this vector is " << data[data.size()- 1] << endl;

    data.push_back(22);
    cout << "last element in this vector is " << data[data.size()- 1] << endl;
    data.pop_back();
    cout << "last element in this vector is " << data[data.size()- 1] << endl;

    data.push_back(22);
    for (int i = 0 ; i < data.size() ; i++)
    {
        cout << data[i] << "\t";
    }



    return 0;
}
