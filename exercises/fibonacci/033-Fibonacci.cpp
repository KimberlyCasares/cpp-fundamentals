/*
Print Fibonacci numbers using long and a for loop

Learning objetive: 
1. for loop
2. First venture into algorithms
3. Integer type ranges
4. Visibility

Code written by Jan Mrazek, mrazek@uga.edu

*/



#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	if (argc==1)  {
		cout << "Use as:  " << argv[0] << " <N>\n";
		cout << "Prints the first N Fibonacci numbers\n";
		cout << "Example: " << argv[0] << " 20\n";
		return 0;
	}
	
	int n=atoi(argv[1]);  // How many Fibonacci numbers are printed

	long a=1,b=1;

	cout << "\nThe first " << n << " Fibonacci numbers are:\n";
	
	if (n>0)  cout << "1:\t1\n";
	if (n>1)  cout << "2:\t1\n";


	for (int i=3;i<=n;++i)  {
// for loop combines three steps that are usually done in loops:
// 1. initiate the loop variable (i) -- it can be declared in the for loop or outside. If it is declared in the for loop as here,
//    it cannot be referenced outside the loop because the memory for the variable is freed when the loop ends
// 2. the loop condition
// 3. command or commands executed at the end of the loop
		long c=a+b;  // The next Fibonacci number
		cout << i << ":\t" << c << "\n";
		a=b;
		b=c;
	}

// What happens when you uncomment the following statements?
// cout << a << "\n";
// cout << b << "\n";
// cout << c << "\n";
// cout << i << "\n";

// the variables c and i were declared inside the loop and they are only "visible" inside
// that loop (designated by the curly brackets {}). Once the program exits the loop,
// those variables seize to exist and if you try to use them the compiler reports an error
// a and b were declared outside the loop and they are still visible after the loop ends,
// but c and i are not.

  return 0;

}


