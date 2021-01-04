#include<iostream>
#include<vector>

using namespace std;

int test(vector<int> arr, int t)
{
    int ans = 0;
    for(int i = 0; i < t; i++)
    {
        for(int j = i + 1; j < t; j++)
        {
            if(ans < arr[i] * arr[j])
            {
                ans = arr[i] * arr[j];
            }
        }
    }
    return ans;
}
int maxPairwiseProduct(vector<int> arr, int t)
{
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
    cout << firstMax << " " << secoundMax << endl;
    return ans;
}

int main()
{
    while(true)
    {
        int t;
        t = rand() % 1000 + 2;
        cout<< t << endl;
        vector<int> arr;
        for(int i = 0; i < t; i++)
        {
            arr.push_back(rand() % 100000);
        }
        for(int i = 0; i < t; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        int testResult = test(arr,t);
        int codeResult = maxPairwiseProduct(arr,t);
        if(testResult != codeResult)
        {
            cout << "Wrong " << testResult << " " << codeResult << endl;
            break;
        }
        else
        {
            cout << "Ok " << testResult << " " << codeResult << endl;
        }
    }

}