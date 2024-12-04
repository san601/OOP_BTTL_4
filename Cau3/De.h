#include "GiaSuc.h"

#ifndef LAB4_BTTL_DE_H
#define LAB4_BTTL_DE_H


class De : public GiaSuc {
private:
    string tiengKeu = "Siuuuuu";
public:
    De();
    De(int soLuong);
    void keu() override;
    void choSua() override;
    void sinhCon() override;
};

#endif //LAB4_BTTL_DE_H
