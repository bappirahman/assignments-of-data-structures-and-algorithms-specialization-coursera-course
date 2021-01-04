#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long arr[t];
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    
    long long firstMax = arr[0], secoundMax = 0;
    for(int i = 1; i < t; i++)
    {
       if(secoundMax < arr[i])
       {
           long long temp = secoundMax;
           secoundMax = arr[i];
           if(firstMax < temp)
           {
               firstMax = temp;
           }
       }
       else if(firstMax < arr[i])
       {
           long long temp = firstMax;
           firstMax = arr[i];
           if(secoundMax < temp)
           {
               secoundMax = temp;
           }
       }
    }
    long long ans = firstMax * secoundMax;
    cout << ans << endl;
    return 0;
}
