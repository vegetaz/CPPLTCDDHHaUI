/*
Câu 1(4 điểm): Viết chương trình thực hiện các yêu cầu sau:
- Nhập vào số nguyên dương n thoả mãn n >= 10 và nhập số thực x <= 100
- Tính và hiển thị lên màn hình tổng của dãy S = 2012 + (x/2) + (x/3) + ... + (x/(n+1))
- Chương trình được lưu với tên file CA2_B1.CPP
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int i, n;
    float x,s;
    cout << "Nhap vao gia tri cua n: ";
        cin >> n;
    cout << "Nhap vao gia tri cua x: ";
        cin >> x;

    if (10 <= n && x <= 100)
    {
        for (i =1; i <= n; i++)
        {
            s = 2012 + x/(i++);
        }
        cout <<"Gia tri cua bieu thuc S la: "<<s;
    }
    else
    {
        cout << "x va n nhap vao khong dung dieu kien!";
    }

_getch();
}
