#include <iostream>
#include <cmath>
using namespace std;

double calculatePerimeter(double hight, double wight);
double calculateArea(double hight, double wight);
double calculateDiagonal(double hight, double wight);

int main() {
	double hight;
	double wight;
	double perimeter;
	double area;
	double diagonal;
	while (true) {
		cout << "Enter hight: ";
		cin >> hight;
		cout << "Enter wight: ";
		cin >> wight;
		cout << "Let's get to know the rectangle better!\n";
		perimeter = calculatePerimeter(hight, wight);
		area = calculateArea(hight, wight);
		diagonal = calculateDiagonal(hight, wight);
		cout << "Let's denote the height as a and the width as b, then:\n";
		cout << "p = (a + b) * 2 = " << "(" << hight << " + " << wight << ") * 2 = " << perimeter << endl;
		cout << "s = (a * b) = " << hight << " * " << wight  << " = " << area << endl;
		cout << "d = sqr(a^2 + b^2) = " << "sqr(" << hight << "^2" << " + "<< wight << "^2" << ") = " << diagonal << endl;
	}
	return 0;
}

double calculatePerimeter(double hight, double wight) {
	return ((hight + wight) * 2);
}

double calculateArea(double hight, double wight) {
	return (hight * wight);
}

double calculateDiagonal(double hight, double wight) {
	return (pow(pow(hight, 2) + pow(wight, 2), 0.5));
}