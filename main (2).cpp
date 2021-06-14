/******************************************************************************
This is a demo of literals
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number = 12;       // variable holds a number without decimal places
    double number2 =15.5;  // variable holds a number with decimal places
    char letter = 'A';    // variable holds a character in ''
    string phrase = "ABCD"; //variable that holds the phrase "ABCD"
    bool valid = true;      // variable that holds the value true
    
    cout << number << endl;     // displays the value of number
    cout << number2 << endl;    // displays the value of number2
    cout << letter << endl;     // displays the value of letter
    cout << phrase << endl;     // displays the value of phrase
    cout << valid << endl;      // displays the value of valid
    return 0;
}
