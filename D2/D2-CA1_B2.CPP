/*
Câu 2(6 điểm): Viết chương trình thực hiện các yêu cầu sau:
- Nhập vào số nguyên dương n thoả mãn (3 <= n <= 50)
- Nhập 1 mảng có n số thực, hiển thị mảng sau khi nhập
- Tính và hiển thị lên màn hình trung bình cộng của các phần tử có giá trị tuyệt đối lớn hơn 10.
- Nhập số thực x, tìm và hiển thị lên màn hình các phần tử có giá trị khác giá trị của x.
- Chương trình được lưu với tên file là CA1_B2.CPP
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;
float A[47];
main()
{
    int n, i, d = 0;
    float t = 0, tbc, x;
    cout << "Nhap gioi han cua mang: ";
    cin >> n;
    cout << "Nhap cac thua so trong mang: "<<endl;

    if (3 <= n && n <= 50)
    {
        for(i = 0; i < n; i++)
        {
            cout << "A[" << i << "]= ";
            cin >> A[i];
        }
            cout << "Mang vua nhap: ";
                for (i = 0; i < n; i++)
                {
                    cout << "   " <<A[i];
                }

        for (i = 0; i < n; i++)
        {
            if (fabs(A[i]) > 10)
            {
                t += A[i];
                d ++;
            }
        }

        tbc = t/d;
        cout << "\nTong cac so co |x| > 10 la: " << t << "  Va co trung binh cong la: " << tbc <<".";
        cout << "\nNhap gia tri can so sanh x: ";
        cin >> x;
        cout << "\nCac so co gia tri khac x: "<<endl;

        for (i = 0; i < n; i++)
        {
            if (A[i] != x)
            {
                cout << "A[" << i << "]= " << A[i] << endl;
            }
        }
    }
    else
        cout << "So nhap vao khong thoa man yeu cau!";
    _getch();
}
