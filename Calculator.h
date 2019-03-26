#pragma once
#include "Operations.h"
#include <cmath>
#include <iostream>
#include <stdexcept>
class Calculator : public Operations {
private:
	int current_result = 0;
    int memory_number = 0;
	void Add(int);
	void Substract(int);
	void Multiply(int);
	void Divide(int);
	void Power(int);
	void SquareRoot(int);
	void MemSet();
	void MemClear();
	void MemPlus();
	void MemMinus();
	void Clear();
public:
	Calculator();
};