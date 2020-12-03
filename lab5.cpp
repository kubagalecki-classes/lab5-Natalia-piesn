#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< int > vs{100, 42};

    cout << vs.size() << " " << vs.capacity() << endl;
}
