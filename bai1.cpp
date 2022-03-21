#include <iostream>
using namespace std;

int tongUocSo(int x) {
	int temp = 0;
	for (int i = 1; i <= (x/2); i++) {
		if (x % i == 0) temp += i;
	}
	return temp;
}

void compare(int x, int y) {
	cout << "Tong cac uoc cua " << x << " la: 1";
	for (int i = 2; i <= (x/2); i++) {
		if (x % i == 0) cout << " + " << i ;
	}
	cout << " = " << tongUocSo(x) << endl;
	
	cout << "Tong cac uoc cua " << y << " la: 1";
	for (int i = 2; i <= (y/2); i++) {
		if (y % i == 0) cout << " + " << i ;
	}
	cout << " = " << tongUocSo(y) << endl;
}

void soBanBe(int x, int y) {
	int ssX = tongUocSo(x);
	int ssY = tongUocSo(y);
	if ((ssX == y) && (ssY == x))   cout << x << " va " << y << " la cap so ban be!" << endl;
	else    cout << x << " va " << y << " khong phai cap so ban be!" << endl;
	compare(x, y);
}

int main() {
	int x, y;
	cout << "Nhap vao x, y: ";
	cin >> x >> y;
    soBanBe(x, y);
	return 0;
}