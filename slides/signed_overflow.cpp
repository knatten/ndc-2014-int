#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int i = numeric_limits<int>::max();
    cout << i << endl;
    i++;
    cout << i << endl;
}
