// BAI_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Bài 5: Thêm 1 phần tử x vào mảng sao cho mảng vẫn được sắp xếp theo thứ tự tăng  dần ( Mảng có 30 phần tử ngẫu nhiên)

#include <iostream>
using namespace std;
int main()
{
	int mang[30], x;
	cout << " mang chua 29 phan tu ngau nhien la : ";
	for (int i = 0; i < 29; i++)
	{
		mang[i] = rand() % 100;
		cout << mang[i] << "\t";
	}
	cout << "\n";
	//sap xe mang chua 29 phan tu 
	cout << " mang sap xep theo thu tu tang dan 29  phan tu la : ";
	for (int i = 0; i < 28; i++)
	{
		for (int j = i + 1; j <= 28; j++)
		{
			if (mang[i] > mang[j])
			{
				swap(mang[i], mang[j]);
			}
		}
	}
	for (int i = 0; i < 29; i++)
	{
		cout << mang[i] << "\t";
	}
	//nhap gia tri x : 
	cout << "\n";
	cout << " nhap x = ";
	cin >> x;
	cout << "\n";
	mang[29] = x;
	for (int i = 0; i < 30; i++)
	{
		if (mang[i] > mang[29])
		{
			swap(mang[i], mang[29]);
		}
	}
	cout << " mang sap xep theo thu tu tang dan 30  phan tu la : ";
	for (int i = 0; i < 30; i++)
	{
		cout << mang[i] << "\t";
	}
	return 0;
}

