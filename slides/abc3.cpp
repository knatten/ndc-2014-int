#include <iostream>
using namespace std;

int main() {
    cout << 1["ABC"];
    // §5.2.1: "The expression E1[E2] is identical (by definition) to
    // *((E1)+(E2))"
    cout << *((1)+("ABC"));
    // operator + is commutative
    cout << *(("ABC") + (1));
}
