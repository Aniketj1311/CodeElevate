#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];

    cout<<"Enter "<<n<<" Elements :";

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int i=0;
    int j=n-1;

    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }


}