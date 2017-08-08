#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student{
/*
Enter code for class Student here.
Read statement for specification.
*/
    public:
    int get_age()
    {
        return this->age;
    }
    
    void set_age(int age)
    {
        this->age = age;
    }
    
    string get_first_name()
    {
        return this->first_name;
    }
    
    void set_first_name(string first_name)
    {
        this->first_name = first_name;
    }
    
    string get_last_name()
    {
        return this->last_name;
    }
    
    void set_last_name(string last_name)
    {
        this->last_name = last_name;
    }
    
    int get_standard()
    {
        return this->standard;
    }
    
    void set_standard(int standard)
    {
        this->standard = standard;
    }
    
     string to_string()
    {
        string fulldata;
         fulldata = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
         return fulldata;
    }
    
    private:
    int age;
    string first_name;
    string last_name;
    int standard;
    
    
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
