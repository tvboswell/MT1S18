#include "stdafx.h"
#include "p2.h"
#include <stdio.h>
#include <iostream>
#include <cmath>
//
//2 - Write a C program to compute the equivalent resistance of the 3 parallel resistors R1, R2, R3.
//
//The equivalent resistor for 3 parallel resistors is found using the formula(The Req reciprocal = sum of all resistor reciprocals)                       1 / Req = 1 / R1 + 1 / R2 + 1 / R3
//
//Note the computed Req will always be of a value less than each of R1, R2, R3 • User should be prompted to enter values of 3 resistors(display message for input) • Code should display the output message as : The equivalent resistor of 3 parallel resistors R1(show value entered), R2(show value entered), R3(show value entered) is Req(show computed value)
//
//Code should ensure values of Resistors are non negative and entered as float numbers.Example : If user enter 5.2, 3.6, 10.9, output is The equivalent resistor of 3 parallel resistors 5.2, 3.6, 10.9 is 1.779
//
//(Total 20 points)
//
//


int p2test_1();
int p2test_2();
float resistance(float N1, float N2, float N3);

p2::p2()
{
}

int p2::test2()
{
//	//Test resistance
	p2test_1();
	p2test_2();
	return 0;
}

int p2test_1()
{
	int returnVal = 0;
	//https://www.electronics-tutorials.ws/resistor/res_4.html
	// 200.0, 470.0, 220.0 in parallel, Ans 85.66
	
	float y = resistance(200.0, 470.0, 220.0);

	//float x = trunc(y);

	if (y - 85.66 < .1)
	{
		std::cout << "Problem 2 Test 1 correct\r\n";
		returnVal = 0;
	}
	else
	{
		std::cout << "Problem 2 Test 1 incorrect\r\n";
		returnVal = 1;
	}


	return returnVal;
}

int p2test_2()
{
	int returnVal = 0;
	//From Assignment

	//If user enter 5.2, 3.6, 10.9, output is The equivalent resistor of 3 parallel resistors 5.2, 3.6, 10.9 is 1.779

	float x = resistance(5.2, 3.6, 10.9);

	
	if (x - 1.779 < .1)
	{
		std::cout << "Problem 2 Test 2 Correct.\r\n";
		returnVal = 0;
	}
	else
	{
		std::cout << "Problem 2 Test 2 Incorrect\r\n";
		returnVal = 1;
	}

	return returnVal;
}

float p2::GetResistance()
{

	std::cout << "\r\nPlease enter 3 numbers to find the equavalent resistance for: ";

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
			std::cout << "\r\n Error, expecting a number like 7 or 2.3";
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

	float res = resistance(N1, N2, N3);
	//printf_s("standard dev debug %11.6lf", res);
	//The equivalent resistor of 3 parallel resistors R1(show value entered), R2(show value entered), R3(show value entered) is Req(show computed value)
	printf_s("The equivalent resistor of 3 parallel resistors R1(%f), R2(%f), R3(%f) is is Req(%f)\r\n ", N1, N2, N3, res);

	return res;
}

float resistance(float N1, float N2, float N3)
{
	float eq = 1 / (1 / N1 + 1 / N2 + 1 / N3);


	return eq;
}

p2::~p2()
{
}
