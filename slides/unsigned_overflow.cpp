#include <iostream>
#include <limits>
using namespace std;

int main()
{
   unsigned int i = numeric_limits<unsigned int>::max();
   cout << i << endl;
   i++;
   cout << i << endl;
}
