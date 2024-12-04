#include "Premium.h"

Premium::Premium() : Business() {}

Premium::Premium(int soDem, int phiDichVu) : Business(soDem)
{
    this->phiDichVu = phiDichVu;
}

int Premium::TinhTien()
{
    /**
     * @brief Tinh tien phong = so dem * don gia + phi dich vu
     * @return tien phong
     */
    return soDem * donGia + phiDichVu;
}