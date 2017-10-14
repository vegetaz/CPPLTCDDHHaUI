//Câu 2: (6 điểm) Viết chương trình thực hiện các yêu cầu sau:
//- Nhập vào số nguyên dương n thoả mãn (5 <= n <= 100)
//- Nhập vào một mảng có n số nguyên, hiển thị mảng sau khi nhập
//- Tính và hiển thị lên màn hình các phần tử có giá trị bằng giá trị của phần tử lớn nhất trong mảng
//- Chương trình được lưu với tên file là CA1_B2.CPP

#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int A[95];
int n;

void NhapMang(int a[], int n)
{
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }
}

void XuatMang(int n)
{
    cout << "Cac phan tu cua mang la:\n";
    for (int i = 0; i < n; i++)
        cout << "A[" << i << "]= " << A[i] << "\n";
}

void GTLN(int i)
{
    cout << "Cac so co cung gia tri voi so lon nhat la: ";
    for (i = 0; i <= n; i++)
    {
        if (A[i] == max)
            cout << "A[" << i << "]";
    }
}

int main()
{
    int a[95];
    cout << "Nhap gia tri cua mang: ";
    cin >> n;
    NhapMang(a, n);
    XuatMang(n);
    getch();
}
