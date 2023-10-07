
#include <iostream>
using namespace std;

int main() {
    int temp=0;
    int arr[] = {15, 12,300, 13, 10};
    for(int i=0;i<5;i++)
    {
      temp= arr[i] +temp;
    }
    cout<<temp;
    
    return 0;
}

