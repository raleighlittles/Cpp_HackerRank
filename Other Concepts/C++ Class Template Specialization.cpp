/*
  Define two structs: one for color, one for fruit
  Use an implicit parameter for the template parameter since it'll be provided
*/
template <>
struct Traits<Color>
{
    // static since you don't know which type will be calling name
    string static name(int color)
    {
        if (color == 0)
        {
            return "red";
        }
        
        else if (color == 1)
        {
            return "green";
        }
        
        else if (color == 2)
        {
            return "orange";
        }
        
        else
        {
            return "unknown";
        }
    }
    
};

template<>
struct Traits<Fruit>
{
    string static name(int type)
    {
       if (type == 0)
       {
            return "apple";
       }
       
       else if (type == 1)
       {
         return "orange";
       }
       
       else if (type == 2)
       {
        return "pear";
       }
       
       else
       {
         return "unknown";
       }
    }
};