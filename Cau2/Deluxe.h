#include "Premium.h"

#ifndef LAB4_BTTL_DELUXE_H
#define LAB4_BTTL_DELUXE_H


class Deluxe : public Premium {
protected:
    int phiPhucVu;
    int donGia = 750000;
public:
    Deluxe();
    Deluxe(int soDem, int phiDichVu, int phiPhucVu);
    int TinhTien();
};


#endif //LAB4_BTTL_DELUXE_H
