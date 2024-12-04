#include <iostream>

using namespace std;

#ifndef LAB4_BTTL_GIASUC_H
#define LAB4_BTTL_GIASUC_H


class GiaSuc {
protected:
    int soLuong;
    int soSua;
public:
    GiaSuc();
    GiaSuc(int soLuong);
    void setSoLuong(int soLuong);
    int getSoLuong();
    virtual void sinhCon() = 0;
    virtual void choSua() = 0;
    virtual void keu() = 0;
    int getSoLuongSua();
};


#endif //LAB4_BTTL_GIASUC_H
