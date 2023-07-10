#include "Part.h"
#include<iostream>
using namespace std;

Part::Part(int _nLine, int _sStart) {
	this->nLine = _nLine;
	this->sStart = _sStart;
	this->sEnd = _sStart + 2 * (_nLine - 1);
}

void Part::print() {
	for (int i = 0; i < this->nLine; ++i) {
		for (int of = 0; of < this->offset; ++of) {
			cout << " ";
		}
		for (int j = 0; j < this->nLine - i - 1; ++j) {
			cout << " ";
		}
		for (int k = 0; k < this->sStart + i * 2; ++k) {
			cout << "*";
		}
		cout << "\n";
	}
}