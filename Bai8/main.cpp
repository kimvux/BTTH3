#include <iostream>
#include "cNhanVienSX.h"
using namespace std;
void nhapDanhSachNhanVien (vector<cNhanVienSX> &a){
    cout << "Nhap so luong nhan vien san xuat: ";
    int n;
    cin >> n;
    for (int i=0 ; i<n ; ++i){
        cNhanVienSX x;
        x.nhap();
        a.push_back(x);
    }
}
void xuatDanhSachNhanVien (vector<cNhanVienSX> &a){
    cout << "=========================Danh Sach Nhan Vien San Xuat=========================\n\n";
    cout << "MANV" << '\t' << "HO VA TEN" << '\t' << "NGAY SINH" << '\t' << "SO SAN PHAM" << '\t' << "GIA 1 SAN PHAM" << '\t' << "LUONG\n";
    cout << "------------------------------------------------------------------------------\n";
    for (long long unsigned i=0 ; i<a.size() ; ++i)
        a[i].xuat();
}
void NVLuongThapNhat(vector<cNhanVienSX>& a){
    double minLuong = a[0].Luong();
    long long unsigned pos = 0;
    for (long long unsigned i=1 ; i<a.size() ; ++i)
        if (a[i].Luong() < minLuong){
            minLuong = a[i].Luong();
            pos = i;
        }
    cout << "Nhan vien van phong co luong thap nhat: " << a[pos].getHoTen() << endl;
    cout << "So tien luong: " << minLuong << endl;
}
double TongLuongCanTra (vector<cNhanVienSX>& a){
    double sum = 0;
    for (long long unsigned i=0 ; i<a.size() ; ++i)
        sum += a[i].Luong();
    return sum;
}
void NVTuoiCaoNhat (vector<cNhanVienSX>& a){
    cNhanVienSX maxTuoi = a[0];
    for (long long unsigned i=1 ; i<a.size() ; ++i){
        if (maxTuoi.getNgaySinh().getNam() == a[i].getNgaySinh().getNam()){
            if (maxTuoi.getNgaySinh().getThang() == a[i].getNgaySinh().getThang()){
                if (maxTuoi.getNgaySinh().getNgay() > a[i].getNgaySinh().getNgay())
                    maxTuoi = a[i];
            }
            else if (maxTuoi.getNgaySinh().getThang() > a[i].getNgaySinh().getThang())
                maxTuoi = a[i];
        }
        else if (maxTuoi.getNgaySinh().getNam() > a[i].getNgaySinh().getNam())
            maxTuoi = a[i];
    }
    cout << "Nhan vien lon tuoi nhat la: " << maxTuoi.getHoTen();
    cout << "\nSinh nam: " << maxTuoi.getNgaySinh().getNam() << endl;
}
void sapxeptangdan(vector<cNhanVienSX>& a, int l, int r){
    if (l >= r) return;
    int i = l;
    int j = r;
    cNhanVienSX pivot = a[l];
    while (i <= j){
        while (a[i].Luong() < pivot.Luong()) ++i;
        while (pivot.Luong() < a[j].Luong()) --j;
        if (i <= j){
            swap (a[i],a[j]);
            ++i;
            --j;
        }
    }
    sapxeptangdan(a,l,j);
    sapxeptangdan(a,i,r);
}


int main()
{
    vector<cNhanVienSX> a;
    nhapDanhSachNhanVien(a);
    xuatDanhSachNhanVien(a);
    cout << endl;
    NVLuongThapNhat(a);
    cout << "Tong luong can tra: " <<  TongLuongCanTra(a) << endl;
    NVTuoiCaoNhat(a);
    cout << endl;
    sapxeptangdan(a,0,a.size()-1);
    cout << "Danh sach nhan vien sao xep tang dan theo luong:\n";
    xuatDanhSachNhanVien(a);
    return 0;
}
