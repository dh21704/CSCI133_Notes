
#include <iostream>
#include <assert.h>
using namespace std;

const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    
    int *ptr = nullptr;
    
    //assign to var 
    ptr = var;
    
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        
        
        assert(ptr != nullptr);
        
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        
        ptr++;
    }
    

    return 0;
}
