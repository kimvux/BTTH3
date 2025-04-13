#include <iostream>
#include "cNhanVienVP.h"
using namespace std;

void sapxeptangdan(vector<cNhanVienVP>& a, int l, int r){
    if (l >= r) return;
    int i = l;
    int j = r;
    cNhanVienVP pivot = a[l];
    while (i <= j){
        while (a[i].getLuong() < pivot.getLuong()) ++i;
        while (pivot.getLuong() < a[j].getLuong()) --j;
        if (i <= j){
            swap (a[i],a[j]);
            ++i;
            --j;
        }
    }
    sapxeptangdan(a,l,j);
    sapxeptangdan(a,i,r);
}
void xuatDanhSach (vector<cNhanVienVP>& a){
    cout << "===============================================\n";
    cout << "         Danh Sach Nhan Vien Van Phong         \n";
    cout << "MANV" << '\t' << "HO VA TEN" << '\t' << "NGAYSINH" << '\t' << "LUONG\n";
    cout << "-----------------------------------------------\n";
    for (long long unsigned i=0 ; i<a.size() ; ++i)
        a[i].xuat();
}
void NVLuongCaoNhat(vector<cNhanVienVP>& a){
    double maxLuong = -1;
    long long unsigned pos = -1;
    for (long long unsigned i=0 ; i<a.size() ; ++i)
        if (a[i].getLuong() > maxLuong){
            maxLuong = a[i].getLuong();
            pos = i;
        }
    cout << "\n===============================================\n";
    cout << "Nhan vien van phong co luong cao nhat: " << a[pos].getHoTen() << endl;
    cout << "So tien luong: " << maxLuong << endl;
}
double TongLuongCanTra (vector<cNhanVienVP>& a){
    double sum = 0;
    for (long long unsigned i=0 ; i<a.size() ; ++i)
        sum += a[i].getLuong();
    return sum;
}
void NVTuoiCaoNhat (vector<cNhanVienVP>& a){
    cNhanVienVP maxTuoi = a[0];
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
    cout << "\n===============================================\n";
    cout << "Nhan vien lon tuoi nhat la: " << maxTuoi.getHoTen();
    cout << "\nSinh nam: " << maxTuoi.getNgaySinh().getNam() << endl;
}

int main()
{
    vector<cNhanVienVP> a;
    cout << "Nhap so luong nhan vien: ";
    int n;
    cin >> n;
    for (int i=0 ; i<n ; ++i){
        cNhanVienVP x;
        x.nhap();
        a.push_back(x);
    }
    xuatDanhSach(a);
    NVTuoiCaoNhat(a);
    NVLuongCaoNhat(a);
    cout << "\n===============================================\n";
    cout << "Tong luong can tra cho nhan vien: " << TongLuongCanTra(a) << endl;
    sapxeptangdan(a,0,n-1);
    xuatDanhSach(a);
    return 0;
}
