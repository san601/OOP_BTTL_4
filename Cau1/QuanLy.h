#include "NhanVien.h"

#ifndef LAB4_BTTL_QUANLY_H
#define LAB4_BTTL_QUANLY_H


class QuanLy : public NhanVien {
protected:
    float tyLeThuong;
public:
    QuanLy();
    QuanLy(string maSoNhanVien, string hoTen, int luongCoBan, float tyLeThuong);
    float TienThuong();
    void Xuat();
};


#endif //LAB4_BTTL_QUANLY_H
