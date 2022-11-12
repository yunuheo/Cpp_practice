#include <iostream>
#include <bitset>

using namespace std;

int main() {
	//비트연산자 이해하기
	bitset<8> bit1;
	bit1.reset(); // 0000 0000
	bit1 = 126; // 0111 1111

	bitset<8> bit2;
	bit2.reset();
	bit2 = 0x20; // 32
	
	bitset<8> bit3 = bit1 & bit2;
	bitset<8> bit4 = bit1 | bit2;
	bitset<8> bit5 = bit1 ^ bit2;
	bitset<8> bit6 = ~bit1;
	bitset<8> bit7 = bit2 << 1;
	bitset<8> bit8 = bit2 >> 1;

	cout << "================위에 결과를 순서대로 출력===================" << endl;
	cout << bit3 << "," << bit3.to_ulong() << endl;
	cout << bit4 << "," << bit4.to_ulong() << endl;
	cout << bit5 << "," << bit5.to_ulong() << endl;
	cout << bit6 << "," << bit6.to_ulong() << endl;
	cout << bit7 << "," << bit7.to_ulong() << endl;
	cout << bit8 << "," << bit8.to_ulong() << endl;


	return 0;
}
