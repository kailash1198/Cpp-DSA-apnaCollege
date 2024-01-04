#include <iostream>
using namespace std;

int main()
{
    int momAmount;
    int papaAmount;
    int totalAmount;
    cout << "Please enter Given by MOM anount: ";
    cin >> momAmount;
    cout << "Please enter Given by PAPA anount: ";
    cin >> papaAmount;
    totalAmount = momAmount + papaAmount;
    cout << "Total amount is ";
    cout << totalAmount;
    return 0;
}