#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cin >> num1;
    cin >> num2;
    while(num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    cout << num1 << endl;
}