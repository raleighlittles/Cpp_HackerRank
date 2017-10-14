#include <iostream>
#include <deque> 
#include <vector>
#include<algorithm>
//using namespace std;


int main()
{
  
   int T;
   scanf("%d", &T);
   for (int t=0; t < T; t++)
   {
      int n, k;
       std::cin >> n >> k;
       std::deque<int> arr;  
       for( int j=0; j<n; j++)
       {
           int x; 
           scanf("%d", &x);
           arr.push_back(x);

       }
        int first_max = *max_element(arr.begin(), arr.begin()+k); 
        int max = (int)first_max; 
        int y = arr[0];           
        std::cout << max;
        arr.pop_front();       
        int i=0;
        while( i < n-k)
        {         
            if (y != max)
            {     
                if (arr[k-1] > max)
                { 
                   printf("%d ", arr[k-1]); 
                    max = (int)arr[k-1]; 
                }
                else
                {
                    printf("%d ", max); 
                }                       
            
            }
            else 
            {  
                   int maxss = *max_element(arr.begin(), arr.begin()+k); 
                   max = (int)maxss;    
                   printf("%d ", max);  
                    }
           y = arr[0];   
           arr.pop_front();
           i++;

             }
    

       std::cout << std::endl;
    
   }
     return 0;
}