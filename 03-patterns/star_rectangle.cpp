#include<iostream>
using namespace std;
int main()
{
    int i,n,m,j;
    cout<<"enter number of rows :";
    cin>>m;
    cout<<"enter number of columns :";      /* NESTED LOOP */
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
        cout<<"*"<<" ";
        }
        cout<<endl;
    }
}