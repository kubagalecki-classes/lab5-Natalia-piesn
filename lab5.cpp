#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< int > vs;
    cout << vs.size() << " " << vs.capacity() << endl;
    for (int i = 0; i < 20; i++) {
        vs.push_back(i);
        cout << &vs[0] << endl;
    }
    cout << vs.size() << " " << vs.capacity() << endl;
}
