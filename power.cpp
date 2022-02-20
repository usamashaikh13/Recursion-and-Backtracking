#include<iostream>
using namespace std;

int power(int x,int n){
   // write your code here
   if(n==0) return 1;
   int xnm1 = power(x,n-1);
   int xn = x*xnm1;
   return xn;

}

int main(){
    int n,x; cin>>x>>n;
    int xn = power(x,n);
    cout<<xn;
}
