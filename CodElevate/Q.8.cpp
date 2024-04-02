#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int oddCount = 0;
    int evenCount = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0) evenCount++;
        else oddCount++;
    }

    cout<<"Odd count :"<<oddCount<<endl<<"Even count :"<<evenCount;

}