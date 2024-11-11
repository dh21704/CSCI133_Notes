#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

void sqrt_function(double a)
{
    if (a < 0)
    {
        throw -9999;
    }
    
    cout << "\n: " << sqrt(a);
        
    
}

int main()
{
    double num;
    cout << "\nEnter a num to square: ";
    cin>> num;
    
    try
    {
        sqrt_function(num);
    }
    catch(int x)
    {
        cout << x << " Error Was Caught: cannot square by negative number";
    }
    
    return 0;
}
