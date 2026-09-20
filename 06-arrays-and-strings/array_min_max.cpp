#include<iostream>
using namespace std;
int main()
{
    int a[4]={1,2,3,4};
    int i;
    {
    int ans=INT_MAX;
    for(i=0;i<4;i++)
    {
    if(a[i]<ans)
    ans=a[i];
    } 
    cout<<ans<<endl;
}
    int ans=INT_MIN;    /*for min ofc compare with INT_MIN*/
    for(i=0;i<4;i++)
    {
        if(a[i]>ans)
        ans=a[i];
    }
    cout<<ans;  
}