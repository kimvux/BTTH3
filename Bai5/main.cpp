#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main()
{
    cout << "========================Da thuc thu nhat=======================\n";
    cDaThuc a;
    a.nhap();
    cout << "\n========================Da thuc thu hai========================\n";
    cDaThuc b;
    b.nhap();
    cout << "\n===============================================================\n";
    cout << "Da thuc thu nhat la:\t"; a.xuat(); cout << endl;
    cout << "Da thuc thu hai la:\t"; b.xuat(); cout << endl;
    cout << "\n===============================================================\n";
    cDaThuc c = a.Cong2DaThuc(b);
    cout << "Cong hai da thuc A+B:\t"; c.xuat(); cout << endl;
    c = a.Tru2DaThuc(b);
    cout << "Tru hai da thuc A-B:\t"; c.xuat(); cout << endl;
    cout << "\n===============================================================\n";
    cout << "Vui long nhap X: ";
    int x;
    cin >> x;
    cout << "Ket qua tinh X cua da thuc A la P( " << x << " ) = " << a.TinhTheoX(x) << endl;
    cout << "Ket qua tinh X cua da thuc B la P( " << x << " ) = " << b.TinhTheoX(x) << endl;

    return 0;
}
