/*
	Title: Systems Calculator
	Version: 0.0.1
	Main Program Title: SystemSolver.cpp
	Date Started: 1/13/2017
	Date Finished: N/A
*/
#include <iostream>
#include "SystemCalc.h"

using namespace std;

int main()
{
	cout << "Please make sure both systems are in the format (a)x+(b)y=(c)" << endl;
	cout << "Please enter each variable for the systems." << endl;
	System("pause");
	System("cls");
	cout << "First Equation:" << endl;
	cout << "a:";
	cin >> Q1;
	cout << "b:";
	cin >> R1;
	cout << "c:";
	cin >> S1;
	System("cls");
	cout << "Second Equation:" << endl;
	cout << "a:";
	cin >> Q2;
	cout << "b:";
	cin >> R2;
	cout << "c:";
	cin >> S2;
	System("cls");

	x1,x2 = systemCalc(Q1,Q2,R1,R2,S1,S2);

	cout << "(" + x + ", " + y + ")" << endl;
}

double systemCalc(double A1,A2,B1,B2,C1,C2)
{
	//((A1)x+(B1)y=(C1)) + ((A2)x+(B2)y=(C2))
	//((B1)y=(C1)-(A1)x) + ((B2)y=(C2)-(A2)x)
	a1 = -(A1);
	a2 = -(A2);
	//(y=((C1)-(a1)x)/(B1)) + (y=((C1)-(a2)x)/(B2))
	c1 = C1 / B1;
	a1 /= B1;
	c2 = C2 / B2;
	a2 /= B2;
	//((C1)-(a1)x) = ((C2)-(a2)x)
	a1 += a2;
	//((C1)-(a1)x) = (C2)
	c2 -= C1;
	//(a1)x = (C2)
	c2 /= a1;
	//x = C2
	x = c2;

/****************/

	//((A1)(x))+(B1)y=(C1)
	a3 = A1*x;
	//(a3)+(B1)y=(C1)
	c3 = C1 - a3
	//(B1)y=(a3)
	c3 /= B1;
	y = c3;

	return x,y;
}