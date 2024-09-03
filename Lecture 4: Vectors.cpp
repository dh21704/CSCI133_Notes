/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::cout<<"Hello World";
    
    vector<int> v1;
    
    //vector <AClass> record(20); // vecotr for a class called AClass with 20 elements
    
    //note: <int>notation for a template class 
    //vectors are a part of the STL (standard template library)
    
    //unsigned int only stores positive integers
    
    vector<int> vectorArray2;
    cout << endl;
    cout << vectorArray2.size(); //returns a number of elements in the vectorArray2
    cout << endl;
    cout << vectorArray2.capacity(); //returns a number of capacity in the vectorArray2
    cout << endl;
    
    cout << "myVector(10)" << endl;
    
    int lenght = 10;
    
    vector<int> myVector(lenght);
    
    cout << endl;
    cout << myVector.size() << endl;;
    cout << myVector.capacity() << endl;
    cout << endl;
    
    myVector.push_back(9);
    myVector.push_back(8);
    myVector.push_back(7);
    
    cout << endl;
    cout << myVector.size() << endl;;
    cout << myVector.capacity() << endl;
    cout << endl;
    
    myVector.begin();
    myVector.end();
    
    for (int i = 0; i < lenght; i++)
    {
        myVector[i] = i;
        
        cout << "myVector: " << myVector[i] << endl;
    }

    return 0;
}
