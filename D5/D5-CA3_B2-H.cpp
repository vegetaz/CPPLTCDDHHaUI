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
void NhapMang(int n);
float TrungBinhCong(int n, int x);
void XuatMang(int n);
float TimMin(int n);
void ViTriMin(int n, int min);

void NhapMang(int n)
{
	cout << "\nNhap vao cac gia tri cua mang:" << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
}

void XuatMang(int n)
{
	cout << "Mang da nhap la:";
	for (int i = 0; i < n; ++i)
	{
		cout << " " << A[i];
	}
}

float TrungBinhCong(int n, int x)
{
	float tbc = 0, s = 0, d = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] != fabs(x))
		{
			s += A[i];
			d++;
		}
	}
	return tbc = s / d;
}

float TimMin(int n)
{
	float min;
	min = A[0];
	for (int i = 0; i < n; ++i)
	{
		if (A[i] == min)
		{
			min = A[i];
		}
	}
	return min;
}

void ViTriMin(int n, int min)
{
	cout << "\nVi tri cac  phan tu co gia tri nho nhat la:\n";
	for (int i = 0; i < n; ++i)
	{
		if (A[i] == min)
		{
			cout << "A[" << i << "]" << endl;
		}
	}
}

int main(int argc, char const *argv[])
{
	int n, d = 0;
	float x, min, tbc = 0, s = 0;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	if (4 <= n && n <= 50)
	{
		NhapMang(n);
		XuatMang(n);
		cout << "\nNhap vao so thuc x: ";
		cin >> x;
		tbc = TrungBinhCong(n, x);
		cout << "Trung binh cong cua cac phan tu khac " << x << " la: " << tbc << endl;
		min = TimMin(n);
		ViTriMin(n, min);
	}
	else
	{
		cout << "So n nhap vao khong thoa man~!";
	}
	_getch();
	return 0;
}
