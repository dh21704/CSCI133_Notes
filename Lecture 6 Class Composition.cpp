
#include <iostream>
using namespace std;

class CStomach
{
    private:
    int m_gas;
    
    public:
    CStomach(int gas) {m_gas = gas;}
    ~CStomach() {cout << "Fart\n\n";}
    void Eat() {++m_gas;}
    
};

class CBrain
{
    
    private:
    int m_IQ;
    
    public:
    CBrain(int IQ) {m_IQ = IQ;}
    ~CBrain() {cout << "Wahhh\n\n";}
    void Think() {m_IQ += 10; }
};

class CBaby
{
    private:
    CStomach m_belly;
    CBrain m_brain;
    
    public:
    CBaby() 
    : m_belly(13), m_brain(130) //initialize list 
    //call m_brain default CTOR 
    {
        
        m_belly.Eat();
        m_brain.Think();
    }
};

int main()
{
    CBaby jackJack;
    

    return 0;
}
