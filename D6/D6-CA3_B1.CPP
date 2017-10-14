/*
Câu 1(4 điểm): Viết chương trình thực hiện các yêu cầu sau:
- Nhập số nguyên dương n thoả mãn 10 >= n >= 0 và nhập số thực x.
- Tính và hiển thị lên màn hình tổng của dãy:
S = (1 / n) + ((x^2) / n) + ((x^4) / n) + ... + ((x^2n) / n) - 205
- Chương trình được lưu với tên file CA3_B1.CPP
 */

#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	float x;

	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;

	if (n >= 0 && n <= 10)
	{
		cout << "Nhap vao so thuc x: ";
		cin >> x;

		float s = (1 / n) - 205;
		for (int i = 0; i < n; ++i)
		{
			s += ((pow(x, 2*i))/n);
		}
		cout << "\nTong cua day can tim la: " << s << endl;
	}
	else
	{
		cout << "So n nhap vao khong thoa man yeu cau~!";
	}
	return 0;
}