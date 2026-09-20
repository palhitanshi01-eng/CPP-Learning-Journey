 /* for
 1111
 2222
 3333*/
 #include<iostream>
using namespace std;
int main()
{
     cout << "Program Started\n";
int i,j,m,n;
cout<<"enter number of rows :";
    cin>>n;
    cout<<"enter number of columns :";     
    cin>>m;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<i;
            
        }
        cout<<endl;

    }
    
    
}

// OR

/*#include <iostream>
using namespace std;

int main()
{
    int row, col;

    for (row = 1; row <= 5; row = row + 1)
    {
        for (col = 1; col <= 5; col = col + 1)
        {
            cout << row << " ";
        }

        cout << endl;
    }

    return 0;
}*/


