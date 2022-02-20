#include<iostream>
using namespace std;

int factorial(int n){
   if(n==1){
       return 1;
   }
   int fnm1 = factorial(n-1);
   int fn = n*fnm1;
   return fn;
}


int main(){
    int n; cin>>n;
    int f = factorial(n);
    cout<<f<<endl;
}
//thankyou:)
