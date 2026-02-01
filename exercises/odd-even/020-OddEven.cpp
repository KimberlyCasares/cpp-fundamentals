/*
Is the number odd or even?

Learning objetive: 
1. if/else statement
2. modulo operator

Code written by Jan Mrazek, mrazek@uga.edu

*/



#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	if (argc==1)  {
		cout << "Use as:  " << argv[0] << " <int_number>\n";
		cout << "Example: " << argv[0] << " 46753\n";
		return 0;
	}
	
	int N=atoi(argv[1]);  // Number from command line
// atoi converts a C-string to int

	if (N%2==0)  {  
// % is the modulo operator; in this case it returns remainder after division of N by 2
		cout << N << " is even\n";
	}
	else  {
		cout << N << " is odd\n";
	}

  return 0;

}
