#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string number(int input)
{
    switch (input)
    {
        case 1:
            return "one\n";
            break;
            
        case 2:
            return "two\n";
            break;
            
        case 3:
            return "three\n";
            break;
            
        case 4:
            return "four\n";
            break;
            
        case 5:
            return "five\n";
            break;
            
        case 6:
            return "six\n";
            break;
            
        case 7:
            return "seven\n";
            break;
            
        case 8:
            return "eight\n";
            break;
            
        case 9:
            return "nine\n";
            break;
            
        default:
            return "none";   
         
    }
}

int main() {
    
    int start, end;
    string input1, input2;
    cin >> input1;
    cin >> input2;
   
    start = stoi(input1);
    end = stoi(input2);
    
    for (int i = start; i != end + 1; i++)
    {
        if (i < 10)
        {
        cout << number(i);
            
        }
        
        else 
        {
            if (i % 2 == 0)
            {
                cout << "even\n";
            }
            
            else
            {
                cout << "odd\n";
            }
        }
    }
        
    
    
}
