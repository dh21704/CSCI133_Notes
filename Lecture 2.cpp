/******************************************************************************

class notes from Lecture 2 Part 2: C++ Review Program #1

*******************************************************************************/
#include <iostream>
#include <cstring>

class CAthlete{
    
    private:
    char *m_fname;
    int *m_age;
    char *m_lname;
    
    public:
    //constructor
    CAthlete();
    CAthlete(const char *fname, const char *lname, int age = 23);
    
    //copy constructor
    CAthlete(const CAthlete &object);
    
    //destructor
    ~CAthlete();
    
    //public accessor method/functions
    void SetFirstName(const char *fname);
    void SetLastName(const char *lname);
    void SetAge(const int age);
    
    //const because it treats it as a constant in the function
    const char* GetFirstName() const {return m_fname;}
    const char* GetLastName() const {return m_lname;}
    int* GetAge() const {return m_age;}
    
    //overloaded operators
    bool operator == (const CAthlete &rhs);
    CAthlete& operator=(const CAthlete &rhs);
    
    
};

//overloaded stream operators

//outputting
std::ostream operator<<(std::ostream &outStream, const CAthlete &object);

//reading in
std::istream operator>>(std::istream &inStream, CAthlete &object);

CAthlete::CAthlete()
{
    std::cout << "Default CTOR";
    
    m_fname = nullptr;
    m_lname = nullptr;
    m_age = 0;
}

CAthlete::CAthlete(const char*fname, const char* lname, int age)
{
    std::cout << "Type Contructor";
    
    //allocate space for m_fname and m_lname
    m_fname = new char[strlen(fname) + 1];
    m_lname = new char[strlen(lname) + 1];
    
    //copy names 
    strcpy(m_fname, fname);
    strcpy(m_lname, lname);
    
    //set age
    *m_age = age;
    
    
}

CAthlete::CAthlete(const CAthlete &object)
{
    std::cout << "Copy Constructor";
    
    //allocate space
    m_fname = new char[strlen(object.m_fname) + 1];
    m_lname = new char[strlen(object.m_lname) + 1];
    
    //copy names
    strcpy(m_fname, object.m_fname);
    strcpy(m_lname, object.m_lname);
    
    //set age
    m_age = object.m_age;
}

CAthlete::~CAthlete()
{
    std::cout << "DTOR\n";
    
    delete [] m_fname;
    delete [] m_lname;
}

void CAthlete::SetFirstName(const char* firstname)
{
    //release the current names
    
    delete []m_fname;
    
    //allocate memory from the heap
    m_fname = new char[strlen(firstname) + 1];
    
    
    //copy names
    strcpy(m_fname, firstname);
    
}

void CAthlete::SetLastName(const char* lastname)
{
    //release the current names
    
    delete []m_lname;
    
    //allocate memory from the heap
    m_lname = new char[strlen(lastname) + 1];
    
    
    //copy names
    strcpy(m_lname, lastname);
    
}

void CAthlete::SetAge(int age)
{
    //if age is less than 0
    if (age < 0)
    {
        *m_age = 0;
    }
    else{
        *m_age = age;
    }
    
    
    
}


#include <iostream>

int main()
{
    std::cout<<"Hello World";

    return 0;
}
