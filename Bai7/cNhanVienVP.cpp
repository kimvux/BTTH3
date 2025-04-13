#include "cNhanVienVP.h"

cNhanVienVP::cNhanVienVP(){
    MaNV = 0;
    HoTen = "";
    Luong = 0;
}
void cNhanVienVP::nhap(){
    cout << "Nhap ma nhan vien: ";
    cin >> MaNV;
    cout << "Nhap ten nhan vien: ";
    cin.ignore();
    getline(cin,HoTen);
    cout << "Nhap ngay sinh: ";
    NgaySinh.nhap();
    cout << "Nhap luong nhan vien: ";
    cin >> Luong;
}
void cNhanVienVP::xuat(){
    if (HoTen.length() < 8){
        cout << MaNV << '\t' << HoTen << '\t' << '\t'; NgaySinh.xuat(); cout << '\t' << Luong << endl;
    }
    else {
        cout << MaNV << '\t' << HoTen << '\t'; NgaySinh.xuat(); cout << '\t' << Luong << endl;
    }
}
int cNhanVienVP::getMaNV(){
    return MaNV;
}
string cNhanVienVP::getHoTen(){
    return HoTen;
}
mydate cNhanVienVP::getNgaySinh(){
    return NgaySinh;
}
double cNhanVienVP::getLuong(){
    return Luong;
}
void cNhanVienVP::setMaNV(int x){
    MaNV = x;
}
void cNhanVienVP::setHoTen(string x){
    HoTen = x;
}
void cNhanVienVP::setNgaySinh(mydate x){
    NgaySinh = x;
}
void cNhanVienVP::setLuong(double x){
    Luong = x;
}
