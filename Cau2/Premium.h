#include "Business.h"

#ifndef LAB4_BTTL_PREMIUM_H
#define LAB4_BTTL_PREMIUM_H


class Premium : public Business {
protected:
    int phiDichVu;
    int donGia = 500000;
public:
    Premium();
    Premium(int soDem, int phiDichVu);
    int TinhTien();
};


#endif //LAB4_BTTL_PREMIUM_H
