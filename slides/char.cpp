#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
   cout << boolalpha;
   cout << (typeid(int) == typeid(signed int)) << endl;
   cout << (typeid(int) == typeid(unsigned int)) << endl;
   cout << (typeid(char) == typeid(signed char)) << endl;
   cout << (typeid(char) == typeid(unsigned char)) << endl;
}
