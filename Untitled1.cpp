#include <iostream>
using namespace std;

int main()
{
    int a[3];
    char b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        cout << &a[i] << ' ';
    }
    // dia chi cua int duoc viet duoi dang hexa
    //
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
        cout << &b[i] <<' ';
    }
    return 0;
}
