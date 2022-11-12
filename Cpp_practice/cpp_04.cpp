#include <iostream>

using namespace std;

int main() {

	int x = 1;
	int y = 2;
	int z = 0;

	z = x > y ? x : y;  //조건부 삼항 연산자 (?, :)

	cout << "x와 y중 더 큰 값은 : " << z << endl;

	return 0;
}
