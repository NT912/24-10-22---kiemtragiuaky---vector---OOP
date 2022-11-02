#include <iostream>
#include "Vecto.h"
using namespace std;int main(){
    Vecto v1, v2;
    cout<<"Nhập vecto v1:"<<endl;
    // v1.Nhap(); //
    cin>>v1;
    cout<<"Vecto v1 vừa nhập:";
    // v1.Xuat();
    cout<<v1;
    cout<<"Độ dài của vecto v:"<<v1.length()<<endl;
    cout<<"Nhập vecto v2:"<<endl;
    // v2.Nhap();
    cin>>v2;
    cout<<"Vecto v2 vừa nhập:";
    // v2.Xuat();
    cout<<v2;
    cout<<"Vecto tổng v1 + v2:";
    // v1.Tong(v2).Xuat();
    cout<<v1+v2;
    Vecto v3;
    v3 = v1 + v2;
    cout<<v3;
    cout<<"Tích vô hướng v1 * v2 = "<< v1*v2 << endl;
}