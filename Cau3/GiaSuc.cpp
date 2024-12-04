#include "GiaSuc.h"

GiaSuc::GiaSuc()
{
    this->soLuong = 0;
    this->soSua = 0;
}

GiaSuc::GiaSuc(int soLuong)
{
    this->soLuong = soLuong;
    this->soSua = 0;
}

void GiaSuc::setSoLuong(int soLuong)
{
    /**
     * @brief Set so luong gia suc
     */
    this->soLuong = soLuong;
}

int GiaSuc::getSoLuong() {
    /**
     * @brief Get so luong gia suc
     * @return so luong gia suc
     */
    return this->soLuong;
}

int GiaSuc::getSoLuongSua() {
    /**
     * @brief Get so luong sua
     * @return so luong sua
     */
    return this->soSua;
}
