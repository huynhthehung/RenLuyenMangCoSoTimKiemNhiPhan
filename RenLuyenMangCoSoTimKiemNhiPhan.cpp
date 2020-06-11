// RenLuyenMangCoSoTimKiemNhiPhan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void NhapMang(float F[], int n);
void XuatMang(float F[], int n);
int BinarySearchGiamDan(float F[], int n,float x);
int main()
{
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    float F[100];
    NhapMang(F, n);
    cout << "Mang sau khi nhap: \n";
    XuatMang(F, n);
    cout << "Nhap so can tim: ";
    float x;
    cin >> x;
    float kq = BinarySearchGiamDan(F, n, x);

    return 0;
}

void NhapMang(float F[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "F[" << i << "]=";
        cin >> F[i];
    }
}

void XuatMang(float F[], int n)
{
    for (int i = 0; i < n; i++)
        cout << F[i] << "\t";
}

int BinarySearchGiamDan(float F[], int n,float x)
{
    int left = 0;
    int right = n - 1;
    int mid = (left + right) / 2;
    while (left <= right)
    {
        if (F[mid] == x)
            return mid;
        if (F[mid] > x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
