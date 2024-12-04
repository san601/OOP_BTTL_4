#include "NhanVien.h"

#ifndef LAB4_BTTL_KYSU_H
#define LAB4_BTTL_KYSU_H


class KySu : public NhanVien {
protected:
    int soGioLamThem;
public:
    KySu();
    KySu(string maSoNhanVien, string hoTen, int luongCoBan, int soGioLamThem);
    int TinhLuong();
    void Xuat();
};


#endif //LAB4_BTTL_KYSU_H
