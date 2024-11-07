#include <iostream>
using namespace std;

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    return a / b;
}

int main()
{
    double (*operationPtr)(double, double);
    
    double num1, num2;
    int choice;
    
    
    cout << "Enter first number: " << endl;
    cin >> num1;
    
    cout << "Enter second number: " << endl;
    cin >> num2;
    
    cout << "Choose an operation \n1 - Add\n2 - Subtract\n3 - Multiply\n4 - Division";
    cout << "\nChoice: ";
    cin >> choice;
    
    switch(choice)
    {
        case 1:
            operationPtr = add;
        
            break;
        
        case 2: 
            operationPtr = subtract; 
            break;
            
        case 3: 
            operationPtr = multiply; 
            break;
            
        case 4: 
            if(num2 != 0)
            {
                            operationPtr = division;

            }
            else
            {
                cout << "\nCannot perform division by 0";
                return 1;
            }
            
            break;
            
            default: 
            cout << "Invalid Choice" << endl;
            return 1;
    }
    
    double result = operationPtr(num1, num2);
    cout << "The result: " << result << endl;
    
    return 0;
}
