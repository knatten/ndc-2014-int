#include <iostream>
#include <limits>
using namespace std;

void f()
{
    int i;
    cout << i;
    i = 2;
}

void g()
{
    static int j = 3;
}

int main()
{
    f();
    g();
    f();
}
