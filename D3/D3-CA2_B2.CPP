/*
Câu 2(6 điểm): Viết chương trình thực hiện các yêu cầu sau:
- Nhập vào số nguyên dương n thoả mãn: 5 <= n <= 100
- Nhập một mảng có n số nguyên, hiển thị mảng sau khi nhập ra màn hình
- Tính và hiển thị ra màn hình trung bình cộng của các phân tử chẵn không chia hết cho 3
- Tìm và hiển thị lên màn hình các phần tử có giá trị khác giá trị nhỏ nhất của mảng
- Chương trình được lưu với tên file CA2_B2.CPP
*/

#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int A[95];

int main()
{
    int n, i, d = 0, t = 0, min;
    float tbc;
    cout << "Nhap so phan tu cho mang: ";
        cin >> n;
    cout << "Nhap cac gia tri cua mang:"<<endl;

    if (5 <= n <= 100)
    {
        for (i = 0; i < n; i++)
        {
            cout <<"A[" << i << "]= ";
                cin >> A[i];
        }
        cout << "\nMang vua nhap: ";
            for (i = 0; i < n; i++)
            {
                cout << " " << A[i];
            }
    }

    if (A[i] % 2  == 0)
    {
        if (A[i]%3 != 0)
        {
            t = t + A[i];
            d++;
        }
    }

    tbc = (float)t/d;
    cout << "\nTrung binh cong cac so chan khong chia het cho 3"<<tbc;

    min = A[0];
    for (i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    cout << "\nCac phan tu co gia tri khac gia tri be nhat: ";
    for (i = 0; i < n; i++)
    {
        if (A[i] = min)
        {
            cout << "A[" << i << "] ";
        }
    }

    return 0;
}
