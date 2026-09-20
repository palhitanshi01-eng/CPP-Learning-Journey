#include<iostream>
using namespace std;
int main()
{  int i,z,num;
cout<<"enter num";
cin>>z;
    for(i=1;i<100;i++)
{
      if(i*i==z)
      {
    cout<<i;
    break;
      }
    if(i*i>z)
    {
    cout<<(i-1);
    break;
    }
}

}