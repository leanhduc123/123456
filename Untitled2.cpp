#include <iostream>
using namespace std;
int Factory(int x)
{
    if (x > 1) return Factory(x-1)*x;
    else return 1;
}

int main()
{
    cout << Factory(4);
    return 0;
}
