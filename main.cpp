#include <iostream>//defines the standard devices cin, cout, clog, ceer; for more info see http://www.cplusplus.com/reference/iostream/
#include <string> //defines string types and conventions including begin & end iterator; for more info see http://www.cplusplus.com/reference/string/
#include <algorithm>//defines a collection of ranged functions; for more info see http://www.cplusplus.com/reference/algorithm/
#include <random>//defines random number generation facilities; for more info see http://wwww.cplusplus.com/reference/random/
#include <ctime>//declares a set of functions, macros and types to work with date and time information e.g. the time() function is used to get the current time

//include default source files for daily primer challenges
#include "monday.h"
#include "monday.h"
#include "tuesday.h"
#include "wednesday.h"
#include "thursday.h"
#include "friday.h"

//function declarations:
//tell the compiler about the function; required if function isn't compiled prior to reference
void menu(void);

//this is the 
int main() {
	menu();
	return 0; //return value (0) typically used to indicate a 'no error' status
}

void menu(void) {
	int choice = -1; //declare and initialise an integer type variable
	do { //set up a continuous loop
		std::cout << "\nAdvanced Programming - Primers Portfolio Menu:\n";
		std::cout << "Monday (Basic Programming Primers)\n";
		std::cout << "\t1. Primer 01\n";
		std::cout << "\t2. Primer 02\n";
		std::cout << "\t3. Primer 03\n";

		std::cout << "\nTuesday (Data Types, Manipulation & Structures)\n";
		std::cout << "\t4. Primer 04\n";
		std::cout << "\t5. Primer 05\n";
		std::cout << "\t6. Primer 06\n";

		std::cout << "\nWednesday (IO Streams, File & Error Handling)\n";
		std::cout << "\t7. Primer 07\n";
		std::cout << "\t8. Primer 08\n";
		std::cout << "\t9. Primer 09\n";

		std::cout << "\nThursday (Multi-Threading & Concurrency)\n";
		std::cout << "\t10. Primer 10\n";
		std::cout << "\t11. Primer 11\n";
		std::cout << "\t12. Primer 12\n";

		std::cout << "\nFriday (Classes and Objects)\n";
		std::cout << "\t13. Primer 13\n";
		std::cout << "\t14. Primer 14\n";
		std::cout << "\t15. Primer 15\n";

		std::cout << "\n\t0. Quit\n";

		std::cout << "\nPlease enter option to run primer (e.g. 1 for Primer 01): ";
		std::cin >> choice;

		switch(choice) {
			case 1: primer1(); break;
			case 2: primer2(); break;
			case 3: primer3(); break;
			case 4: primer4(); break;
			case 5: primer5(); break;
			case 6: primer6(); break;
			case 7: primer7(); break;
			case 8: primer8(); break;
			case 9: primer9(); break;
			case 10: primer10(); break;
			case 11: primer11(); break;
			case 12: primer12(); break;
			case 13: primer13(); break;
			case 14: primer14(); break;
			case 15: primer15(); break;
			case 0: std::cout << "Exiting"; break;
			default:
				std::cout << "\n'" << choice << "' Is an invalid option  - please try again.";
				break;
		}
	} while(choice != 0);
	std::cout << " - Done\n\n";
}