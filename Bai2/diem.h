#ifndef DIEM_H_INCLUDED
#define DIEM_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class diem{
protected:
    double x, y;
public:
    diem();
    diem(double,double);
    diem(const diem&);
    ~diem(){};
    void nhap();
    void xuat();
    void tinhtien(double,double);
    void phongto(double);
    void quay(double);
    double tinhkhoangcach(const diem&);
};


#endif // DIEM_H_INCLUDED
