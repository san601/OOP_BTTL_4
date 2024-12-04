#include "GiaSuc.h"

#ifndef LAB4_BTTL_BO_H
#define LAB4_BTTL_BO_H


class Bo : public GiaSuc {
private:
    string tiengKeu = "Moo moo";
public:
    Bo();
    Bo(int soLuong);
    void keu() override;
    void choSua() override;
    void sinhCon() override;
};


#endif //LAB4_BTTL_BO_H
