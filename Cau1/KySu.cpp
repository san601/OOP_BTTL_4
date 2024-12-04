#include "KySu.h"

KySu::KySu() : NhanVien()
{
    this->soGioLamThem = 0;
}

KySu::KySu(string maSoNhanVien, string hoTen, int luongCoBan, int soGioLamThem) : NhanVien(maSoNhanVien, hoTen, luongCoBan)
{
    this->soGioLamThem = soGioLamThem;
}

int KySu::TinhLuong()
{
    /**
     * @brief Luong = luongCoBan + soGioLamThem * 100000
     * @return luong
     */
    return this->soGioLamThem * 100000;
}

void KySu::Xuat()
{
    /**
     * @brief Xuat thong tin cua ky su
     */
    cout << "Ma so nhan vien: " << this->maSoNhanVien;
    cout << "\nHo ten: " << this->hoTen;
    cout << "\nLuong co ban: " << this->luongCoBan;
    cout << "\nTien thuong: " << this->TinhLuong() << endl;
}