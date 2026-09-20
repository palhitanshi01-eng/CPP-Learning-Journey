#include<iostream>
using namespace std;
int main()
{
    int row,i;
    for(row=1;row<=10;row++)
    {
        for(i=0;i<row;i++)
        {
        cout<<row-i;
        }
        cout<<endl;

    }
}