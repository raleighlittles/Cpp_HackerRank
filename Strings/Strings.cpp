#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
  
    string input1;
    string input2;
    
    string input3;
    string input4;
    
    getline(cin, input1);
    getline(cin, input2);
  
    
    cout << input1.size() << " " << input2.size() << endl;
    cout << input1 + input2 << endl;
    input3 = input2[0];
    // iterate over remaining length of string 'input1' and concatenate it with input3
    for (int i = 1; i < input1.size(); i++)
    {
        input3 += input1[i];
    }
    
    input4 = input1[0];
    for (int i = 1; i < input2.size(); i++)
    {
        input4 += input2[i];
    }
    
    cout << input3 << " " << input4;
    
    
    
    return 0;
}
