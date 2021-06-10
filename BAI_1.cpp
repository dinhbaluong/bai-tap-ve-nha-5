// BAI_1.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*Bài 1: Nhập ngẫu nhiên 20 phần tử của mảng:
-Phần tử số chẵn lớn nhất và vị trí của nó
- Phần tử số lẻ lớn nhất và vị trí của nó
- Sắp xếp các phần tử số chẵn từ lớn đến bé và từ bé đến lớn
- Sắp xếp tương tự với phần tử số lẻ
*/

#include <iostream>
using namespace std;
int main()
{
	int mang[20], mangchan[20], mangle[20], j = 0, k = 0;
	cout << " mang chua 20 phan tu : \n";
	for (int i = 0; i < 20; i++)
	{
		mang[i] = rand() % 100;
		cout << mang[i]<<"\t";
	}
	cout << "\n";
	for (int i = 0; i < 20; i++)
	{
		if (mang[i] % 2 == 0)
		{
			mangchan[j] = mang[i];
			j++;
		}
		else
		{
			mangle[k] = mang[i];
			k++;
		}
	}
	//----------tim phan tu so chan lon nhat-----------// 
	int maxchan = mangchan[0];
	for (int i = 0; i <= j; i++)
	{
		if (mangchan[i] > maxchan)
		{
			maxchan = mangchan[i];
		}
	}
	cout << " so chan lon nhat la : " << maxchan<<"\n";
	//----------tim phan tu so le lon nhat-----------// 
	int maxle = mangle[0];
	for (int i = 0; i <= k; i++)
	{
		if (mangle[i] > maxle)
		{
			maxle = mangle[i];
		}
	}
	cout << " so le lon nhat la : " << maxle<<"\n";
	//Sắp xếp các phần tử số chẵn từ lớn đến bé 
	cout << " sap xep cac so chan theo chieu tu lon den be : ";
	for (int i = 0; i < j; i++)
	{
		for (int n = i + 1; n <= j; n++)
		{
			if (mangchan[i] < mangchan[n])
			{
				swap(mangchan[i], mangchan[n]);
			}
		}
	}
	for (int i = 0; i <= j; i++)
	{
		cout << mangchan[i] << "\t";
	}
	cout << "\n";
	//Sắp xếp các phần tử số le từ lớn đến bé 
	cout << " sap xep cac so le theo chieu tu lon den be : ";
	for (int i = 0; i < k; i++)
	{
		for (int n = i + 1; n <= k; n++)
		{
			if (mangle[i] < mangle[n])
			{
				swap(mangle[i], mangle[n]);
			}
		}
	}
	for (int i = 0; i <= k; i++)
	{
		cout << mangle[i] << "\t";
	}
	cout << "\n";
}

