// BAI_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Bài 2: Tìm các số chính phương trong mảng 20 phần tử

#include <iostream>
using namespace std;
int main()
{
	int mang[20], n;
	float k;
	cout << " mang chua 20 phan tu la : ";
	for (int i = 0; i < 20; i++)
	{
		mang[i] = rand() % 100;
		cout << mang[i] << "\t";
	}
	cout << "\n";
	cout << " cac so chinh phuong co trong mang la : ";
	for (int i = 0; i < 20; i++)
	{
		k = pow(mang[i], 0.5);
		n = k;
		if ((k - n) == 0)
		{
			cout << mang[i] << "\t";
		}
	}
	return 0;
}
	
