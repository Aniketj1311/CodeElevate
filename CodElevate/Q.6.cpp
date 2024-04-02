#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[i]==arr[j]){
                flag = true;
            }

        }
        if(flag == false){ 
        cout<<arr[i]<<" ";
        // return 0;   use return 0 or break if only first unique number is wanted
        }

    } 

}