#include<iostream>
using namespace std;

int firstIndex(int arr[], int idx, int x, int n){
    if(idx==n) return -1;
    // write your code here
    int fiisa = firstIndex(arr,idx+1,x,n);
    if(arr[idx]==x){
        return idx;
    }
    else{
        return fiisa;
    }
    
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = firstIndex(arr, 0, d, n);
    cout << p << endl;
}
