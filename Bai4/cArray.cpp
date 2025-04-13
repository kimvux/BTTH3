#include "cArray.h"

cArray::cArray(){
    sophantu = 0;
}
cArray::cArray(int x=0){
    sophantu = x;
    srand(time(0));
    for (int i=0 ; i<x ; ++i){
        int num = -1000 + rand() % 2001; // [-1000;1000]
        mang.push_back(num);
    }
}
void cArray::xuat(){
    if (mang.empty()) cout << "Mang rong.";
    for (int x : mang)
        cout << x << " ";
    cout << endl;
}
int cArray::demX(int x){
    if (mang.empty()) return 0;
    int count = 0;
    for (int i=0 ; i<sophantu ; ++i)
        if (mang[i] == x) count++;
    return count;
}
void cArray::kiemtratangdan(){
    if (mang.empty()) {
        cout << "Mang rong.\n";
        return;
    }
    for (int i=0 ; i<sophantu-1 ; ++i)
        if (mang[i] >= mang[i+1]){
            cout << "Mang khong tang dan.\n";
            return;
        }
    cout << "Mang tang dan!\n";
}
void cArray::timLeNhoNhat(){
    if (mang.empty()) {
        cout << "Mang rong.\n";
        return;
    }
    int minLe = 10001;
    for (int i=0 ; i<sophantu ; ++i)
        if (mang[i] < minLe && abs(mang[i]) % 2 == 1)
            minLe = mang[i];
    cout << "So le nho nhat la: " << minLe << endl;
}
void cArray::timSoNguyenToMax(){
    if (mang.empty()) {
        cout << "Mang rong.\n";
        return;
    }
    int maxSoNguyenTo = -100000;
    for (int i=0 ; i<sophantu ; ++i){
        if (mang[i] < 2) continue;
        bool checkSoNguyenTo = true;
        for (int j=2 ; j<sqrt(mang[i]) ; ++j)
            if (mang[i] % j == 0) {
                checkSoNguyenTo = false;
                break;
            }
        if (checkSoNguyenTo == true && mang[i] > maxSoNguyenTo)
            maxSoNguyenTo = mang[i];
    }
    if (maxSoNguyenTo == -100000) cout << "Khong co so nguyen to lon nhat.\n";
    else cout << "So nguyen to lon nhat la: " << maxSoNguyenTo << endl;
}
void cArray::sapxep(){
    if (mang.empty()) {
        cout << "Mang rong.\n";
        return;
    }
    int choice;
    cout << "Moi ban chon cach sap xep:\n";
    cout << "1. Tang dan\n";
    cout << "2. Giam dan\n";
    cin >> choice;
    if (choice == 1){
        for (int i=0 ; i<sophantu-1 ; ++i)
            for (int j=i+1 ; j<sophantu ; ++j)
                if (mang[i] > mang[j])
                    swap (mang[i],mang[j]);
        cout << "Mang da duoc sap xap tang dan\n";
    }
    else {
        for (int i=0 ; i<sophantu-1 ; ++i)
            for (int j=i+1 ; j<sophantu ; ++j)
                if (mang[i] < mang[j])
                    swap (mang[i],mang[j]);
        cout << "Mang da duoc sap xap giam dan\n";
    }
}
