#include <iostream>
#include <cassert>
using namespace std;

void divide(int a, int b)
{
    assert(b != 0 && "Division by zero error!");
    
    int result = a/b;
    
    cout << "Result: " << result << endl;
}

int main()
{
    int x = 10, y = 2;
    
    cout << "Trying to divide " << x << " by " << y << endl;
    divide(x, y);
    
    //invalid division y is 0 
    
    y = 0;
    
    cout << "Trying to divide " << x << " by " << y << "..." << endl;
    
    divide(x, y); //this will trigger an assertion failure
    
    cout << "\nHello World!";
    
    
    return 0;
}
