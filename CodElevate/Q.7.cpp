#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter size of first array :";
    cin>>m;
    int n;
    cout<<"Enter size of second array :";
    cin>>n;
    int arr[m],brr[n];

    cout<<"Enter the elements of first array :";

    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    cout<<"Enter the elements of second array :";


    for(int i=0;i<n;i++){
        cin>>brr[i];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==brr[j]) cout<<arr[i]<<" ";
        }
    }
}
