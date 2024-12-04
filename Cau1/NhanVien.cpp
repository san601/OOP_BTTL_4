#include "NhanVien.h"

NhanVien::NhanVien()
{
    this->maSoNhanVien = "";
    this->hoTen = "";
    this->luongCoBan = 0;
}

NhanVien::NhanVien(string maSoNhanVien, string hoTen, int luongCoBan)
{
    this->maSoNhanVien = maSoNhanVien;
    this->hoTen = hoTen;
    this->luongCoBan = luongCoBan;
}