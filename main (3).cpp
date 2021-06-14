/******************************************************************************
This is a demo 
*******************************************************************************/





#include <iostream>

using namespace std;

int main()
{
    int age;        // variable to hold a user's age
    
    string name;    // variable to hold a user's name
    
    // prompt the user for the name
    cout << "what is your name?";
    getline(cin, name);   // allow for the user to enter their name with spaces
    
    //prompt the user for their age
    cout << "how old are you?";
    cin >> age;     // allows for the user to enter their age
    
    
    //display te user's name and age
    cout << endl << "name; " << name << endl;
    cout << "age: " << age << endl;
    
    return 0;
}
