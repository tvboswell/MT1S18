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
double sqrt_sum(vector&);


int main()
{
	//p1 prob1();
	
	//p1 problem1 = new p1->~p1();
    return 0;
}

double sqrt_sum(vector& v)
{
	double sum = 0;
	for (int i = 0; i != v.size(); ++i)
		sum += sqrt(v[i]);
	return sum;
}

void problem_1()
{
	return;
}