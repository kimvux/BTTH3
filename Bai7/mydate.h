#ifndef MYDATE_H_INCLUDED
#define MYDATE_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class mydate{
protected:
    int ngay,thang,nam;
public:
    mydate();
    void nhap();
    void xuat();
    int getNgay();
    int getThang();
    int getNam();
};
#endif // MYDATE_H_INCLUDED
