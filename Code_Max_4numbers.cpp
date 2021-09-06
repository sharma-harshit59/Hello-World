#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin>> a >> b >> c >> d;
    int M = max(max(a, b), max(c, d));
    cout<< "The Maximum among the 4 numbers is : " << M;
    return 0;
}