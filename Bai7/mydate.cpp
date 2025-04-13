#include "mydate.h"

mydate::mydate(){
    ngay = thang = nam = 0;
}
void mydate::nhap(){
    cin >> ngay >> thang >> nam;
}
void mydate::xuat(){
    cout << ngay << "/" << thang << "/" << nam;
}
int mydate::getNgay(){
    return ngay;
}
int mydate::getThang(){
    return thang;
}
int mydate::getNam(){
    return nam;
}
