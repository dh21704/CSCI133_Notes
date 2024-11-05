#include <iostream>
#include <string>
using namespace std;

template <typename T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
class Box
{
  private:
  
  T value;
  
  public:
  
  Box(T v): value(v) {}
  
  T getValue()
  {
      return value;
  }
  
  void setValue(T v)
  {
      value = v;
  }
};

int main()
{
    cout << "Greater between 10 and 5: " << getMax(5, 10) << endl;
    cout << "Greater 5.5 and 10.5: " << getMax(10.5, 5.5) << endl;
    cout << "Greater between a and b: " << getMax('a', 'b') << endl;
    
    Box<int> intBox(123);
    
    Box<string> strBox("hello World!");
    
    cout << intBox.getValue() << endl;
    
    cout << strBox.getValue() << endl;
    
    return 0;
}
