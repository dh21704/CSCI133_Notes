
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    std::stack<int> myStack;
    
    myStack.push(10);
    myStack.push(20);
    
    cout << "the top: " << myStack.top() << endl;
    
    myStack.pop();
    
    if(myStack.empty() == false)
    {
        cout << "the size: " << myStack.size() << endl;
    }

    return 0;
}
