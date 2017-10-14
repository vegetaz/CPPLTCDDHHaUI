//Câu 1:(4 điểm) Viết chương trình thực hiện các yêu cầu sau:
//-Nhập số thực x
//-Tính và hiển thị lên màn hình giá trị của biểu thức sau:
//y = 5cos(3x+2) - ln(x^2 + 2) khi 2 < x <3
//Và y = (x + 3)^2 khi x >=3
//y = 1 với các trường hợp còn lại
//Chương trình được lưu với tên file là CA1_B1.CPP

#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    float x,f;
    cout<<"Nhap gia tri cua x: ";
    cin >> x;

    if(x <= 2)
        cout<<"Gia tri cua bieu thuc F=1";
    else
    {
        if(x > 2 && x < 3)
        {
            f = ((5*cos(3*x + 2)) - (log(x*x + 2)));
            cout<<"Gia tri cua bieu thuc F la: "<<f;
        }
        else
        {
            f=pow((x + 3),2) +2;
            cout<<"Gia tri bieu thuc la F= "<<f;
        }
    }
    getch();
    return 0;
}
