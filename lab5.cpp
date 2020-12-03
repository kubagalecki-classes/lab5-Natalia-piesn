#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< int > vs;
    cout << vs.size() << " " << vs.capacity() << endl;
    for (int i = 0; i < 100; i++) {
        vs.push_back(i);
    }
    cout << vs.size() << " " << vs.capacity() << endl;
}
