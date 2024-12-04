#ifndef LAB4_BTTL_BUSINESS_H
#define LAB4_BTTL_BUSINESS_H


class Business {
protected:
    int soDem;
    int donGia = 300000;
public:
    Business();
    Business(int soDem);
    int TinhTien();
};


#endif //LAB4_BTTL_BUSINESS_H
