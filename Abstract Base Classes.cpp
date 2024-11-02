#include <iostream>
using namespace std;

class Animal
{
    public:
    virtual void sound()
    {
        cout << "something";
    }
};

class Cat : public Animal
{
    public:
    void sound() override
    {
        cout << "\ncat";
    }
};

class Dog : public Animal
{
    public:
    void sound() override
    {
        cout << "\ndog";
    }
};

int main()
{
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();
    Animal* animal = new Animal();
    
    animal->sound();
    myDog->sound();
    myCat->sound();
    
    delete animal;
    delete myDog;
    delete myCat;
    
    return 0;
}
