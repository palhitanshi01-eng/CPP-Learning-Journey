/*for
54321
54321
54321
54321
*/

/*
#include<iostream>
using namespace std;
int main()
{
int row,col;
for(row=1;row<=4;row++)
{
    
 for(col=5;col>=1;col--)
   {
   cout<<col; 
   }
   cout<<endl;
    
}

} */


/*for
 1  4  9  16  25 
 1  4  9  16  25 
 1  4  9  16  25 
 1  4  9  16  25
 */

/*#include<iostream>
using namespace std;
int main()
{
int row,col;
for(row=1;row<=4;row++)
{
    
 for(col=1;col<=5;col++)
   {
   cout<<" "<<col*col<<" "; 
   }
   cout<<endl;
    
}
}*/

/*
for
aaaaa
bbbbb
ccccc
ddddd
eeeee
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        char name = 'a' + row-1;
        for(col=1;col<=5;col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}*/

    /* for 
    abcde
    abcde
    abcde
    abcde
    abcde  */

 /* #include<iostream>
using namespace std;
int main()
{
    int row,col,name;
    for(row=1;row<=5;row++)
    {
        
        for(col=1;col<=5;col++)
        {
            char name = 'a'+ col-1;
            cout<<name<<" ";
        }
           cout<<endl;
    }

} */


/*OR*/

 /*#include<iostream>
using namespace std;
int main()
{
    int row;
    char col;
    for(row=1;row<=5;row++)
{
    for(col='a';col<='e';col++)
{
    cout<<col<<" ";
}

cout<<endl;

}
}*/

/*for
12345
678910
1112131415
1617181920
2121232425
*/

#include<iostream>
using namespace std;
int main()
{
    int row,col,z;
    for(row=1;row<=5;row++)
    {
        
        for(col=1;col<=5;col++)
        {
            z=(row-1)*5 + col;
            cout<<" "<<z<<" ";
        }
        cout<<endl;
    }
}








