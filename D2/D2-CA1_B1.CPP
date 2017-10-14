/*
Câu 1(4 điểm): Gọi n là số kw/h điện tiêu thụ của một hộ gia đình trong một tháng. Viết chương trình thực hiện các yêu cầu sau:
Nhập số nguyên n
Nếu n dương thì tinh tiền điện tiêu thụ của gia đình trong tháng với n(kw/h), với giá 1kw/h được quy định như sau:
    Từ kw/h thứ 1 đến 100 có giá trị mỗi kw/h là 500 đồng
    Từ kw/h thứ 101 đến 200 có giá 700 đồng
    Từ kw/h thứ 201 trở đi có giá 1000 đồng
Chương trình được lưu với tên là CA1_B1.CPP
*/

#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

main()
{
    int n, tien;
    cout <<"Nhap vao so dien da su dung: ";
    cin >> n;

    if (n <= 0)
        cout <<"So dien da nhap khong dung. Xin moi nhap lai\n";
    else
    {
        if (n < 101)
            {
                tien = n * 500;
            }

            else if (n < 201)
                {
                    tien = n * 700;
                }

                else if (n > 201)
                    {
                        tien = n * 1000;
                    }

        cout << "\nSo tien phai tra la: " << tien <<" dong.";
    }
    getch();
}
