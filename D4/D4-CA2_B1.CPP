/*
Câu 1(4 điểm): Viết chương trình thực hiện các yêu cầu sau:
- Nhập vào số nguyên dương n thoả mãn: 5 <= n, và số thực 0 < x.
- Tính và hiển thị lên màn hình tổng của dãy S:
S = 5 - (1/(x +1)) + (2/(x+2)) + ... +  (n/(x+n+1))
- Chương trình được lưu với tên CA2_B1.CPP
*/

#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int i = 0, n;
    float s = 0, x, t;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    cout << "Nhap vao so thuc x: ";
    cin >> x;

    if (n < 5)
    {
        cout << "n nhap vao khong thoa man yeu cau!" << endl;
    }
    else if (x <= 0)
    {
        cout << "x nhap vao khong thoa man yeu cau!" << endl;
    }
    else
    {
        for (i = 2; i < n - 1; i++)
        {
            s = s + (i / (x + i));
        }
        t = 5 - (1 / (x + 1)) + s + (n / (x + n + 1));
        cout << "Gia tri cua bieu thuc S la: " << t << endl;
    }
}
