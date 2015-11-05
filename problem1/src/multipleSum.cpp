//============================================================================
// Name        : multipleSum.cpp
// Author      : Raviteja Lingineni
// Version     :
// Copyright   : CS1337.503
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int doCalculation(int max, int divisor)
{
	if(divisor == 5)
	{

	int modulus = max%divisor;
	int greatest = max - modulus;
	int greatestCounter = greatest/divisor -1;
	int total = 0;
	for(int x = 1; x <= greatestCounter; x++)
	{

			total+= x*divisor;



	}

		return total;

	}

	else
	{

	int modulus = max%divisor;
	int greatest = max - modulus;
	int greatestCounter = greatest/divisor;
	int total = 0;
	cout << greatestCounter << endl;

	for(int x = 1; x <= greatestCounter; x++)
	{

		if((x*divisor)%5 != 0)
		{
			total+= x*divisor;

		}

	}



	return total;

	}
}

int main() {



int total = doCalculation(1000, 3);
int next = doCalculation(1000, 5);
total = total + next;

cout << total << endl;
	// prints Hey there
	return 0;
}
