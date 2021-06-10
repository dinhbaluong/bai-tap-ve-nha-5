// BAI_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Bài 3: Kiểm tra trong 1 mảng có bao nhiêu số nguyên tố

#include <iostream>
using namespace std;
int main()
{
	int mang[20], couter = 0;
	cout << " nhap mang  : ";
	cout << "\n";
	for (int i = 0; i < 20; i++)
	{
		cout << "mang[" << i << "] = ";
		cin >> mang[i];
		cout << "\n";
	}
	cout << " cac so nguyen to co trong mang la : ";
	for (int i = 0; i < 20; i++)
	{
		int kt = 0;
		if (mang[i] >= 2)
		{
			for (int j = 2; j < mang[i]; j++)
			{
				if (mang[i] % j == 0)
				{
					kt = 1;
				}
			}
			if (kt == 0)
			{
				couter++;
				cout << mang[i] << "\t";
			}
		}
	}
	cout << "trong mang co tat ca : " << couter << " so nguyen to ";
	return 0;
}

