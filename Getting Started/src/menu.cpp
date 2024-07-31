#include <iostream>
#include "menu.h"

using namespace std;
// this function displays a menu, i can add to this stuff later if i want to.
void displayMenu() {
	cout << R"(  )" << "\n";
	cout << "1. FiboGen" "\n";
	cout << "2. BasiCal" "\n";
	cout << "3. Amogus" "\n";
	cout << "4. Exit" "\n";
	cout << "pls choose number tnx \n ";
}
// this function scans for the user's choice basically. 
int menuChoice() {
	int choice;
	cin >> choice; 
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return choice; 
}
 