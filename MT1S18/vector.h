#pragma once
#include "stdafx.h"

class vector {
	public:
		vector(int s);
		double& operator[](int i);
		int size();
	private:
		double* elem;
		int sz;
};