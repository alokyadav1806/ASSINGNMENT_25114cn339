#include<iostream>
using namespace std;
int sumofdigit(int n){
    if(n==0) 
    return 0;
    else 
    return(n%10)+sumofdigit(n/10);
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The sum of digit of "<<n<<" is "<<sumofdigit(n);
}
