/*
Câu 2(6 điểm): Viết chương trình thực hiện các yêu cầu sau:
- Nhập vào số nguyên dương n thoả mãn 1 <= n <= 50
- Nhập vào một mảng có n số nguyên, hiển thị mảng sau khi nhập.
- Nhập số nguyên x thoả mãn x lớn hơn phần tử lớn nhất của mảng, tính và hiển thị lên màn hình trung bình cộng của các phần tử là ước của x.
- Tính và hiển thị các phần tử chẵn không chia hết cho 5
- Chương trình được lưu với tên file CA3_B2.CPP
 */

#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

float A[50];

int main(int argc, char const *argv[])
{
	int n, d = 0, max;
	float s = 0, tbc, x;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	if (n >= 1 && n <= 50)
	{
		cout << "Nhap vao cac gia tri cua mang" << endl;
		for (int i = 0; i < n; ++i)
		{
			cout << "A[" << i << "] = ";
			cin >> A[i];
		}

		cout << "\nMang da nhap la:"<<endl;
		{
			for (int i = 0; i < n; ++i)
			{
				cout << " " << A[i];
			}
		}

		cout << "\nNhap vao so thuc x: ";
		cin >> x;

		max = A[0];
		for (int i = 0; i < n; ++i)
		{
			if (A[i] > max)
			{
				max = A[i];
				return max;
				cout << "\nPhan tu lon nhat cua mang la: " << max;
			}
			
			
			else 
				{
					cout << "\nNhap lai x, x phai lon hon max!";
				}
		}

		cout << "\nTrung binh cong cac phan tu la uoc cua x = " << x << "la: " << tbc;
	}
	else
	{
		cout << "n nhap vao khong thoa man yeu cau!~";
	}
	getch ();
	return 0;
}