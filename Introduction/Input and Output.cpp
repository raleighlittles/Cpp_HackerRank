#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    getline(cin, input);
    vector <int> digits;
    std::istringstream iss(input);
    int temp;
    while (iss >> temp)
        {
        digits.push_back(temp);
    }

    int sum;
    for (int n : digits)
        sum += n;
    
    cout << sum;
}
