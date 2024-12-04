#include "GiaSuc.h"
#include "Bo.h"
#include "De.h"
#include "Cuu.h"
#include <iostream>

using namespace std;

int main()
{
    GiaSuc *giaSuc[3];
    giaSuc[0] = new Bo();
    giaSuc[1] = new De();
    giaSuc[2] = new Cuu();

    int n;
    cout << "Nhap so luong bo: ";
    cin >> n;
    giaSuc[0]->setSoLuong(n);
    cout << "Nhap so luong de: ";
    cin >> n;
    giaSuc[1]->setSoLuong(n);
    cout << "Nhap so luong cuu: ";
    cin >> n;
    giaSuc[2]->setSoLuong(n);

    for (int i = 0; i < 3; i++)
    {
        giaSuc[i]->keu();
    }

    for (int i = 0; i < 3; i++)
    {
        giaSuc[i]->sinhCon();
        giaSuc[i]->choSua();
    }

    cout << "Sau 1 lua sinh va 1 luot cho sua:\n";
    cout << "So luong bo: " << giaSuc[0]->getSoLuong() << endl;
    cout << "So luong de: " << giaSuc[1]->getSoLuong() << endl;
    cout << "So luong cuu: " << giaSuc[2]->getSoLuong() << endl;

    int soLuongSua = 0;
    for (int i = 0; i < 3; ++i)
    {
        soLuongSua += giaSuc[i]->getSoLuongSua();
    }
    cout << "So lit sua: " << soLuongSua << endl;
    return 0;
}
