#include "Business.h"

Business::Business()
{
    soDem = 0;
}

Business::Business(int soDem)
{
    this->soDem = soDem;
}

int Business::TinhTien()
{
    /**
     * @brief Tinh tien phong = so dem * don gia
     * @return tien phong
     */
    return soDem * donGia;
}