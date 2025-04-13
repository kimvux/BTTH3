#ifndef CNHANVIENVP_H_INCLUDED
#define CNHANVIENVP_H_INCLUDED
#include <bits/stdc++.h>
#include "mydate.h"
using namespace std;
class cNhanVienVP : public mydate{
private:
    int MaNV;
    string HoTen;
    mydate NgaySinh;
    double Luong;
public:
    cNhanVienVP();
    void nhap();
    void xuat();
    int getMaNV();
    string getHoTen();
    mydate getNgaySinh();
    double getLuong();
    void setMaNV(int);
    void setHoTen(string);
    void setNgaySinh(mydate);
    void setLuong(double);
};


#endif // CNHANVIENVP_H_INCLUDED
