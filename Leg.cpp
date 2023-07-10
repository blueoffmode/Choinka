#include "Leg.h"
#include<iostream>
using namespace std;

void Leg::print() {
	for (int i = 0; i < this->nLine; ++i) {
		for (int j = 0; j < this->nOffset; ++j) {
			cout << " ";
		}
		cout << "*" << "\n";
	}
}