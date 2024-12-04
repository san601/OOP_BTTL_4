#include "Cuu.h"

Cuu::Cuu() : GiaSuc() {}

Cuu::Cuu(int soLuong) : GiaSuc(soLuong) {}

void Cuu::keu()
{
    /**
     * @brief In tieng keu cua cuu
     */
    for (int i = 0; i < soLuong; i++)
        cout << this->tiengKeu << endl;
}

void Cuu::choSua()
{
    /**
     * @brief Tinh tong so lit sua cua cuu
     * Voi moi con cuu, so lit sua se la 0 den 5
     */
    int soLitSua = 0;
    for (int i = 0; i < soLuong; i++)
    {
        soLitSua += rand() % 6;
    }
    this->soSua = soLitSua;
}

void Cuu::sinhCon() {
    /**
     * @brief Sinh random so con cuu
     */
    int temp = 0;
    for (int i = 0; i < soLuong; i++)
    {
        temp += rand() % 4;
    }
    this->soLuong += temp;
}
