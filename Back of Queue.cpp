#include <iostream>
#include <queue>
using namespace std;

template <typename T>
T backOfQueue(queue<T> og)
{
    T back;
    queue<T> duplicate = og;
    
    while(!duplicate.empty())
    {
        back = duplicate.front();
        duplicate.pop();
    }
    
    return back;
}

int main()
{
    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout << "Back of Queue: " << backOfQueue(q);
    
    return 0;
}
