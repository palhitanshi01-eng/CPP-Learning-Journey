#include<iostream>
using namespace std;
int main()      /* "binary to decimal" */
/*{
    int n,ans=0,mul=1,num;      
    cout<<"enter num :";
    cin>>num;
    for(;num>0;num/=10)
    {
        n=num%10;
        ans=ans+n*mul;
        mul=mul*2;

    }
    cout<<ans;
} */



 /* "binary to decimal" */ 

/*{
    int rem,ans=0,mul=1,num;
    cout<<"enter num :";
    cin>>num;
    for(;num>0;num/=2)
{
    rem=num%2;
    ans=rem*mul+ans;
    mul=mul*10;
}
cout<<ans;
}*/



 /* "oct to decimal" */

/*
{
int rem,mul=1,ans=0,num;
cout<<"enter num :";
    cin>>num;
    for(;num>0;num/=10)
    {
        rem=num%10;
        ans=rem*mul+ans;
        mul=mul*8;

    }
    cout<<ans;
}*/


 /* "binary to " */

{
    int n,ans=0,mul=1,num,rem,ans2=0;
    cout<<"enter num :";
    cin>>num;
    for(;num>0;num/=10)
    {
        n=num%10;
        ans=ans+n*mul;
        mul=mul*2;

    }
   
mul=1;
    for(;ans>0;ans/=8)
    {
        rem=ans%8;
        ans2=rem*mul+ans2;
        mul=mul*10;

    }
    cout<<ans2;
    }

