#include <iostream>
using namespace std;
int main()
{
    int j;
    int b = 1;
    for (int i = 3; i < 50; i++)
    {
        if (i % 3 == 0)
        {
            j = i;
            b = j * b;
        }
    }
    cout << b;
    return 0;
}