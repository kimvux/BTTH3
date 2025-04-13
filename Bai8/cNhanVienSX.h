#ifndef CNHANVIENSX_H_INCLUDED
#define CNHANVIENSX_H_INCLUDED
#include <bits/stdc++.h>
#include "mydate.h"
using namespace std;
class cNhanVienSX : public mydate{
private:
    int MaNV,SoSanPham;
    string HoTen;
    mydate NgaySinh;
    double Gia1SanPham;
public:
    cNhanVienSX();
    void nhap();
    void xuat();
    int getMaNV();
    string getHoTen();
    mydate getNgaySinh();
    int getSoSanPham();
    double getGia1SanPham();
    void setMaNV(int);
    void setHoTen(string);
    void setNgaySinh(mydate);
    void setSoSanPham(int);
    void setGia1SanPham(double);
    double Luong();
};
#endif // CNHANVIENSX_H_INCLUDED
