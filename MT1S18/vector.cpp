#include "stdafx.h"
#include "vector.h" 

vector::vector(int s)
	:elem{ new double[s] }, sz{ s }
{
}
double& vector::operator[](int i)
{
	return elem[i];
}
int vector::size()
{
	return sz;
}