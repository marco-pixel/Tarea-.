#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    while (true)
    {
        cout << a << "," << b << ",";
        a = a + b;
        b = a + b;
    }
    return 0;
}