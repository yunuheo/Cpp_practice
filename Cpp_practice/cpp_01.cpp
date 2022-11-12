#include <iostream>

using namespace std;

int main() {

	int sum1 = 0;
	int sum2 = 0;

	int one = 1;
	int two = 2;
	
	//기초적인 for문
	for (int i = 0; i < 5; i++) {
		sum1 += one;
		sum2 += two;
	}
	
	#c++에서의 출력방법
	cout << "ÇÕ»ê °á°ú: " << sum1 << "," << sum2 << endl;

	return 0;
}
