#include <iostream>

int get_change(int m) {
  int n = 0;
  int k = 3;
  int arr[k] = {1,5,10};
  while(m > 0)
  {
    int i = k - 1;
    while(i >= 0)
    {
      if(m >= arr[i]) {
        n++;
        m -= arr[i];
        if(m < arr[i]) 
        {
          i--;
        }
      }
      else 
        i--;
    }
  }
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
