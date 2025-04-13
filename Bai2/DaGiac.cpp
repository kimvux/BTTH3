#include "DaGiac.h"


cDaGiac::cDaGiac(){
    sodiem = 0;
}
cDaGiac::cDaGiac(const cDaGiac& a){
    this->sodiem = a.sodiem;
    this->mangdiem = a.mangdiem;
}
void cDaGiac::nhap(){
    cout << "Moi ban nhap vao so luong diem: ";
    cin >> sodiem;
    cout << "Moi ban nhap tung diem:\n";
    for (int i=0 ; i<sodiem ; ++i){
        cout << i+1 << ". ";
        diem a;
        a.nhap();
        mangdiem.push_back(a);
    }
}
void cDaGiac::xuat(){
    cout << "Da giac gom " << sodiem << " diem:\n";
    for (int i=0 ; i<sodiem ; ++i){
        cout << i+1 << ". ";
        mangdiem[i].xuat();
    }
}
void cDaGiac::tinhtien(double a, double b){
    for (int i=0 ; i<sodiem ; ++i)
        mangdiem[i].tinhtien(a,b);
}
void cDaGiac::phongto(double a){
    for (int i=0 ; i<sodiem ; ++i)
        mangdiem[i].phongto(a);
}
void cDaGiac::quay(double a){
    for (int i=0 ; i<sodiem ; ++i)
    mangdiem[i].quay(a);
}
