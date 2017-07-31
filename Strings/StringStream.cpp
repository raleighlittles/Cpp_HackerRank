#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    std::vector<int> my_vector;
   stringstream ss(str);
    int i;
    
    while(ss >> i)
    {
        my_vector.push_back(i);
        
        if (ss.peek() == ',')
            ss.ignore();
    }
    
    return my_vector;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
