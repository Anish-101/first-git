#include<iostream>
using namespace std; 

int main(){
    int ans=1, n;
    cout<<"enter the number for factorial: ";
    cin>>n;
    for(int i=1; i<=n; i++ ){
        if(n==0)
        cout<<"1";
        else
        ans = ans * i;
    }
    cout<<"factorial of "<<n<<" is "<<ans;
}