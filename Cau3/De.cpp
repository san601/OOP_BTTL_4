#include "De.h"

De::De() : GiaSuc() {}

De::De(int soLuong) : GiaSuc(soLuong) {}

void De::keu()
{
    /**
     * @brief In tieng keu cua de
     */
    for (int i = 0; i < soLuong; i++)
        cout << this->tiengKeu << endl;
}

void De::choSua()
{
    /**
     * @brief Tinh tong so lit sua cua bo
     * Voi moi con bo, so lit sua se la 0 den 10
     */
    int soLitSua = 0;
    for (int i = 0; i < soLuong; i++)
    {
        soLitSua += rand() % 11;
    }
    this->soSua = soLitSua;
}

void De::sinhCon() {
    /**
     * @brief Sinh random so con de
     */
    int temp = 0;
    for (int i = 0; i < soLuong; i++)
    {
        temp += rand() % 4;
    }
    this->soLuong += temp;
}
