/* Program: Finding real roots of nonlinear
   equation using Newton Raphson Method
   By : Mian Muhammad Qasim  */
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

   // Defining equation
#define   f(x)    3*x - cos(x) -1

	  // Defining derivative
#define   g(x)   3 + sin(x)

using namespace std;

int main()
{
	float x0, x1, f0, f1, g0;
	int steps = 1, N;

	cout << "The decimal places are fixed to 4, because 'meri ma'am ne kaha tha'." << endl;
	cout << setprecision(4) << fixed;
	
	cout << "Enter initial guess (X0): ";
	cin >> x0;
	cout << "Enter maximum number of iteration: ";
	cin >> N;

	cout << endl << "*********************" << endl;
	cout << "Newton Raphson Method" << endl;
	cout << "*********************" << endl;
	do
	{
		g0 = g(x0);
		f0 = f(x0);
		if (g0 == 0.0)
		{
			cout << "Mathematical Error.";
			exit(0);
		}


		x1 = x0 - (f0 / g0);


		cout << "Iteration-" << steps << ":\t x = " << setw(10) << x1 << " and f(x) = " << setw(10) << f(x1) << endl;
		x0 = x1;

		steps = steps + 1;

		if (steps > N)
		{
			cout << "Stoping criteria achieved.";
			cout << endl << "Root is: " << x1 << endl;
			exit(0);
		}

		f1 = f(x1);
		
	} 

	while (fabs(f1) > 0.0000);
	

	
	
	return 0;
}