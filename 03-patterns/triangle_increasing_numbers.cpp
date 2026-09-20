#include<iostream>
using namespace std;
int main()

/*
{
    int row,column,i ;
    for(row=1;row<=5;row++)
    {
      for(i=1;i<=row;i++){
        cout<<"*";
      }
      cout<<endl;
    }

}*/

/* gives:

*
**
***
****
***** 

*/


{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
}
