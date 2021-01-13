#include <iostream>
#include <vector>
using namespace std;
long long int gcd(long long int num1,long long int num2)
{
    while(num2 != 0)
    {
        long long int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

long long int lcm(int a,int b) {
    return ((a / gcd(a, b)) * b);
}

int main() {
    long long int a,b;
    cin >> a;
    cin >> b;
    long long int ans = lcm(a,b);
    cout << ans << endl;
    return 0;
}