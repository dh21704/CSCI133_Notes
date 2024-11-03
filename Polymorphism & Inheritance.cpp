

#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual void draw()= 0; // pure virtual function
};

class Circle : public Shape
{
    public:
    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape
{
    public:
    void draw() override
    {
        cout << "Drawing a square" << endl;
    }
};

void render(Shape* shape)
{
    shape->draw();
}

int main()
{
    Shape* circle = new Circle();
    Shape* square = new Square();
    
    circle->draw();
    square->draw();
    
    render(circle);
    render(square);
    
    delete circle;
    delete square;

    return 0;
}
