#include<iostream>
using namespace std;
int main()
{
int num,rem,mul=1,ans=0,ans2=0,ans3=0,mul2=1,mul3=1;
cout<<"enter number :";
cin>>num;
while(num>0)
{
rem=num%2;
num=num/2;
ans=rem*mul+ans;
mul=mul*2;
}
num=ans;
ans2=0;
while(num>0)
{
    rem=num%10;
    num=num/10;
    if(rem==0)
    {
        rem=1;
    }
    else
    {
    rem=0;
    }
    ans2=rem*mul2 +ans2;
    mul2=mul2*10;
    
}
num=ans2;
ans3=0;
while(num>0)
{
    rem=num%10;
    num=num/10;
    ans3=rem*mul3+ans3;
    mul3=mul3*2;
}
cout<<ans3;
}

