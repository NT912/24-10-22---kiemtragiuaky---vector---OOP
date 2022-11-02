#include <iostream>
using namespace std;

class vecto
{
private:
  int n = 0;
  float *data = new float[n];

public:
  vecto(int n, float *data[]);
  vecto(vecto &vt);
  vecto(int n);
  vecto(float mangToaDo[]);
  ~vecto();
  void setN(int n);
  int getN();
  void setData(float *data);
  float getData();
  void nhap();
  void xuat();
  int doDaiVecto(vecto td1);
  void tongHaiVecto(vecto td1);
  int tichVoHuongHaiVecto(vecto td1);
};