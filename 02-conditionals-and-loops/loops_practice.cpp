#include<iostream>
using namespace std;
int main()
{
    //int i;
    //for(i=101;i<=200;i++)
    //{
      //  cout<<i<<endl;
    //}

    /*for a to z*/
    //char name= 'a';
    
    //for(name='a';name<='z';name=name+1)
    //{
      //  cout<<name<<"  ";
    //}

    /*from 10 to 1*/

    //int i;
   // for(i=10;i>=1;i--)
    //{
      //  cout<<i<<" ";
    //}
    

    /*table of 6*/
    //int j,n;
    //cout<<"enter the table :";
    //cin>>n;
    //for(j=1;j<=10;j++)
    //{
    //    cout<<n<<" * "<<j<< " = "<<n*j<<endl;
    //}

    /* power multiply*/

    //int i,n,pow,num;
    //cout<<"enter power :";
    //cin>>pow;
    //cout<<"enter number :";
    //cin>>n;
    //num=n;
    
    //for(i=1;i<pow;i++)
   // {
    //  n=n*num;
       
    //}
 
//cout<<n;

/*sum of n natural number*/
//int sum,i,n;
//cout<<"enter number till which sum is required :";
//cin>>n;
 //sum=0;
//for(i=0;i<=n;i++)
//{
 //   sum=sum+i;
//}
//cout<<sum;

/*OR*/

//int n;
//float sum;

//cout<<"enter till which number sum is reqired :";
//cin>>n;
//sum=(n*(n+1))/2;
//cout<<sum;

/*factorial of n numeber*/
//int i,num;
//long int fact=1;
//cout<<"enter number of which fact is req :";
//cin>>num;

//for(i=1;i<=num;i++)

//{
//    fact=i*fact;
//}
//cout<<"factorial is "<<fact;

//int i,n;
//cout<<"enter number :";
//cin>>n;
//for(i=2;i<=(n-1);i++)
// {
//   if(n%i==0)
// {
//    cout<<"not prime";
//     return 0;
//  }
// else(n%i!=0)
// {
//   cout<<"prime";
//   return 0;
//  }

/*OR*/

//int n,i;
//out<<"enter number :";
//cin>>n;
//if(n<2)
//{
//    cout<<"not prime";
//    return 0;
//}
//else
//{
//for(i=2;i<n;i++)
//{
//   if(n%i==0)
// {
//    cout<<"not prime";
//     return 0;                    /*important to put return 0; to break the cycle when the result is obtained and to avois unwanted ans*/
//   }
//}
//cout<<"prime";
//return 0;
//}

/* ! FIBONACCI SERIES ! */

int a=0,b=1,c=0,n,i;

cout<<"fibonacci till what place :";
cin>>n;
   /* declared before later c outputs */
for(i=1;i<=n;i++)
{
    cout<<c<<endl;
 a=b;             /* swaped after print of c */
 b=c;
 c=a+b;
}
return 0;
}




