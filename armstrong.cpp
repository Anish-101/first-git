#include<iostream>
using namespace std;
int Palindrome(int n){
    int ans=0;
//    some comment added in code
    while(n!=0){
        int digit = n%10;
        ans = ans + digit*digit*digit;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int pal = Palindrome(n);
    cout<<pal<<" ";
    if(pal==n){
        cout<<"is a palindrome number";

    }
    else{
        cout<<"is not a palindrome number";
    }
}