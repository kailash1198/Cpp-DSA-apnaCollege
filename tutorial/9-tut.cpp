#include <iostream>
using namespace std;

int main(void)
{
    int numOne = 10;
    int numTwo = 20;

    int sum = numOne + numTwo;
    cout << "The sum = " << sum << endl;

    int sumNum = numOne++ + ++numOne;
    cout << sumNum << endl;
}