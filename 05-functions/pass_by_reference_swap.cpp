#include<iostream>
using namespace std;
/*
void Swap(int &x,int &y)
{                       // pass by reference
int c;
c=x;
x=y;
y=c;
}
void Swap( float &p,float &q)         //function overloading 
{
    float r;
    r=p;
    p=q;
    q=r;
} */                   // as swap is in buily ,we dont need this all
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
     float p=4.5 ,q=6.7;
    swap(p,q);
    cout<<p<<" "<<q;
}

