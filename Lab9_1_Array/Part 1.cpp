/*
Part 1.cpp
Michael Seveigny
10/30/2025
Description: Write a program that initializes an array with ten 4-digit random integers (obtained from the rand() function)
and then prints five lines of output, containing:
• Every element in order of appearance in the array.
• Every element at an even index.
• Every even element.
• All elements in reverse order.
• Only the first and last element.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
	// Declare constant and array
	const int Size = 10;
	int arr[Size];

	// Seed the random number generator
	srand((unsigned)time(0));

	// Initialize array with ten 4-digit numbers
	for (int i = 0; i < Size; i++) {
		arr[i] = rand() % 9000+1000; // Generates random 4-digit integer
	}

	// Cout every random number in order
	cout << "The random integers: ";
	for (int i = 0; i < Size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Cout even index numbers
	cout << "Even indices: ";
	for (int i = 0; i < Size; i += 2) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Cout even numbers
	cout << "Even values: ";
	for (int i = 0; i < Size; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	// Cout reversed order
	cout << "Reversed order: ";
	for (int i = Size - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;

}
