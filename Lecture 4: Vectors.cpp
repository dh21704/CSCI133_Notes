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
    vector <int> first;
    vector <int> second(4,300);
    
    vector<int> third(second.begin(), second.end());
    
    vector<int> fourth(third);
    
    cout << "\nThe contents of the vector are: ";
    
    for (vector<int>::iterator counter = fourth.begin();
    
    counter != fourth.end();
    
    ++counter)
    
    {
        cout << *counter << " ";
    }
    cout << endl;

    return 0;
}
