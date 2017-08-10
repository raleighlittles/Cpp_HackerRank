
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle
{
   public:
    
    void display()
    {
        cout << width << " " << height << endl;
        
    }
    
    
    int width;
    int height;
    
   
} ;


class RectangleArea: public Rectangle
{

    public:
    
    void read_input()
    {
        cin >> width;
        cin >> height;
    
    }
    
    void display()
    {
        int area;
        area = width * height;
        cout << area;
    
    }

};
