#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() //sorry for the poor indentation
{
set<int>s; 
int choice,x,y,val,n;   
cin >> n;
    
for(int i=0;i<n;i++)
   { 
    cin>>choice;
          if(choice==1)
             {
              cin >> x; 
              s.insert(x);
          }
          else if(choice==2)
             {
              cin >> y;
              s.erase(y);
          }
          else if(choice==3)
             {
              cin >> val;
              set<int>::iterator itr = s.find(val);
                   if(itr == s.end()) // meaning not found
                   {
                      cout<<"No"<<endl;
                   }
                   else 
                   {
                      cout<<"Yes"<<endl;
                   }
             }    
    }

}
    
    


