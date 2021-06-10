// BAI__4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Bài 4: Cho 1 mảng có 20 phần tử nhập ngẩu nhiên:
- TÌm vị trí các phần tử lớn nhất mảng ( có giá trị giống nhau)
- TÌm vị trí các phần tử bé nhất mảng ( có giá trị giống nhau)*/

#include <iostream>
using namespace std;
int main()
{
    int mang[20], max, min;
    cout << " nhap mang  : ";
    cout << "\n";
    for (int i = 0; i < 20; i++)
    {
        cout << "mang[" << i << "] = ";
        cin >> mang[i];
        cout << "\n";
    }
    cout << "mang chua 20 phan tu ngau nhien la : ";
    for (int i = 0; i < 20; i++)
    {
        cout << mang[i] << "\t";
    }
    cout << "\n";
    cout << " vi tri cac phan tu lon nhat co trong mang la : \n";
    //TÌm gia tri lon nhat co trong mang
    max = mang[0];
    for (int i = 0; i < 20; i++)
    {
        if (mang[i] > max)
        {
            max = mang[i];
        }
    }
    // tim vi tri cac gia tri = gia tri max vua tim duoc co trong mang
    for (int i = 0; i < 20; i++)
    {
        if (mang[i] == max)
        {
            cout << "vi tri thu : " << i << " trong mang\n";
        }
    }
    cout << " vi tri cac phan tu be nhat co trong mang la : \n";
    //TÌm gia tri nho nhat co trong mang
    min = mang[0];
    for (int i = 0; i < 20; i++)
    {
        if (mang[i] < min)
        {
            min = mang[i];
        }
    }
    // tim vi tri cac gia tri = gia tri min vua tim duoc co trong mang
    for (int i = 0; i < 20; i++)
    {
        if (mang[i] == min)
        {
            cout << "vi tri thu : " << i << " trong mang\n";
        }
    }
    return 0;
}
