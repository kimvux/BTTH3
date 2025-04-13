#include "cNhanVienSX.h"

cNhanVienSX::cNhanVienSX(){
    MaNV = 0;
    HoTen = "";
    SoSanPham = 0;
    Gia1SanPham = 0;
}
double cNhanVienSX::Luong(){
    return SoSanPham*Gia1SanPham;
}
void cNhanVienSX::nhap(){
    cout << "Nhap ma nhan vien: ";
    cin >> MaNV;
    cout << "Nhap ten nhan vien: ";
    cin.ignore();
    getline(cin,HoTen);
    cout << "Nhap ngay sinh: ";
    NgaySinh.nhap();
    cout << "Nhap so luong san pham da gia cong: ";
    cin >> SoSanPham;
    cout << "Nhap don gia 1 san pham: ";
    cin >> Gia1SanPham;
}
void cNhanVienSX::xuat(){
    if (HoTen.length() < 8){
        cout << MaNV << '\t' << HoTen << '\t' << '\t'; NgaySinh.xuat(); cout << '\t' << SoSanPham << '\t' << '\t' << Gia1SanPham << '\t' << '\t' << this->Luong() << endl;
    }
    else {
        cout << MaNV << '\t' << HoTen << '\t'; NgaySinh.xuat(); cout << '\t' << SoSanPham << '\t' << '\t' << Gia1SanPham << '\t' << '\t' << this->Luong() << endl;
    }
}
int cNhanVienSX::getMaNV(){
    return MaNV;
}
string cNhanVienSX::getHoTen(){
    return HoTen;
}
mydate cNhanVienSX::getNgaySinh(){
    return NgaySinh;
}
int cNhanVienSX::getSoSanPham(){
    return SoSanPham;
}
double cNhanVienSX::getGia1SanPham(){
    return Gia1SanPham;
}
void cNhanVienSX::setMaNV(int x){
    MaNV = x;
}
void cNhanVienSX::setHoTen(string x){
    HoTen = x;
}
void cNhanVienSX::setNgaySinh(mydate x){
    NgaySinh = x;
}
void cNhanVienSX::setSoSanPham(int x){
    SoSanPham = x;
}
void cNhanVienSX::setGia1SanPham(double x){
    Gia1SanPham = x;
}
