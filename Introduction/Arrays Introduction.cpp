#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <sstream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    vector<string> data;
    for (int i = 0; i < num; i++)
        {
        string s;
        cin >> s;
        data.push_back(s);
    }
    
    for (vector<string>::reverse_iterator j = data.rbegin(); j != data.rend(); ++j)
        {
        cout << *j << " ";
    }
    

}