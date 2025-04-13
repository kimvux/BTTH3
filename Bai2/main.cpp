#include <iostream>
#include "DaGiac.h"
using namespace std;

int main(){
    cout << "==================================================\n";
    cDaGiac a,b;
    a.nhap();
    a.xuat();
    b = a;
    cout << "\n================Tinh tien da giac=================\n";
    cout << "Nhap x,y: ";
    double x,y;
    cin >> x >> y;
    b.tinhtien(x,y);
    cout << "Toa do cac diem sau khi tinh tien la:\n";
    b.xuat();
    b = a;
    cout << "\n================Phong to da giac==================\n";
    cout << "Nhap ti le ban muon phong to: ";
    cin >> x;
    b.phongto(x);
    cout << "Toa do cac diem sau khi phong to la:\n";
    b.xuat();
    b = a;
    cout << "\n================Quay da giac======================\n";
    cout << "Nhap goc ban muon quay: ";
    cin >> x;
    b.quay(x);
    cout << "Toa do cac diem sau khi quay la:\n";
    b.xuat();
    b = a;
    return 0;
}
