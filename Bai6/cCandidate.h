#ifndef CCANDIDATE_H_INCLUDED
#define CCANDIDATE_H_INCLUDED
#include <bits/stdc++.h>
#include "mydate.h"
using namespace std;
class cCandidate : public mydate{
private:
    int Ma;
    string Ten;
    mydate NgaySinh;
    double Toan,Van,Anh;
public:
    void nhap();
    void xuat();
    double TongDiem();
};


#endif // CCANDIDATE_H_INCLUDED
