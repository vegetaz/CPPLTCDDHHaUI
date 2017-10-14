#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

int giaithua(int n)
{
	int i, gt = 1;
	for (i = 0; i <= n; ++i)
	{
		gt *= i;
	}
	return gt;
}

int tohop(int n, int k)
{
	int s;
	s = giaithua(n) / (giaithua(k) * giaithua(n - k));
	return s;
}

int main()
{
	//clrscr();
	int n, k, d;
	printf("\nNhap n, Nhap k");
	scanf("%d%d", &n, &k);

	if (n < 0)
	{
		printf("\nNhap lai n");
		scanf("%d", &n);
	}

	if (k < 0 || k > n)
	{
		printf("\nNhap lai k");
		scanf("%d", &k);
	}

	d = tohop(n, k);
	printf("\nTo hop chap k cua n la%d", d);
	getch();
	return 0;
}