#include<bits/stdc++.h>
using namespace std;
int fibo_rec(int n){
    if(n <= 0)return 0;
    if(n == 1)return 1;
    return fibo_rec(n-1)+fibo_rec(n-2);
}
void fib_ite(int n){
    int n1 = 0;
    int n2 = 1;
    int n3;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<n;i++){
        n3 = n2 + n1;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }
}
int main(){
    int n,ans;
    cout<<"Enter the element : ";
    cin>>n;
    cout<<"1.Iterative Method\n2.Recursion Method\nSelect Option";
    cin>>ans;
    if(ans==1){
        fib_ite(n);
    }
    if(ans==2){
        for(int i=0;i<n;i++){
            fibo_rec(i);
        }
    }
    return 0;
}