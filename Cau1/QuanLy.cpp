#include "QuanLy.h"

QuanLy::QuanLy() : NhanVien()
{
    this->tyLeThuong = 0;
}

QuanLy::QuanLy(string maSoNhanVien, string hoTen, int luongCoBan, float tyLeThuong) : NhanVien(maSoNhanVien, hoTen, luongCoBan)
{
    this->tyLeThuong = tyLeThuong;
}

float QuanLy::TienThuong()
{
    /**
     * @brief Tinh tien thuong cua quan ly
     * @return tien thuong
     */
    return this->luongCoBan * this->tyLeThuong;
}

void QuanLy::Xuat()
{
    cout << "Ma so nhan vien: " << this->maSoNhanVien;
    cout << "\nHo ten: " << this->hoTen;
    cout << "\nLuong co ban: " << this->luongCoBan;
    cout << "\nTien thuong: " << this->TienThuong() << endl;
}