#include<iostream>
using namespace std;
int main()
{
    int  n,ans=0,mul=1,num;
    cout<<"enter num :";
    cin>>num;
     
     
    while(num>0)       /* can also just be written while(num) */
{
    n=num%10;
    num/=10;
    ans+= n*mul;
    mul=mul*2;
 
}
cout<<ans;
}