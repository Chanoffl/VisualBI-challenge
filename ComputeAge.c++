#include <iostream> 
#include<algorithm>
using namespace std;

//Efficient Time complexity O(n log n)
int lowerIndex(int arr[], int n, int x) 
{ 
    int low = 0, high = n - 1; 
    while (low <= high) { 
        int mid = (low + high) / 2; 
        if (arr[mid] >= x) 
            high = mid - 1; 
        else
            low = mid + 1; 
    } 
    return low; 
} 
  

int upperIndex(int arr[], int n, int y) 
{ 
    int low = 0, high = n - 1; 
    while (low <= high) { 
        int mid = (low + high) / 2; 
        if (arr[mid] <= y) 
            low = mid + 1; 
        else
            high = mid - 1; 
    } 
    return high; 
} 

int cou(int arr[], int n, int x, int y) 
{ 
    int count = 0; 
    count = upperIndex(arr, n, y) - lowerIndex(arr, n, x) + 1; 
    return count;
}  

int main() {
    int n,i,start,end; 
    cin>>n; 
    int a[n]; 
    cout<<"Enter the ages"<<endl;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a + n);  
    cout<<"Age of different group"<<endl;
    cout<<"Enter the range"<<endl; 
    cin>>start>>end; 
    cout<<"Total no. of persons"<<endl; 
    cout << cou(a, n, start, end) << endl; 
    return 0; 
}
