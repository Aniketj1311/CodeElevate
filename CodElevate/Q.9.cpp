#include<iostream>
using namespace std;
int main(){

    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]", str);
    int length =0;
    int i = 0;
   
   while(str[i]!='\0'){
        length++;
        i++;

   }
   int vowelCount = 0;
   int consonantCount = 0;
   

   for(int i=0;i<length;i++){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        vowelCount++;
       }
       else{
        consonantCount++;
       }

   }

   cout<<"The number of vowels are : "<<vowelCount<<" and the number of consonants are : "<<consonantCount;



    return 0;
}
