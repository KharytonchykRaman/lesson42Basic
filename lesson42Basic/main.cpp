#include <iostream>

using namespace std;

void init(int* pointer, int size) {
	cout << "Input array elements : ";
	for (int i = 0; i < size; i++)
	{
		cin >> *(pointer + i);
	}
}

void init_second(int* pointer, int size) {
	cout << "Input array elements : ";
	for (int i = 0; i < size; i++)
	{
		cin >> pointer[i];
	}
}

void print(int* pointer, int size) {
	cout << "Array elements : ";
	for (int i = 0; i < size; i++)
	{
		cout << *(pointer + i) << " ";
	}
}

int get_max(int* pointer, int size) {

	int max = *pointer;

	for (int i = 0; i < size; i++)
	{
		if (pointer[i] > max) {
			max = pointer[i];
		}
	}
	return max;
}

int main() {

	int* pNum = new int;
	*pNum = 10;

	cout << pNum << " is address to " << *pNum;

	delete pNum;

	int size;

	do {
		cout << "\nInput size of array: ";
		cin >> size;
	} while (size <= 0);

	int* pArray = new int[size];

	/**pArray = 10;
	*(pArray + 1) = 20;
	*(pArray + 2) = 30;
	*(pArray + 3) = 40;
	*(pArray + 4) = 50;*/

	init_second(pArray, size);
	print(pArray, size);

	cout << "\nMax number is " << get_max(pArray, size);

	delete[] pArray;

	return 0;
}