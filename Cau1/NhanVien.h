#include <iostream>

using namespace std;

#ifndef LAB4_BTTL_NHANVIEN_H
#define LAB4_BTTL_NHANVIEN_H


class NhanVien {
protected:
    string maSoNhanVien;
    string hoTen;
    int luongCoBan;
public:
    NhanVien();
    NhanVien(string maSoNhanVien, string hoTen, int luongCoBan);
};


#endif //LAB4_BTTL_NHANVIEN_H
