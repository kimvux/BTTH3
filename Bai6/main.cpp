#include <iostream>
#include "cListCandidate.h"
using namespace std;

int main()
{
    cListCandidate a;
    a.nhap();
    cout << "\n============================================================\n";
    cout << "         Danh sach thi sinh co tong diem lon hon 15         \n";
    cout << "MASV" << '\t' << "HO TEN" << '\t' << '\t' << "NGAYSINH\t" << "TOAN\t" << "VAN\t" << "ANH\n";
    a.xuatTongDiemLonHon15();
    cout << "\n============================================================\n";
    cout << "                Thi sinh co tong diem cao nhat              \n";
    cout << "MASV" << '\t' << "HO TEN" << '\t' << '\t' << "NGAYSINH\t" << "TOAN\t" << "VAN\t" << "ANH\n";
    a.xuatThiSinhTongDiemMax();
    cout << "\n============================================================\n";
    cout << "         Danh sach thi sinh giam dan theo tong diem         \n";
    cout << "MASV" << '\t' << "HO TEN" << '\t' << '\t' << "NGAYSINH\t" << "TOAN\t" << "VAN\t" << "ANH\n";
    a.sapxepGiamDanTongDiem();
    a.xuat();
    return 0;
}
