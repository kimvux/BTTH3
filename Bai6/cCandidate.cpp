#include "cCandidate.h"

void cCandidate::nhap(){
    cout << "Nhap ma so thi sinh: ";
    cin >> Ma;
    cout << "Nhap ten thi sinh: ";
    cin.ignore();
    getline(cin,Ten);
    cout << "Nhap ngay sinh: ";
    NgaySinh.nhap();
    cout << "Nhap diem Toan: ";
    cin >> Toan;
    cout << "Nhap diem Van: ";
    cin >> Van;
    cout << "Nhap diem Anh: ";
    cin >> Anh;
}
void cCandidate::xuat(){
    if (Ten.length() < 8){
        cout << Ma << '\t' << Ten << '\t' << '\t'; NgaySinh.xuat(); cout << '\t' << Toan << '\t' << Van << '\t' << Anh << endl;
    }
    else {
        cout << Ma << '\t' << Ten << '\t'; NgaySinh.xuat(); cout << '\t' << Toan << '\t' << Van << '\t' << Anh << endl;
    }
}
double cCandidate::TongDiem(){
    return Toan+Van+Anh;
}
