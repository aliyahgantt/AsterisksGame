#include <iostream>

using namespace std;

int main(){

// Declares the variable for the number the user inputs
int number;
// Declares the variable to determine if the program is currently running
char running;

do

{
  cout << "\nPlease enter a number of asterisks to be printed.";
  cin >> number; // user inputs number

    for (int i=1; i<=number; i++)
    {
      cout << "*";
    }
    cout << endl; // ends the output stream

    cout << "Do you want to go again? (y/n)";
    cin >> running;

} while (running == 'y');

return 0;
}
