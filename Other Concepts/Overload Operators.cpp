//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator+(Complex complex1, Complex complex2)
{
   Complex sum;
   sum.a = complex1.a + complex2.a;
   sum.b = complex1.b + complex2.b;
   return sum;
    
}

ostream& operator<<(ostream& outstream, Complex complex_num)
{
    outstream << complex_num.a << "+" << "i" << complex_num.b << endl;
    return outstream;
}