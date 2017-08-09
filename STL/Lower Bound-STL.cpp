#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n, values, queries;
    
    vector<int> my_vector;
    
    cin >> n;
    for(int i=0; i < n; i++)
    {
        // Read in values and put them in the vector
        cin >> values;
        my_vector.push_back(values);
    }
    
    cin >> queries;
    for(int i=0; i < queries; i++)
    {
        cin >> values;

        auto result = lower_bound(my_vector.begin(), my_vector.end(), values);

        if (values == *result)
        {
            cout << "Yes ";
        }
        else
        {
            cout << "No ";
        }
        // account for vector indexing with the +1 term
        cout << result - my_vector.begin() +1  << endl; 
    }
    
    return 0;
}