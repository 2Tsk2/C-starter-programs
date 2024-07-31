#include <iostream>
#include "menu.h"
#include <cstdlib>
#include "fibogen.h"
using namespace std;


// when the main function is called, it calls a function from menu.h which we added
// as a header.
int main() {
	while (true) {
		displayMenu();
		int choice = menuChoice();

	switch (choice) {

		case 1: 
			fibogen();
			return choice;
			break;
		case 2:
			cout << "test lang ulit \n";
			break;
		case 3: 
			cout << "haha amogus \n";
			break;
		case 4:
			cout << "application exiting, ty \n";
			cout << "Press Enter to exit...";
			cin.ignore();
			cin.get();
			exit(0);
		default:
			cout << "bobo mo naman may binigay na nga na choice eh. \n";
			break; 
	 }
	cout << "Debug: End of loop iteration" << endl;
	}
	cout << "Debug: Exited the main loop" << endl;
	return 0;

}