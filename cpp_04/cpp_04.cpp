#include <iostream>

using namespace std;

int main() {

	int x = 1;
	int y = 2;
	int z = 0;

	z = x > y ? x : y;  //���Ǻ� ���� ������ (?, :)

	cout << "x�� y�� �� ū ���� : " << z << endl;

	return 0;
}