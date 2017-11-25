//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshops 
{
    int start_time;
    int duration;
    int end_time; 
};

struct Available_Workshops 
{
    int n;
    vector <Workshops> workshops_vector;
};

Available_Workshops *initialize(int *start_time, int *duration, int n) {
    Available_Workshops *paw =new(Available_Workshops);
    Workshops workshops;
    
    paw->n = n;
    for (int i = 0; i < n; i++) 
    {
        //construct a Workshops
        workshops.start_time = start_time[i];
        workshops.duration = duration[i];
        workshops.end_time = start_time[i] + duration[i]; 
        paw-> workshops_vector.push_back(workshops);   
    }
        
    return paw;    
}

bool compare(Workshops w1, Workshops w2) 
{ 
    return (w1.end_time < w2.end_time); 
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    // sort workshops by end_time
    sort(ptr->workshops_vector.begin(), ptr->workshops_vector.end(), compare); 
    
    // interval scheduling
    int last_processed_time = -1;
    int maxWorkshops = 0;
    for (int i = 0; i < ptr->n; i++) 
    {
        if (ptr->workshops_vector[i].start_time >= last_processed_time)
        {
            last_processed_time = ptr->workshops_vector[i].end_time;
            maxWorkshops++;
        }
    }

    return maxWorkshops;
}