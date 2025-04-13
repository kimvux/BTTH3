#include "cListCandidate.h"

void cListCandidate::nhap(){
    cout << "Nhap vao so thi sinh: ";
    cin >> SoThiSinh;
    for (int i=0 ; i<SoThiSinh ; ++i){
        cCandidate x;
        cout << "====================================\n";
        x.nhap();
        DanhSach.push_back(x);
    }
}
void cListCandidate::xuat(){
    for (int i=0 ; i<SoThiSinh ; ++i)
        DanhSach[i].xuat();
}
void cListCandidate::xuatTongDiemLonHon15(){
    for (int i=0 ; i<SoThiSinh ; ++i)
        if (DanhSach[i].TongDiem() > 15)
            DanhSach[i].xuat();
}
void cListCandidate::xuatThiSinhTongDiemMax(){
    double TongDiemMax = -1;
    int pos = -1;
    for (int i=0 ; i<SoThiSinh ; ++i)
        if (DanhSach[i].TongDiem() > TongDiemMax){
            pos = i;
            TongDiemMax = DanhSach[i].TongDiem();
        }
    DanhSach[pos].xuat();
}
void cListCandidate::sapxepGiamDanTongDiem(){
    for (int i=0 ; i<SoThiSinh-1 ; ++i)
        for (int j=i+1 ; j<SoThiSinh ; ++j)
            if (DanhSach[i].TongDiem() < DanhSach[j].TongDiem())
                swap (DanhSach[i],DanhSach[j]);
}
