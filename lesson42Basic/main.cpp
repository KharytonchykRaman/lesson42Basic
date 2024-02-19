#include <iostream>

using namespace std;

int main() {

	int* pNum = new int;
	*pNum = 10;

	cout << pNum << " is address to " << *pNum;

	delete pNum;

	return 0;
}