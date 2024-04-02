#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = 0;
    int b =1;
    int fibo;
    cout<<1<<" ";
    
    for(int i=1;i<=n-1;i++){
        fibo = a+b;
        
        a=b;
        b = fibo;
        cout<<fibo<<" ";

    }

}