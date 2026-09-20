#include<iostream>
using namespace std;
int main()
{
    int n,rem,ans=0,mul=1;
    cout<<"enter n :";
    cin>>n;
    while(n>0)
    {
        rem=n%2;
        n/=2;
        ans+=rem*mul;
        mul*=10;
         
        
    }
    cout<<ans;

}

