// Cài đặt lớp Vecto để biểu diễn 01 vecto trong 
// không gian n chiều gồm n là số chiều, data là 
// 01 mảng động các số thực biểu diễn tọa độ của vecto.
// Định nghĩa các hàm:
// Hàm dựng (với 01 tham số mặc định để khởi tạo số chiều 
// của vecto)
// Hàm dựng sao chép 
// Hàm dựng để khởi tạo tọa đô của vecto từ 01 mảng
// Hàm hủy
// Hàm nhập tọa độ vecto
// Hàm xuất vecto
// Hàm tính độ dài vecto
// Hàm tính tổng 02 vecto
// Hàm tính tích vô hướng 02 vecto
// Hàm truy xuất 01 tọa độ của vecto
#include <iostream>
using namespace std;
class Vecto {
        int n;
        double *data;
    public:
        Vecto(int x = 3);
        Vecto(const Vecto &x);
        Vecto(double a[], int n);
        ~Vecto();
        void Nhap();
        void Xuat() const;
        double length() const;
        Vecto Tong(const Vecto &v);
        double TichVH(const Vecto &v);
        double &getdata(int i)const {
            return data[i];
        }
        double &operator [] (int i) const {
            return data[i];
        }
        Vecto operator + (const Vecto &v);
        int getn() const { return n;}
        const Vecto &operator = (const Vecto &v);
        friend istream &operator >> (istream &in, Vecto &v);
        friend ostream &operator <<(ostream &out, const Vecto &v);
};
double operator * (const Vecto &v1, const Vecto &v2);