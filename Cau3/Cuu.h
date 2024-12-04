#include "GiaSuc.h"

#ifndef LAB4_BTTL_CUU_H
#define LAB4_BTTL_CUU_H


class Cuu : public GiaSuc {
private:
    string tiengKeu = "Be be";
public:
    Cuu();
    Cuu(int soLuong);
    void keu() override;
    void choSua() override;
    void sinhCon() override;
};

#endif //LAB4_BTTL_CUU_H
