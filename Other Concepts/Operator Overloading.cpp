class Matrix 
{
  
    public:
    
    vector<vector<int>> a;
    
    
    
    
};

Matrix operator+(Matrix matrix1, Matrix matrix2)
{
    Matrix result;
    int num;
    for (int i = 0; i < matrix1.a.size(); i++)
    {
        vector<int> new_row;
        num = 0;
        for (int j =0; j < matrix1.a[0].size(); j++)
        {
            num = matrix1.a[i][j] + matrix2.a[i][j];
            new_row.push_back(num);
        }
        result.a.push_back(new_row);
    }
    
    return result;

}