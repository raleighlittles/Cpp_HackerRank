#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    string N_string;
    getline(cin, N_string);
    N = stoi(N_string);
    vector<int> my_vector;
    for (int i = 0; i < N; i++)
    {
        int j;
        cin >> j;
        my_vector.push_back(j);
    }
    
    sort(my_vector.begin(), my_vector.end());
    for (auto x = my_vector.begin(); x != my_vector.end(); x++)
    {
        cout << *x << " ";
    }
}

