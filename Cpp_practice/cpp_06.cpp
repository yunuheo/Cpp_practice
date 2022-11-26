#include <iostream>

using namespace std;

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	for (int i = 1; i < 10; i++)
	{
		a = 0;
		b = 1;
		for (int j = 1; j <= i; j++) {

			cout << b << ",";

			c = b;
			b = b + a;
			a = c;
			
		}
		cout << endl;
	}

	return 0;
}
