#include <iostream>	
#include <cmath>
#include <ctime>
using namespace std;

// Tyler Caseria
// CS 172
// ex01_03
// 6 February 2017

void add(int& a) {
	int more = a + 1;
	cout << "Your original integer plus one is " << more << "." << endl;
}

void sums(int a, int b) {
	int sum = a + b;
	cout << "Random integer adder!" << endl;
	cout << "Your first random integer is: " << a << "." << endl;
	cout << "Your second random integer is: " << b << "." << endl;
	cout << "The sum of your integers is " << sum << "." << endl;
}

void doubler(int x) {
	cout << "Doubler!!" << endl;
	cout << "Original number: " << x << endl;
	int y;
	y = 2*x;
	cout << "New number: " << y << endl;
	
}

void ex03() {

	int number;
	
	do {
		cout << "Enter a number between 1 and 10: ";
		cin >> number;
		cout << endl;
		
		if ((number >= 1) && (number <= 10))
			break;
		
	} while (true);

	int sum=0;
	for (int counter = 1; counter <= number; counter++) {
		sum = sum + pow(counter, 3);
	}
	cout << "The sum of the cubes from 1 to " << number << " is " << sum << "." << endl;
	int counter2=1;
	do { 
		cout << "* ";
		counter2++;
	} while (counter2 <= number);
	cout << endl;
	for (int counter3 = 1; counter3 <= 40; counter3++) {
		if (counter3 % 2 == 0)
			cout << counter3 << endl;
	}
	doubler(number);
	srand(time(NULL));
	int a = rand() % 100;
	int b = rand() % 100;
	sums(a, b);
	add(number);

}

int main() {
	ex03();
	int one;
	cout << "Press 1, then press enter to exit." << endl;
	cin >> one;
	return 0;
}