#include <iostream>
#include "Business.h"
#include "Deluxe.h"
#include "Premium.h"

using namespace std;

int main()
{
    int soDem, phiDichVu, phiPhucVu;
    cout << "Nhap so dem, phi dich vu va phi phuc vu cua phong Deluxe a: ";
    cin >> soDem >> phiDichVu >> phiPhucVu;
    Deluxe a(soDem, phiDichVu, phiPhucVu);
    cout << "Nhap so dem, phi dich vu va phi phuc vu cua phong Deluxe b: ";
    cin >> soDem >> phiDichVu >> phiPhucVu;
    Deluxe b(soDem, phiDichVu, phiPhucVu);
    cout << "Nhap so dem va phi dich vu cua phong Premium c: ";
    cin >> soDem >> phiDichVu;
    Premium c(soDem, phiDichVu);
    cout << "Nhap so dem va phi dich vu cua phong Premium d: ";
    cin >> soDem >> phiDichVu;
    Premium d(soDem, phiDichVu);
    cout << "Nhap so dem cua phong Business e: ";
    cin >> soDem;
    Business e(soDem);
    int doanhThuBusiness = 0, doanhThuPremium = 0, doanhThuDeluxe = 0;
    doanhThuDeluxe += a.TinhTien();
    doanhThuDeluxe += b.TinhTien();
    doanhThuPremium += c.TinhTien();
    doanhThuPremium += d.TinhTien();
    doanhThuBusiness += e.TinhTien();
    if (doanhThuDeluxe >= doanhThuPremium && doanhThuDeluxe >= doanhThuBusiness)
    {
        cout << "Phong Deluxe co doanh thu cao nhat" << endl;
    }
    else if (doanhThuPremium >= doanhThuDeluxe && doanhThuPremium >= doanhThuBusiness)
    {
        cout << "Phong Premium co doanh thu cao nhat" << endl;
    }
    else
    {
        cout << "Phong Business co doanh thu cao nhat" << endl;
    }
    return 0;
}