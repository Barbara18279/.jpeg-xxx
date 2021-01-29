#include "pch.h"
#include <iostream>

int main()
{
	int m = 2, n = 3;
	if (m != n)
	{
		if (m > n)n = m;
		else m = n;
	}
	else m = n = 0;

	return 0;
}