#include "Deluxe.h"

Deluxe::Deluxe() : Premium() {}

Deluxe::Deluxe(int soDem, int phiDichVu, int phiPhucVu) : Premium(soDem, phiDichVu)
{
    this->phiPhucVu = phiDichVu;
}

int Deluxe::TinhTien()
{
    /**
     * @brief Tinh tien phong = so dem * don gia + phi dich vu + phi phuc vu
     * @return tien phong
     */
    return soDem * donGia + phiDichVu + phiPhucVu;
}