#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Letter is Uppercase" << endl;
    }
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Letter is Lowercase" << endl;
    }
    if (ch >= '1' && ch <= '9')
    {
        cout << "it is a number" << endl;
    }
}
