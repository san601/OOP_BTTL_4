#include "Bo.h"

Bo::Bo() : GiaSuc() {}

Bo::Bo(int soLuong) : GiaSuc(soLuong) {}

void Bo::keu()
{
    /**
     * @brief In tieng keu cua bo
     */
    for (int i = 0; i < soLuong; i++)
        cout << this->tiengKeu << endl;
}

void Bo::choSua()
{
    /**
     * @brief Tinh tong so lit sua cua bo
     * Voi moi con bo, so lit sua se la 0 den 20
     */
    int soLitSua = 0;
    for (int i = 0; i < soLuong; i++)
    {
        soLitSua += rand() % 21;
    }
    this->soSua = soLitSua;
}

void Bo::sinhCon() {
    /**
     * @brief Sinh random so con bo
     */
    int temp = 0;
    for (int i = 0; i < soLuong; i++)
    {
        temp += rand() % 4;
    }
    this->soLuong += temp;
}
