#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    cout << "Queue after enqueue operations\n";
    
    queue<int> q_copy = q;
    
    while(!q_copy.empty())
    {
        cout << q_copy.front() << " ";
        q_copy.pop();
    }
    
    cout << endl;
    
    cout << "Dequeing elements\n";
    
    while(!q.empty())
    {
        cout << "Front elements: " << q.front() << endl;
        q.pop();
    }
    
    cout << "\nBack element: " << q.back() << endl;
    cout << "\nSize of elements: " << q.size() << endl;
    
    
    return 0;
}
