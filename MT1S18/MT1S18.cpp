// MT1S18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "p1.h"
#include "p2.h"
#include "p3.h"
#include "p4.h"
#include "p5.h"
#include "vector.h"
#include <cmath>
#include <stdio.h>
#include <iostream>

void problem_1();
void problem_2();
void problem_3();
void problem_4();
void problem_5();
double sqrt_sum(vector&);


int main()
{
	std::cout << "Mid Term 1\r\n";

	//problem_1();

	//problem_2();

	problem_5();

    return 0;
}


void problem_1()
{

	p1 problem1;
	
	std::cout << "Mid Term 1: Problem 1\r\n";

	std::cout << "Running tests problem 1:\r\n";
	problem1.test1();

	//get input, handle errors and show "standard deviation" 
	std::cout << "Standard Deviation Calculator:\r\n";
	problem1.GetStandardDeviation();



	return;
}

void problem_2()
{

	p2 problem2;
	std::cout << "Running tests problem 2:\r\n";
	problem2.test2();
	
	//get input, handle errors and show "GetResistance" 
	std::cout << "Resistance Calculator:\r\n";
	problem2.GetResistance();

	std::cout << "Mid Term 1: Problem 2";
	return;
}

void problem_3()
{
	std::cout << "Mid Term 1: Problem 3";
	return;
}

void problem_4()
{
	std::cout << "Mid Term 1: Problem 4";
	return;
}

void problem_5()
{
	std::cout << "Mid Term 1: Problem 5";

	p5 problem5;
	std::cout << "Factorial:\r\n";
	problem5.FactorialTests(0);
	return;
}

double sqrt_sum(vector& v)
{
	double sum = 0;
	for (int i = 0; i != v.size(); ++i)
		sum += sqrt(v[i]);
	return sum;
}
