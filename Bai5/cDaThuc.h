#ifndef CDATHUC_H_INCLUDED
#define CDATHUC_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class cDaThuc {
private:
    int BacN;
    vector<int> HeSo;
public:
    cDaThuc();
    cDaThuc(int);
    double TinhTheoX(double);
    void nhap();
    void xuat();
    cDaThuc Cong2DaThuc(cDaThuc);
    cDaThuc Tru2DaThuc(cDaThuc);
};


#endif // CDATHUC_H_INCLUDED
