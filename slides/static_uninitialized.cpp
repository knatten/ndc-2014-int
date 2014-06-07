#include <iostream>
#include <limits>
using namespace std;

void f()
{
    static int i;
    cout << i;
    i = 2;
}

int main()
{
    f();
    f();
}
