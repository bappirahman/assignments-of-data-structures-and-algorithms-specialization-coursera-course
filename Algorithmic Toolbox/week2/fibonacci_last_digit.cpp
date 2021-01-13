#include <iostream>
using namespace std;


int fibonacci_last_digit(int n) {
    int arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        arr[i] = (arr[i - 1] % 10) + (arr[i - 2] % 10);
    }

    return arr[n] % 10;
}

int main() {
    int n = 0;
    cin >> n;
    int ans = fibonacci_last_digit(n);
    cout << ans << '\n';
    return 0;
}