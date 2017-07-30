int profNum = 0;
int stuNum = 0;

class Person {
    public:
    int age;
    char name[100];
   // global int stuNum = 0;
    //int profNum = 0;
    virtual void getdata()
    {
        cin >> name;
        cin >> age;
    }
    
    virtual void putdata()
    {
        cout << name << " ";
        cout << age << endl;
        
    }
  
    
    
};


class Professor : public Person {
    public:
    int publications;
   
    
    void getdata()
    {
        cin >> name;
        cin >> age;
        cin >> publications;
    }
    
    void putdata()
    {
        cout << name << " ";
        cout << age << " ";
        cout << publications << " ";
        profNum++;
        cout << profNum << endl;
    }

};


class Student : public Person {
    public:
    int marks[6];
    int cur_id;
    int marksSum;
    
    
    void getdata()
    {
        cin >> name;
        cin >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
            marksSum += marks[i];
        }
        
    }
    
    void putdata()
    {
        cout << name << " ";
        cout << age << " ";
        cout << marksSum << " ";
        stuNum++;
        cout << stuNum << endl;
    }
    
    
    
    
};

