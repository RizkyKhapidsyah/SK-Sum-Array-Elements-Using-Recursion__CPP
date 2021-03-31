#include <iostream>
#include <conio.h>


using namespace std;

int arraySum(int[], int);

int main() {
	int sum = 0;

	//Create an array with some values in it.
	int myArray[] = { 1, 2, 3, 4, 5, 6, 7 };

	//print the array
	for (int i = 0; i < 7; i++) {
		cout << " " << myArray[i];
	}

	// Display the sum of the values by calling the recursive function.
	sum = arraySum(myArray, 7);

	cout << endl << " The sum of the array elements is: " << sum << endl;

	_getch();
	return 0;
}

int arraySum(int arr[], int count) {
	static int index = 0;
	static int sum = 0;

	sum += arr[index];

	if (index == count - 1) {
		return sum;
	} else {
		index++;
		arraySum(arr, count);
	}
}