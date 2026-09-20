#include<iostream>
using namespace std;
int main()
{string s="thequickbrownfoxjumpsoverthelazydog";
   
    char name;
    for(int i=0;i<=25;i++)
    {  name='a'+i;
        bool found = false;
   for(int index=0;index<=s.size()-1;index++)
       {
        if(name==s[index])
        { 
          found = true;   
        break;
       } 
    }
       if(found == false)
    {
    cout << "Not Pangram";
    return 0;
  }
}
  {
    cout<<"Pangram";
  }
     }
   
   


  
