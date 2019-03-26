#pragma once
class Operations {
protected:
	virtual void Add(int) = 0;
	virtual void Substract(int) = 0;
	virtual void Multiply(int) = 0;
	virtual void Divide(int) = 0;
	virtual void Power(int) = 0;
	virtual void SquareRoot(int) = 0;
};