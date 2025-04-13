#include "cDaThuc.h"

cDaThuc::cDaThuc(){
    cDaThuc a(0);
    *this = a;
}
cDaThuc::cDaThuc(int x){
    BacN = x;
    for (int i=0 ; i<=x ; ++i)
        HeSo.push_back(0);
}
double cDaThuc::TinhTheoX(double x){
    double result = 0;
    for (int i=0 ; i<=BacN ; ++i){
        result += HeSo[i] * pow(x,BacN-i);
    }
    return result;
}
void cDaThuc::nhap(){
    cout << "Nhap bac cua da thuc: ";
    int n; cin >> n;
    cDaThuc a(n);
    *this = a;
    cout << "Nhap cac he so cua da thuc bac " << BacN << " : ";
    for (int i=0 ; i<=BacN ; ++i)
        cin >> HeSo[i];
}
void cDaThuc::xuat(){
    if (BacN < 2){
        cout << "P(X) = ";
        if (BacN == 1){
            if (HeSo[0] == 1)
                cout << "x ";
            else if (HeSo[0] == -1)
                cout << "-x ";
            else if (HeSo[0] != 0)
                cout << HeSo[0] << "x ";
            if (HeSo[1] < 0 && HeSo[0] != 0)
                cout << "- " << -HeSo[1];
            else if (HeSo[1] > 0 && HeSo[0] != 0)
                cout << "+ " << HeSo[1];
            else if (HeSo[1] < 0 && HeSo[0] == 0)
                cout << HeSo[1];
            else if (HeSo[1] > 0 && HeSo[0] == 0)
                cout << HeSo[1];
            else if (HeSo[1] == 0 && HeSo[0] == 0)
                cout << 0;
        }
        else{
            cout << HeSo[0];
        }
        return;
    }

    cout << "P(X) = ";
    if (HeSo[0] == 1)
        cout << "x^" << BacN << " ";
    else if (HeSo[0] == -1)
        cout << "-x^" << BacN << " ";
    else if (HeSo[0] != 0)
        cout << HeSo[0] << "x^" << BacN << " ";
    int i;
    for (i=1 ; i<BacN-1 ; ++i){
        if (HeSo[i] == 1)
            cout << "+ x^" << BacN-i << " ";
        else if (HeSo[i] == -1)
            cout << "- x^" << BacN-i << " ";
        else if (HeSo[i] > 0)
            cout << "+ " << HeSo[i] << "x^" << BacN-i << " ";
        else if (HeSo[i] < 0)
            cout << "- " << -HeSo[i] << "x^" << BacN-i << " ";
    }
//xu li 2 he so cuoi
    if (HeSo[i] == 1)
        cout << "+ x ";
    else if (HeSo[i] == -1)
        cout << "- x ";
    else if (HeSo[i] > 0)
        cout << "+ " << HeSo[i] << "x ";
    else if (HeSo[i] < 0)
        cout << "- " << -HeSo[i] << "x ";

    ++i;
    if (HeSo[i] > 0)
        cout << "+ " << HeSo[i];
    else if (HeSo[i] < 0)
        cout << "- " << -HeSo[i];
//gia su moi he so bang 0
    for (int i=0 ; i<=BacN ; ++i){
        if (HeSo[i] != 0) return;
    }
    cout << 0;
}
cDaThuc cDaThuc::Cong2DaThuc(cDaThuc x){
    cDaThuc a(0),b(0);
    if (x.BacN > this->BacN){
        a = x;
        b = *this;
    }
    else {
        a = *this;
        b = x;
    }
    int pos = b.BacN;
    for (int i=a.BacN ; pos>=0 ; --i, --pos)
        a.HeSo[i] += b.HeSo[pos];
    return a;
}
cDaThuc cDaThuc::Tru2DaThuc(cDaThuc x){
    int maxLength = x.BacN > this->BacN ? x.BacN : this->BacN;
    cDaThuc a(maxLength);
    int pos = this->BacN;
    for (int i=a.BacN ; pos>=0 ; --i,--pos){
        a.HeSo[i] = this->HeSo[pos];
    }
    pos = x.BacN;
    for (int i=a.BacN ; pos>=0 ; --i,--pos){
        a.HeSo[i] -= x.HeSo[pos];
    }
    return a;
}
