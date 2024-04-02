#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an even size of array : ";
    cin>>n;
    if((n%2)!=0){
        cout<<"Enter an even number ";
        return 0;
    }
    int arr[n];
    cout<<"Enter "<<n<<" elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i =0;i<n/2;i++){
        for(int j = i+1;j<n/2;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }
    for(int i =n/2;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}