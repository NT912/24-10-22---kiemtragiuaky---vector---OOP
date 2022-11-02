#include <iostream>
#include "vecto.h"
using namespace std;

int main() {
  float mangToaDo[] = {6, 9};
  vecto vt1(2);
  vecto vt2(mangToaDo);
  vecto vt3(vt1);

  vt1.nhap();
  cout << "\nVector 1 la: ";
  vt1.xuat();
  cout << "\nVector 3 sao chep Vector 1 la: ";
  vt3.xuat();
  cout << "\nDo dai Vecto1 va Vector2 la: " << vt1.doDaiVecto(vt2);
  vt1.tongHaiVecto(vt2);
  cout << "\nTich vo huong Vector1 va Vector2 la: "
       << vt1.tichVoHuongHaiVecto(vt2);

  return 0;
}
