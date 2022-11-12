#include <iostream>

using namespace std;

int main() {

	const int ARRAY_SIZE = 3;

	int founding[ARRAY_SIZE];
	founding[0] = 918;
	founding[1] = 1392;
	founding[2] = 1948;
	//배열을 이용하여 건국연도 출력
	cout << "고려 건국연도: " << founding[0] << endl;
	cout << "조선 건국연도: " << founding[1] << endl;
	cout << "한국 건국연도: " << founding[2] << endl;

	return 0;
}
