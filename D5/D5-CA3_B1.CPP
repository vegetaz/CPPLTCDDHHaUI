/*
Câu 1(4 điểm): Viết chương trình thực hiên các yêu cầu sau:
- Nhập vào số nguyên dương n thoả mãn: 5 <= n. Và số thực x khác 0.
- Tính và hiển thị ra màn hình tổng của dãy S:
S = 1 + x / (n + 1) + (x ^ 2) / (n + 2) + ... + (x ^ n)/(n + n)
- Chương trình được lưu với tên file là CA3_B1.CPP
 */

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	int n, i;
	float x, s = 0, t;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	cout << "\nNhap vao so thuc x: ";
	cin >> x;
	if (n < 5)
	{
		cout << "So n nhap vao khong thoa man yeu cau!";
	}
	else if (x == 0)
	{
		cout << "So x nhap vao khong thoa man yeu cau!";
	}
	else
	{
		for (i = 0; i <= n; ++i)
		{
			s = s + (pow(x, i) / (n + i));
			t = 1 + s;
		}
		cout << "Tong cua day can tinh la: " << t;
	}
	return 0;
}