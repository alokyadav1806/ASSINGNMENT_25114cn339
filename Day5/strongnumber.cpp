#include<iostream>
using namespace std;
int main(){
    int n,fact=1,digit,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    int n1=n;
    while(n>0){
        digit=n%10;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
            n=n/10;
          fact=1;
         }
    if(sum==n1){
    cout<<n1<<" is Strong number";
 }
    else
    cout<<n1<<" is Not a strong number";
}