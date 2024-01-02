#include <iostream>
using namespace std;
int main()
{
    int a;
    a = 12;
    cout << "size of int = " << sizeof(a) << endl;

    float b;
    b = 100.10;
    cout << "size of float = " << sizeof(b) << endl;

    bool c;
    c = true;
    cout << "Bool size of = " << sizeof(c) << endl;

    char firstLetter = 'A';
    cout << "The firstletter size is = " << sizeof(firstLetter) << endl;
    return 0;
}