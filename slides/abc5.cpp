#include <iostream>
#include <typeinfo>
using namespace std;

void f(const char a[])
{
    cout << typeid(a).name() <<endl;
}
int main() {
    cout << 1["ABC"] << endl;
    cout << *(1 + (const char*)"ABC") << endl;
    cout << typeid("ABC").name() <<endl;
    auto abc = "ABC";
    cout << typeid(abc).name() <<endl;
    const char abc2[] = "ABC";
    cout << typeid(abc2).name() <<endl;
    f(abc);

}
