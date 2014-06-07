#include <iostream>
#include <limits>
using namespace std;

void f()
{
    int i;
    cout << i;
    i = 2;
}

int main()
{
    f();
    f();
}
