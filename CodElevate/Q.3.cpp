#include<iostream>
using namespace std;

int reverse(int x){
    int lastDigit = 0;
    int rev = 0;

    while(x>0){
        lastDigit = x % 10;
        rev = rev * 10 + lastDigit;
        x /= 10;
    }
    return rev;

}



int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int reve = reverse(number);

    if(reve == number) cout<<"Entered number is a palindrome";
    else cout<<"Not a palindrome";
}