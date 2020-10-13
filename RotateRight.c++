/*input:
7
1 2 3 4 5 6 7
3*/

#include <iostream>
using namespace std;

void reverse(int arr[], int start,int end) 
{ 
    while(start < end) 
    { 
        swap(arr[start], arr[end]); 
        start++; 
        end--; 
    } 
} 

int main() { 
    
    int n,k,i;
    cin>>n;
    int a[n];
    cout<<"Enter the numbers"<<endl; 
    for(i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    cout<<"Enter k elements to rotate"<<endl;
    cin>>k;
    
    reverse(a, 0, n-1); 
    reverse(a, 0, k-1); 
    reverse(a, k, n-1); 
    
    for (i = 0; i < n; i++) 
    { cout << a[i] << " "; 
    }
  
    return 0; 
}
