#include <iostream>
#include "Vecto.h"
using namespace std;
Vecto::Vecto(int x):n(x){
    data = new double [n];
}
Vecto::Vecto(const Vecto &x):n(x.n){
    data = new double [n];
    for(int i = 0; i<n; i++)
        data[i] = x[i]; //x.operator [] (i)
}
Vecto::Vecto(double a[], int n){
    this->n = n;
    data = new double [n];
    for(int i=0; i<n; i++)
        data[i] = a[i];
}
Vecto::~Vecto(){
    delete [] data;
}
void Vecto::Nhap(){
    for(int i =0; i<n; i++){
        cout<<"Nhập tọa độ thứ "<<i<<":";
        cin>>data[i];
    }
}
void Vecto::Xuat() const{
    cout<<"(";
    int i;
    for( i  = 0; i < n-1; i++)
        cout<<data[i]<<",";
    cout<<data[i]<<")"<<endl;
}
double Vecto::length() const{
    double S = 0;
    for(int i=0; i<n; i++)
        S = S + data[i]*data[i];
    return sqrt(S);
}
Vecto Vecto::Tong(const Vecto &v){
    Vecto t(this->n);
    for(int i = 0; i<n; i++)
        t[i] = (*this)[i] + v[i];
    return t;
}
double Vecto::TichVH(const Vecto &v){
    double S = 0;
    for(int i=0; i<n; i++)
        S = S + this->data[i]*v[i];
    return S;
}
istream &operator >> (istream &in, Vecto &v){
    for(int i =0; i<v.n; i++){
        cout<<"Nhập tọa độ thứ "<<i<<":";
        cin>>v[i];
    }
    return in;
}
ostream &operator <<(ostream &out, const Vecto &v){
    cout<<"(";
    int i;
    for( i  = 0; i < v.n-1; i++)
        cout<<v[i]<<",";
    cout<<v[i]<<")"<<endl;
    return out;
}
Vecto Vecto::operator + (const Vecto &v){
   Vecto t(this->n);
    for(int i = 0; i<n; i++)
        t[i] = this->data[i] + v[i];
    return t; 
}
double operator * (const Vecto &v1, const Vecto &v2){
    double S = 0;
    for(int i=0; i<v1.getn(); i++)
        S = S + v1[i]*v2[i];
    return S;
}
const Vecto &Vecto::operator = (const Vecto &v){
    if (this != &v) {
        this->n = v.n;
        delete [] data;
        data = new double [n];
        for(int i = 0; i<n; i++)
            data[i] = v.data[i]; 
    }
    return *this;
}
