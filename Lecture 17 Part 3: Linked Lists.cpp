
#include <iostream>
#include <string>

using namespace std;

struct Node
{
    string value;
    Node *next;
};

class LinkedList
{
   public:
   LinkedList();
    ~LinkedList();
    void AddToFront(string v);
    void AddToRear(string v);
    void AddToMiddle(string v);
    void DeleteItem(string v);
    bool FindItem(string v);
    void PrintItems();
    
    private:
    Node *head;
};

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::PrintItems()
{
    Node *p = head;
    
    while (p != nullptr)
    {
        cout << p->value << endl;
        
        p = p->next;
    }
}

void LinkedList::AddToFront(string v)
{
    //create a new node
    Node *n = new Node;
    
    //add the value of v in the new node
    n->value = v;
    
    //have the new node point to the current first node
    n->next = head;
    
    //update the head pointer
    head = n;
}

void LinkedList::AddToRear(string v)
{
    if (head == nullptr)
    {
        AddToFront(v);
    }
    else
    {
        Node *p = head;
        
        while (p->next != nullptr)
        {
            p = p->next;
        }
        
        Node *n = new Node;
        
        n->value = v;
        
        p->next = n;
        
        n->next = nullptr;
        
    }
    
}

// void LinkedList::AddToMiddle(string v)
// {
//     Node *p = head;
    
//     while (p->next != nullptr)
//     {
//         //if (<boolean statement> )
//         // {
//         //     break;
//         // }
        
//         p = p->next;
//     }
    
//     //creat a new node
//     Node *n = new Node;
    
//     //add the value of v in the new node
//     n->value = v;
    
//     //have the new node point to p's next node
//     n->next = p->next;
    
//     //have the p's node point to the new node
//     p->next = n;
// }


// void LinkedList::AddItem(string newItem)
// {
//     if (head == nullptr)
//     {
//         AddToFront(newItem);
//     }
//     else if (//decide if the new item belongs at the top)
//     {
//         AddToFront();
//     }
//     else 
//     {
//         Node *p = head;
        
//         while (p->next != nullptr)
//         {
//             if (<boolean statemetns> )
//             {
//                 break;
//             }
            
//             p = p->next;
//         }
        
//         //create a new node
//         Node *n = new Node;
        
//         //add the value of newItem in the new node
//         n->value = newItem;
        
//         //have the new node point to p's next node
//         n->next = p->next; 
        
//         //have p's node point to new node 
//         p->next = n;
//     }
// }

void LinkedList::DeleteItem(string v)
{
    if (head == nullptr)
    {
        return;
    }
    
    if (head->value == v)
    {
        //create a pointer to poitn to the first node (will delete this one!)
        Node *targetNode = head;
        
        //update head pointer to point to the next node 
        head = head->next;
        
        //delete target node 
        delete targetNode;
        
        return;
    }
    
    
    //delete an interiror node or the last node 
    
    Node *p = head;
    
    
    
    //traverse until we reach last 
    while (p->next != nullptr)
    {
        if (p->next != nullptr
        && p->next->value == v)
        {
            break; //breakts at the point p points to the node before 
        }
        
        //update p to point to the next location
        p=p->next;
    }
    
    //check we found a value to remove from the LinkedList
    if (p != nullptr)
    {
        Node *targetNode = p->next;
        
        //set the previous node to point to the node after our targetNode
        p->next = targetNode->next;
        
        delete targetNode;
    }
}

bool LinkedList::FindItem(string v)
{
    Node *p = head;
    
    while (p->next != nullptr)
    {
        if (p->value == v)
        {
            return true;
        }
        
        p = p->next; //update pointer to point to the next location
    }
    
    return false;
}

LinkedList::~LinkedList()
{
    //create a pointer to traverse the linked list and start at the head pointer 
    Node *p = head;
    
    Node *n;
    
    while (p != nullptr)
    {
        //set n to point p's next node 
        n = p->next;
        
        //delete what p points to 
        delete p;
        
        //set p to point to the next node
        p = n;
    }
}



int main()
{
    std::cout<<"Hello World";

    return 0;
}
