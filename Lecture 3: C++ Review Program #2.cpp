/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

class CAthlete{
    
    private: 
    string m_fname;
    string m_lname;
    int m_age;
    
    public:
    CAthlete();
    //CAthlete( char *fname,  char *lname, int age); 
    CAthlete(const char *fname,const char *lname, int age);

    CAthlete(const CAthlete &object);
    
    void SetFirstName(const char *fname) { m_fname = fname; }
    void SetLastName(const char *lname) { m_lname = lname; }
    void SetFirstName(std::string fname) { m_fname = fname; }
    void SetLastName(std::string lname) { m_lname = lname; }
    void SetAge(int age) {m_age = age;}
    
    std::string GetFirstName() const { return m_fname; }
    std::string GetLastName() const { return m_lname; }
    int GetAge() const { return m_age; }
    
    bool operator==(const CAthlete &rhs);
    CAthlete& operator=(const CAthlete&rhs);
    
};

//overloaded stream operators
std::ostream& operator<<(std::ostream &outStream, const CAthlete &object);
std::istream& operator>>(std::istream &inStream, CAthlete &object);



CAthlete::CAthlete()
{
    m_fname = " ";
    m_lname = " ";
    m_age = 0;
}

//type constructor
CAthlete::CAthlete(const char *fname,const char *lname, int age)
{
    SetFirstName(fname);
    SetLastName(lname);
    SetAge(age);
}

//copy constructor
CAthlete::CAthlete(const CAthlete &obj)
{
    m_fname = obj.m_fname;
    m_lname = obj.m_lname;
    m_age = obj.m_age;
}

bool CAthlete::operator==(const CAthlete &rhs)
{
    if (m_fname == rhs.m_fname
    && m_lname == rhs.m_lname
    && m_age == rhs.m_age)
    {
        return true;
    }
    else
    {
        return false;
    }
}

CAthlete& CAthlete::operator=(const CAthlete &rhs)
{
    SetFirstName(rhs.m_fname);
    SetLastName(rhs.m_lname);
    SetAge(rhs.m_age);
    
    return *this;
}

ostream& operator<<(std::ostream &outStream, const CAthlete &object)
{
    outStream << object.GetFirstName() << std::endl;;
    outStream << object.GetLastName() << std::endl;
    outStream << object.GetAge() << std::endl;
    
    return outStream;
}

int main()
{
    CAthlete athlete1;
    CAthlete athlete2("Gregory", "Dimitrov", 90);
    CAthlete athlete3(athlete2);
    
    cout << athlete1 << endl
    << athlete2 << endl
    << athlete3 << endl;

    return 0;
}
