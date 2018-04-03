#include "stdafx.h"
#include "p5.h"
#include <cmath>
#include <stdio.h>
#include <iostream>
#include <cmath>

long Fact(long);
long dustins_factorial(long);
//
//5 - Write a C program to do the following : a - read in an input integer 
//from user and compute the factorial of the input Fact(n) = n * (n - 1)*(n - 2)*... * 3 * 2 * 1 Test 
//your code and provide a snapshot of a working input such as n = 6, and invalid input such as    n = -3,
//and n = A1 Provide the code as part of your work paper b - Write a code that would generate 5 rand numbers
//between(1 - 12) in a loop and display a table with factorial values of the random numbers.The code should
//prompt user for an input of rows of table to display.Possible range of rows(1 – 5).
//The table example 
//above was shown for an input of 3 rows supplied by user.
//
//Num1  Fact | Num2  Fact | Num3  Fact | Num4  Fact | Num5   Fact 
//Num1  Fact | Num2  Fact | Num3  Fact | Num4  Fact | Num5   Fact 
//Num1  Fact | Num2  Fact | Num3  Fact | Num4  Fact | Num5   Fact
//
//Example of a run for the case of 3 rows 
//3   6 | 2   2 | 4  12 | 8   40320 | 5     120 
//10 3628800 | 8 40320 | 5 120 | 2    2 | 1     1 
//1    1 | 2    2 | 10 3628800 | 4 12 | 6    720
//
//Test your code and provide a snapshot of a working input such as rows R = 3, and invalid input such as R = -3, R = 2.3, and R = A1 Provide the code as part of your work paper(Total 30 points)


p5::p5()
{
}

int p5::FactorialTests(int T)
{

	long in = 3;
	long out = 6;
	out = Fact(in);
	printf_s("%ld %ld | ", in, out);

	//std::cout << "%I %I | ", 3, dustins_factorial(3);
	
	in = 2;
	printf_s("%ld %ld | ", in, dustins_factorial(in));
	
	in = 4;
	printf_s("%ld %ld | ", in, dustins_factorial(in));
	
	in = 8;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 5;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 10;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 8;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 5;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 2;
	printf_s("%ld %ld | ", in, dustins_factorial(in));
	
	in = 1;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 1;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 2;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 10;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 4;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	in = 6;
	printf_s("%ld %ld | ", in, dustins_factorial(in));

	return 0;
}


void p5test1()
{
	long testval = 3;
	long fact = dustins_factorial(testval);

}


long dustins_factorial(long f)
{
	if (f == 0)
		return 1;
	return(f * dustins_factorial(f - 1));
}

long Fact(long x)
{
	if (x == 1)
		return 1;
	return (x * Fact(x - 1));
}


p5::~p5()
{
}
