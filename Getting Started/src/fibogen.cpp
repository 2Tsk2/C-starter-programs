#include <iostream>
#include "fibogen.h"
#include <stdint.h>
using namespace std;

void fibogen() {

	uint64_t number, term1 = 0, term2 = 1, nextTerm = 0;

	cout << "pls choose the number of terms you want: \n";
	cin >> number; 
	cout << "mama mo fibonacci: ";

	for (uint64_t iterations = 1; iterations <= number; iterations++) {
		
		if (iterations == 1) {
			cout << term1 << ", ";
			continue;
		}
		if (iterations == 2) {
			cout << term2 << ", ";
			continue;
		}
		   nextTerm = term1 + term2; 
		   term1 = term2; 
		   term2 = nextTerm;

	       cout << nextTerm << ", ";
	}
	cout << endl;

}
