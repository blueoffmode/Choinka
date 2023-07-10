#pragma once

class Leg
{
public:
	Leg(int _offset, int _nLine) : nOffset(_offset), nLine(_nLine) {};
	void print();
private:
	int nOffset{};
	int nLine{};
};

