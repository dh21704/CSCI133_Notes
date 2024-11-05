#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double numerator, double denominator)
{
    if(denominator == 0)
    {
        throw invalid_argument("Error: Division by zero is not allowed: ");
    }
    
    return numerator / denominator;
}

int main()
{
    double num = 10;
    double denom = 100;
    
    try
    {
        double result = divide(num, denom);
        cout << "Result: " << result << endl;
    }
    catch(const invalid_argument &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
    catch(...)
    {
      std::cout << "An unexpected error occurred." << std::endl;

    }
    
    return 0;
}
