#include "diem.h"

diem::diem(){
    x = 0;
    y = 0;
}
diem::diem(double x=0, double y=0){
    this->x = x;
    this->y = y;
}
diem::diem(const diem &a){
    x = a.x;
    y = a.y;
}
void diem::nhap(){
    cout << "Moi ban nhap vao diem: ";
    cin >> x >> y;
}
void diem::xuat(){
    cout << "[" << x << "," << y << "]" << endl;
}
void diem::tinhtien(double x, double y){
    this->x += x;
    this->y += y;
}
void diem::phongto(double a){
    this->x *= a;
    this->y *= a;
}
double diem::tinhkhoangcach(const diem& a){
    return sqrt(pow(this->x - a.x,2) + pow(this->y - a.y,2));
}
void diem::quay(double a){
    a = a * 3.141592653589793 / 180;
    double x1 = x;
    double y1 = y;
    x = x1*cos(a) - y1*sin(a);
    y = x1*sin(a) + y1*cos(a);
}
