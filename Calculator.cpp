#include "Calculator.h"
using namespace std;
void Calculator::Add(int x) {
	current_result += x;
}
void Calculator::Substract(int x) {
	current_result -= x;
}
void Calculator::Multiply(int x) {
	current_result *= x;
}
void Calculator::Divide(int x) {
	current_result /= x;
}
void Calculator::Power(int x) {
	current_result = pow(current_result, x);
}
void Calculator::SquareRoot(int x) {
	current_result = sqrt(current_result);
}
void Calculator::MemSet() {
	memory_number = current_result;
}
void Calculator::MemClear() {
	memory_number = 0;
}
void Calculator::MemPlus() {
	current_result += memory_number;
}
void Calculator::MemMinus() {
	current_result -= memory_number;
}
void Calculator::Clear() {
	current_result = 0;
}
Calculator::Calculator() {
	int x;
	char c = '\0';
	cin >> x;
	current_result = x;
	while (c != 'q') {
		cin >> c;
		if (c == '+') {
			cin >> x;
			Add(x);
			cout << current_result << "\n";
		}
		else if (c == '-') {
			cin >> x;
			Substract(x);
			cout << current_result << "\n";
		}
		else if (c == '*') {
			cin >> x;
			Multiply(x);
			cout << current_result << "\n";
		}
		else if (c == '/') {
			cin >> x;
			if (x == 0) {
				exception e("Numitorul trebuie sa fie diferit de 0!");
				throw e;
			}
			Divide(x);
			cout << current_result << "\n";
		}
		else if (c == '^') {
			cin >> x;
			Power(x);
			cout << current_result << "\n";
		}
		else if (c == 's') {
			if (x < 0) {
				exception e("Numarul trebuie sa fie mai mare sau egal cu 0");
				throw e;
			}
			SquareRoot(x);
			cout << current_result << "\n";
		}
		else if (c == 'v') {
			MemSet();
			cout << "Rezultat curent salvat in memorie\n";
		}
		else if (c == 'b') {
			MemClear();
			cout << "Memorie curatata!\n";
		}
		else if (c == 'n') {
			MemPlus();
			cout << current_result << "\n";
		}
		else if (c == 'm') {
			MemMinus();
			cout << current_result << "\n";
		}
		else if (c == 'c') {
			Clear();
			cout << current_result << "\n";
		}
	}
}