/*
Câu 2(6 điểm): Viết chương trình thực hiện các yêu cầu sau:
- Nhập vào số nguyên dương n, thoả mãn: 1 <= n <= 40
- Nhập vào một mảng có n số thực, hiển thị mảng sau khi nhập
- Tính và hiển thị lên màn hình trung bình cộng của các phần tử khác giá trị nhỏ nhất của mảng
- Nhập số thực x, tìm và hiển thị lên màn hình các phần tử có giá trị tuyệt đối khác giá trị của x
- Chương trình được lưu với tên CA2_B2.CPP
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

float A[40];

int main()
{
    int n, i, d = 0;
    float x, tbc, min, s = 0;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    if (1 <= n && n <= 40)
    {
        cout << "Nhap vao cac phan tu cua mang: " << endl;
        for (i = 0; i < n; i++)
        {
            cout << "A[" << i << "]= ";
            cin >> A[i];
        }
        min = A[0];
        cout << "Mang vua nhap la: " << endl;
        for (i = 0; i < n; i++)
        {
            cout << " " << A[i];
            if (A[i] < min)
            {
                min = A[i];
            }
            if (A[i] != min)
            {
                s += A[i];
                d++;
            }
        }
        tbc = s / d;
        cout << "\nGia tri nho nhat cua mang A la: " << min;
        cout << "\nTrung binh cong cac so khac gia tri nho nhat trong mang: " << tbc;
        cout << "\nNhap so x: ";
        cin >> x;
        cout << "\nCac phan tu khac gia tri x la: ";
        for (int i = 0; i < n - 1; ++i)
        {
            if (A[i] != x)
            {
                cout << " " << A[i];
            }
        }
    }
    else
    {
        cout << "So n nhap vao khong thoa man!" << endl;
    }
    return 0;
}
