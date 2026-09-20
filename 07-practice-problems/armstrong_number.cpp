#include<iostream>
using namespace std;
int countdigit(int num)
{ 
    int count=0;
    while(num){
    count++;
    num/=10;}
    return count;
    
}
bool armstrong(int num,int digit)
{
int rem,ans=0;
int n=num;
while(n)
{
rem=n%10;
n/=10;
ans=ans+pow(rem,digit);
}
if(ans==num)
{
    return 1;
}
else{
    return 0;
}
}
int main()
{
    int num;
    cin>>num;
    int digit=countdigit(num);
    cout<<armstrong(num,digit);
}