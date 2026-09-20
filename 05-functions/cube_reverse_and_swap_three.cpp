#include<iostream>
using namespace std;
/*
int cube(int n)
{int ans;
    ans=n*n*n;
    return ans;
}
int main()
{
int a;
cin>>a;
cout<<cube(a);
} */

/*
int reverse(int n)
{int ans=0;
    int sign =1;
    if(n<0)
    {
        n=-n;
        sign=-1;
    }
    while (n>0)
    {int rem=n%10;
     n=n/10;
    
     ans=ans*10 + rem;
 
    }
    return ans*sign;
}
int main()
{
    int num;
    cin>>num;
    cout<<reverse(num);
} 
*/


void Swap(int &x,int &y,int &z)
{
    int temp;
    temp=x;
    x=z;
    z=y;
    y=temp;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    Swap(a,b,c);
    cout<<a<<b<<c;
}
