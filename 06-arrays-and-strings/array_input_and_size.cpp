#include<iostream>
using namespace std;
int main()
{
int size;
cin>>size;
int a[size];
int i;
for(i=0;i<size;i++)
cin>>a[i];

for(i=0;i<size;i++)
cout<<a[i]<<" ";
cout<<sizeof(a)/sizeof(a[0]);    /*for finding no if elements divide size of whole array 
                                  by the size of one element*/
}