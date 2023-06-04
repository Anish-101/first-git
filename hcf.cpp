#include<iostream>
using namespace std;

int Hcf(int n, int m){
    int hcf=0;
   for(int i=1; i<=n && i<=m; i++){
     if(n%i==0 && m%i==0){
        hcf=i;
     }
   }
   return hcf;
}
int main(){
    int n,m;
    cout<<"enter two numbers: ";
    cin>>n>>m;
    int ans = Hcf(n,m);
    cout<<ans;
}