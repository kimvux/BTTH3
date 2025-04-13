#include <iostream>
#include "cArray.h"
using namespace std;

int main()
{
    cout << "Vui long nhap so phan tu cua mang: ";
    int n;
    cin >> n;
    cArray a(n);
    cout << "Cac phan tu trong mang la:\n";
    a.xuat();
    cout << "\nVui long nhap X: ";
    int x;
    cin >> x;
    cout << "So lan X xuat hien la: " << a.demX(x) << endl << endl;
    a.kiemtratangdan();
    a.timLeNhoNhat();
    a.timSoNguyenToMax();
    return 0;
}
