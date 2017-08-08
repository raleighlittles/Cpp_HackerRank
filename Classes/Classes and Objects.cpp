// Write your Student class here

class Student {
    
    public:
    
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
            sum += scores[i];
        }
        
    }
    
    int calculateTotalScore()
    {
        return sum;
    }
    
  
    int scores[5];
    int sum;
    
    
};