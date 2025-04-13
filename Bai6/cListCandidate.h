#ifndef CLISTCANDIDATE_H_INCLUDED
#define CLISTCANDIDATE_H_INCLUDED
#include <bits/stdc++.h>
#include "cCandidate.h"
using namespace std;
class cListCandidate : public cCandidate{
private:
    int SoThiSinh;
    vector<cCandidate> DanhSach;
public:
    void nhap();
    void xuat();
    void xuatTongDiemLonHon15();
    void xuatThiSinhTongDiemMax();
    void sapxepGiamDanTongDiem();
};


#endif // CLISTCANDIDATE_H_INCLUDED
