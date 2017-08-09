#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
	int queries, type;
    cin >> queries;
    map<string,int> clas; 
    string name;
    int mark;
	for (int i = 0; i < queries; ++i)
	{
		cin >> type >> name;
		if (type == 1)
        {
			cin >> mark;
			clas[name] += mark;
		}
        
		else if (type == 2)
        {
			clas.erase(name);
        }
        
		else if (type == 3)
        {
			cout << clas[name] << "\n";
        }
        
	}
	return 0;
    
}
