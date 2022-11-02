#include "vecto.h"
#include <math.h>

vecto::vecto(int n, float *data[])
{
  this->n = n;
  this->data[n] = *data[n];
}

vecto::vecto(vecto &vt)
{
  n = vt.n;
  data = vt.data;
}

vecto::vecto(int n)
{
  this->n = n;
}

vecto::vecto(float mangToaDo[])
{
  this->data[n] = mangToaDo[n];
}

vecto::~vecto()
{
  this->n = 0;
  this->data = 0;
}

void vecto::setN(int n)
{
  this->n = n;
}

int vecto::getN()
{
  return this->n;
}

void vecto::setData(float *data)
{
  this->data = data;
}

float vecto::getData()
{
  return *this->data;
}

void vecto::nhap()
{
  if (n == 0)
  {
    cout << "Nhap so chieu: ";
    cin >> n;
  }
  else
    cout << "Nhap cac toa do cua Vector: \n";
  for (int i = 0; i < getN(); i++)
  {
    cout << "Toa do diem " << i + 1 << ": ";
    cin >> data[i];
  }
}

void vecto::xuat()
{
  for (int i = 0; i < n; i++)
  {
    cout << data[i] << ",";
  }
}

int vecto::doDaiVecto(vecto td1)

{
  float t = 0;
  for (int i = 0; i < n; i++)
  {
    t += pow((td1.data[i] - data[i]), 2);
  }
  return sqrt(t);
}

void vecto::tongHaiVecto(vecto td1)
{
  float tong[n];
  for (int i = 0; i < n; i++)
  {
    tong[i] = td1.data[i] + data[i];
  }
  cout << "\nTong hai Vector la: ";

  for (int i = 0; i < n; i++)
  {
    cout << tong[i] << ",";
  }
}

int vecto::tichVoHuongHaiVecto(vecto td1)
{
  float t = 0;
  for (int i = 0; i < n; i++)
  {
    t += td1.data[i] * data[i];
  }
  return t;
}
