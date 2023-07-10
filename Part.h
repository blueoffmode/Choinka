#pragma once

class Part
{
public:
	Part(int _nLine, int _sStart);
	void print();
	int getSEnd() { return this->sEnd; };
	void setOffset(int x) { this->offset = x; };
private:
	int nLine{};
	int sStart{};
	int sEnd{};
	int offset{};
};

