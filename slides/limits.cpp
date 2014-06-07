#include <iostream>
#include <limits>
using namespace std;

int main()
{
   cout << sizeof(int) << endl; 
   cout << numeric_limits<int>::max() << endl;
   cout << numeric_limits<int>::min() << endl;
}
