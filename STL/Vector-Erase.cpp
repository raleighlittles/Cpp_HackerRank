#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


    int main() {
    int n;
    int ctr = 0;
    cin >> n;
    vector<int> v;
    int x;
    for(int i = 0; i < n; i++)
        {
        cin >> x;
        v.push_back(x);
    }
    int p,a,b;
    cin >> p;
    v.erase(v.begin()+p-1);
    cin >> a >> b;
    v.erase(v.begin()+a-1, v.begin()+b-1);
    cout << v.size() << endl;
    for(auto it = v.begin(); it != v.end(); it++)
        {
        cout << *it << " ";
    }
    return 0;
}
    
