
#include <iostream>
#include <cstdlib>
using namespace std;

class Zero
{
    public:
    
    Zero()
    {
        cout << "Class Zero CTOR Invoked!\n";
    }
};

void ZeroCheck(int num);

int main()
{
    try
    {
        for (int i = 2;i--;)
        {
            ZeroCheck(i);
            
            cout << "Reciprical: " << 1.0/i << endl;
        }
    }
    catch(Zero &obj)
    {
        cerr << "Divide by zero Error!\n";
        
        exit(EXIT_FAILURE);
    }

    return 0;
}

void ZeroCheck(int num)
{
    if (num == 0)
    {
        throw Zero(); //throws a a zero of class type
    }
}
