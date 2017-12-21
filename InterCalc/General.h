#pragma once

#include "stdafx.h"


class Add {
public:
	int add(int num1, int num2) {
		return num1 + num2;
	}

	double add(double num1, double num2) {
		return num1 + num2;
	}

	double add(int num1, double num2) {
		return double(num1) + num2;
	}
};

class Subtract {
public:
	int subtract(int num1, int num2) {
		return num1 - num2;
	}
	double subtract(double num1, double num2) {
		return num1 - num2;
	}
	double subtract(int num1, double num2) {
		return double(num1) - num2;
	}
};

class Multiply {
public:
	int multiply(int num1, int num2) {
		return num1 * num2;
	}

	double multiply(double num1, double num2) {
		return num1 * num2;
	}

	double multiply(int num1, double num2) {
		return double(num1) * num2;
	}
};

class Divide {
public:
	int divide(int num1, int num2) {
		return num1 / num2;
	}

	double divide(double num1, double num2) {
		return num1 / num2;
	}

	double divide(int num1, double num2) {
		return double(num1) / num2;
	}
};