#ifndef DAGIAC_H_INCLUDED
#define DAGIAC_H_INCLUDED
#include <bits/stdc++.h>
#include "diem.h"
using namespace std;
class cDaGiac: public diem{
private:
    int sodiem;
    vector<diem> mangdiem;
public:
    cDaGiac();
    cDaGiac(const cDaGiac&);
    ~cDaGiac(){};
    void nhap();
    void xuat();
    void tinhtien(double,double);
    void phongto(double);
    void quay(double);
};


#endif // DAGIAC_H_INCLUDED
