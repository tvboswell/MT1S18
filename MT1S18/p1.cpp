#include "stdafx.h"
#include "p1.h"


//1 - Write a pseudo / algorithm to compute the equivalent resistance of the standard deviation of 3 float numbers N1, N2, N3.
//
//• The standard deviation is found as follows : • compute number averages as  AVG = (N1 + N2 + N3) / 3 • Then compute the terms(N - AVG) ^ 2, (N2 - AVG) ^ 2, and (N3 - AVG) ^ 2 • Then add the above 3 terms • Then find the square root of the sum of the 3 terms and equate to ST • Algorithm should display messages at requesting inputs as follows : Please enter 3 numbers to find the standard deviations for : • Display the output message as follows :
//
//The standard deviation of 3 numbers N1(show values entered), N2(show value entered), N3(show value entered) is ST(Show computed value).
//
//Algorithm should ensure the inputs are of valid values of integers or real floating numbers.Code should report a message if a non numeric entry is entered.
//
//(Total 10 points)

p1::p1()
{
}

int p1::size()
{
	return 7;
}

p1::~p1()
{
}
