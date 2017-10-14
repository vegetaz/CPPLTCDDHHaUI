#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

void sapxep(int a[], int n)
{
	int i, j, tam;
	for (i = 1; i < n - 1; ++i)
	{
		if (a[i] >= 0 || a[i] < 0)
		{
			for (j = i + 1; j < n; ++j)
			{
				if (a[i] > a[j])
				{
					tam = a[i];
					a[i] = a[j];
					a[i] = tam;
				}
			}
		}
	}
}

int main()
{
	int i, n, a[50];
	//clrscr();
	printf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		printf("\nPhan tu thu %d=", i);
		scanf("%d", &a[i]);
	}
	sapxep(a, n);
	for (i = 0; i < n; ++i)
	{
		printf("%5d", a[i]);
	}
	getch();
	return 0;
}