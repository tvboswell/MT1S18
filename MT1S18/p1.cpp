#include "stdafx.h"
#include "p1.h"
#include <stdio.h>
#include <iostream>
#include <cmath>
//http://www.cplusplus.com/reference/cmath/

//1 - Write a pseudo / algorithm to compute the equivalent resistance of the standard deviation of 3 float numbers N1, N2, N3.
//
//• The standard deviation is found as follows : • compute number averages as  AVG = (N1 + N2 + N3) / 3 • Then compute the terms(N - AVG) ^ 2, (N2 - AVG) ^ 2, and (N3 - AVG) ^ 2 • 
//Then add the above 3 terms • Then find the square root of the sum of the 3 terms and equate to ST • 
//Algorithm should display messages at requesting inputs as follows :
//Please enter 3 numbers to find the standard deviations for : • Display the output message as follows :
//
//The standard deviation of 3 numbers N1(show values entered), N2(show value entered), N3(show value entered) is ST(Show computed value).
//
//Algorithm should ensure the inputs are of valid values of integers or real floating numbers.Code should report a message if a non numeric entry is entered.
//
//(Total 10 points)


int test_1();

float standardDeviation(float N1, float N2, float N3);

float avgerage(float N1, float N2, float N3);

p1::p1()
{
	
}
//
//int p1::test1()
//{
//	//Test resistance
//	test_1();
//	//test_2();
//	return 0;
//}

float p1::GetStandardDeviation()
{

	std::cout << "\r\nPlease enter 3 numbers to find the standard deviations for: ";

	float N1;
	

	bool num1BAD = true;

	while (num1BAD)
	{
		std::cout << "\r\nEnter Number 1: ";
		std::cin >> N1;
		if (!std::cin) // or if(cin.fail())
		{
			// user didn't input a number
			std::cin.clear(); // reset failbit
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
																		   // next, request user reinput
			std::cout << "\r\n Error, expecting a number like 7 or 2.3 or 420.77";
			num1BAD = true;
		}
		else
		{
			//std::cout << "\r\nGOOD INPUT ";
			num1BAD = false;
		}
	}

	float N2;
	std::cout << "Enter Number 2: ";
	std::cin >> N2;
	
	float N3;
	std::cout << "Enter Number 3: ";
	std::cin >> N3;

	float strdDev = standardDeviation(N1, N2, N3);
	//printf_s("standard dev debug %11.6lf", strdDev);

	printf_s("The standard deviation of 3 numbers N1(%f), N2(%f), N3(%f) is SD(%f)\r\n ", N1, N2, N3, strdDev);

	return strdDev;
}






int test_1()
{
	int returnVal = 0;
	//http://www.calculator.net/standard-deviation-calculator.html
	float x = standardDeviation(200.0, 470.0, 220.0);

	//Sample Standard Deviation, s
	/*150.44378795196
		Variance(Sample Standard), s2
		22633.333333333
		Population Standard Deviation, σ
		122.83683848459
		Variance(Population Standard), σ2
		15088.888888889
		Total Numbers, N
		3
		Sum:
	890
		Mean(Average) :
		296.66666666667
		Standard Error of the Mean(SEx̄) :
		86.858761471969*/
	if (x - 122.83 < .1)
	{
		std::cout << "Test 2 Correct.\r\n";
		returnVal = 0;
	}
	else
	{
		std::cout << "Test 2 Incorrect\r\n";
		returnVal = 1;
	}
	
	return returnVal;
}

float standardDeviation(float N1, float N2, float N3)
{
	float a = avgerage(N1, N2, N3);
	
	float DENOMINATOR = 3.0;
	float d1 = (N1 - a)*(N1 - a);
	float d2 = (N2 - a)*(N2 - a);
	float d3 = (N3 - a)*(N3 - a);

	float variance = (d1 + d2 + d3)/ DENOMINATOR;
	float standardDeviation = sqrt(variance);
	return standardDeviation;
}

float avgerage(float N1, float N2, float N3)
{
	float eq =  (N1 + N2 + N3)/3;

	return eq;
}






p1::~p1()
{
}
