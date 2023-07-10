#include <iostream>
#include "Part.h"
#include "Leg.h"
using namespace std;

int main()
{
	cout << "Enter x: ";
	int x;
	do {
		cin >> x;
	} while (x <= 0);

	Part p1(x, 1);
	int p1End = p1.getSEnd();
	Part p2(x + 2, p1End - 2);
	int p2End = p2.getSEnd();
	Part p3(x + 2, p2End - 6);
	int p3End = p3.getSEnd();
	Leg leg(p3End / 2, x);


	p1.setOffset(p3End / 2 - x + 1);
	p2.setOffset(x - 2);


	p1.print();
	p2.print();
	p3.print();
	leg.print();


	return 0;
}

