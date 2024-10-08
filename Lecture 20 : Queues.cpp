
#include <iostream>
#include <queue>

//tracking calls in call centers
//FIFO
//enqueue items at the rear
// dequeue from the front

//enqueue inserts item on the rear of the queue 
// dequeue removes and returns the top item from the front of the queue 
//IsEmpty() determines if the queue is empty 
//size() determines the number of items in the queue 
// getFront gives the value of the top item on the queue without removing it like dequeue 
//cost of computational time O(N)
using namespace std;

int main()
{
    std::cout<<"Hello World";
    
    queue<int> q;
    
    q.push(10);
    q.push(209);
    
    cout << endl << q.front() << endl;
    
    q.pop();
    
    if (q.empty() == false)
    {
        cout << q.size() << endl;
    }

    return 0;
}
