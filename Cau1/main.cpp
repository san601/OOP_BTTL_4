#include <iostream>
#include "NhanVien.h"
#include "KySu.h"
#include "QuanLy.h"

using namespace std;

int main()
{
    cout << "Nhap thong tin quan ly:" << endl;
    cout << "Nhap ma so nhan vien: ";
    string maSoNhanVien;
    cin >> maSoNhanVien;
    cout << "Nhap ho ten: ";
    string hoTen;
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap luong co ban: ";
    int luongCoBan;
    cin >> luongCoBan;
    cout << "Nhap ty le thuong: ";
    float tyLeThuong;
    cin >> tyLeThuong;
    QuanLy quanLy(maSoNhanVien, hoTen, luongCoBan, tyLeThuong);
    cout << "Nhap thong tin ky su:" << endl;
    cout << "Nhap ma so nhan vien: ";
    cin >> maSoNhanVien;
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap luong co ban: ";
    cin >> luongCoBan;
    cout << "Nhap so gio lam them: ";
    int soGioLamThem;
    cin >> soGioLamThem;
    KySu KySu(maSoNhanVien, hoTen, luongCoBan, soGioLamThem);
    cout << "Thong tin quan ly:" << endl;
    quanLy.Xuat();
    cout << "Thong tin ky su:" << endl;
    KySu.Xuat();
    return 0;
}