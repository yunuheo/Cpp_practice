#include <iostream>
#include <string>   //String은 일반적인 자료형이 아니라 클래스이기 때문에 전처리과정이 필요.

using namespace std;

int main() {

	int x = 10;
	int y = 2;

	int sum = x + y;

	if (x < y)
		cout << "x가 y보다 작습니다." << endl;
	else
		cout << "y가 x보다 작습니다." << endl;


	return 0;
}