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

	problem_1();

    return 0;
}


void problem_1()
{

	p1 problem1;
	
	std::cout << "Mid Term 1: Problem 1";

	std::cout << "standrd deviation" << problem1.test();

	std::cout << "standrd deviation" << problem1.GetstandardDeviation();
	return;
}

void problem_2()
{
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
	return;
}

double sqrt_sum(vector& v)
{
	double sum = 0;
	for (int i = 0; i != v.size(); ++i)
		sum += sqrt(v[i]);
	return sum;
}
