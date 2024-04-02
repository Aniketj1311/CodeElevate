#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns :";
    cin>>n;
    int arr[m][n];

    cout<<"Enter array elements:";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        
        }
    }
    
    int prevCount =0;
    int maxidx=0;

    for(int i=0;i<m;i++){
        
        int currCount=0;
        for(int j=0;j<n;j++){
            if(arr[i][j]==1) currCount++;

        }
        if(currCount>prevCount){
            prevCount = currCount;
            maxidx = i;
        }
    }
    cout<<"The index of row with maximum 1's is "<<maxidx<<" having "<<prevCount<<" 1's";

}