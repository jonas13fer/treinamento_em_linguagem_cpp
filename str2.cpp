#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char name[80];
    
    cout << "\nType your name: ";
    cin >> setw(80) >> name; //it doesn't accept space 
    
    cout << "\nYour name is" << name;
}
