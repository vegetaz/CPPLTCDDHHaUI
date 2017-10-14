/*
Câu 2(6 điểm): Viết chương trình thực hiện các yêu cầu sau:
- Nhập vào số nguyên dương n thoả mãn: 4 <= n <= 50
- Nhập 1 mảng có n số thực, hiển thị mảng sau khi nhập!
- Nhập số thực x, tính và hiển thị lên màn hình trung bình cộng của các phần tử có giá trị tuyệt đối khác x.
- Tìm và hiển thị lên màn hình vị trí của các phần tử có giá trị bằng giá trị của phần tử nhở nhất trong mảng.
- Chương trình được lưu với tên file là CA3_B2.CPP
 */

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

float A[46];

int main(int argc, char const *argv[])
{
	int n, d = 0;
	float x, min, tbc = 0, s = 0;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;

	if (4 <= n && n <= 50)
	{
		cout << "\nNhap vao cac gia tri cua mang:" << endl;
		for (int i = 0; i < n; ++i)
		{
			cout << "A[" << i << "] = ";
			cin >> A[i];
		}

		cout << "\nMang da nhap la:";
		for (int i = 0; i < n; ++i)
		{
			cout << " " << A[i];
		}

		cout << "\nNhap vao so thuc x: ";
		cin >> x;

		cout << "\nTrung binh cong cua cac phan tu co gia tri tuyet doi khac x = " << x << " la: ";
		for (int i = 0; i <= n; ++i)
		{
			if (fabs(A[i]) != x)
			{
				s += A[i];
				d++;
				tbc = s/d;
			}
		}
		cout << tbc;

		min = A[0];
		cout << "\nVi tri cac phan tu co gia tri bang gia tri cua phan tu nho nhat trong mang:" << endl;
		for (int i = 0; i < n; ++i)
		{
			if (A[i] == min)
			{
				cout << "A[" << i << "]" << endl;
			}
		}
	}
	else
	{
		cout << "So n nhap vao khong thoa man~!";
	}
	getch ();
}