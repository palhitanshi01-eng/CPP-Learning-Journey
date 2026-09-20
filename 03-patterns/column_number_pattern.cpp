/*for
1234
1234
1234
1234
1234
*/
#include<iostream>
using namespace std;     /* as changes occure in every row, therefore outer loop is row*/
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=4;col++)
        {
            cout<<col ;
        }
        cout<<endl;
    }
}
