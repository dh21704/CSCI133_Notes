
#include <iostream>
using namespace std;

struct Node
{
    Node* next;
    int data;
};

class CLinkedList
{
    private:
    
    Node* head;
    
    public:
    
    CLinkedList()
    {
        head = nullptr;
    }
    
    ~CLinkedList()
    {
        Node* current= head;
        
        Node* nextNode;
        
        while(current)
        {
            nextNode = current->next;
            
            delete current;
            
            current = nextNode;
        }
    }
    
    void display()
    {
        Node* p = head;
        
        while(p)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
        
        cout << "null\n";
    }
    
    void insert(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        
        
        if(!head)
        {
            head = newNode;
        }
        else
        {
            Node* p = head;
            
            while(p->next)
            {
                p = p->next;
            }
            
            p->next = newNode;
        }
    }
    
    void deleteNode(int value)
    {
        if(!head) return;
        
        if(head->data == value)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        
        //if not then traverse 
        Node* current = head;
        Node* prev = nullptr;
        
        while(current && current->data != value)
        {
            prev = current;
            current = current->next;
        }
        
        //if not existing
        if(!current) return;
        
        //then unlink
        prev->next = current->next;
        
        delete current;
    }
};

int main()
{
    CLinkedList list;
    
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.insert(7);
    list.insert(8);
    

    list.display();
    
    list.deleteNode(1);
    
        cout<< "1 was deleted\n";

    
    
    list.display();
    
    list.deleteNode(8);
    
        cout<< "8 was deleted\n";

    
    
    list.display();
    
    list.deleteNode(3);
    
    cout<< "3 was deleted\n";
    
    list.display();
    
    list.deleteNode(90);
    
        cout<< "90 was deleted\n";

    
    list.display();
    
    return 0;
}
