// 【问题描述】

// 请定义一个复数类，将+/-运算符重载为友元函数，实现复数与复数的加减及复数与浮点数的加减。

// 请根据给定的main函数，设计Complex类。

// 【样例输出】

// a+b=(4)+(3i)

// a-b=(2)+(5i)

// a+100=(103)+(4i)

// a-2.5=(0.5)+(4i)

// 100+a=(103)+(4i)

// 2.5-a=(-0.5)+(-4i)

#include  <iostream>
using  namespace  std;
//todo
class Complex {
    private:
        double real;  // 实部
        double cmp;  // 虚部

    public:
        Complex(double _real, double _cmp) : real(_real), cmp(_cmp) {}
        Complex() {}
        void print() {
            cout << '(' <<this->real << ')' <<  '+' <<  '(' <<this->cmp << 'i' << ')' << endl;
        }

        // 以友元函数方式重载双目运算符 返回值为一个Complex对象
        friend Complex operator + (const Complex& a, const Complex& b);
        friend Complex operator - (const Complex& a, const Complex& b);
        friend Complex operator + (Complex a, int _real);
        friend Complex operator - (Complex a, double _real);
        friend Complex operator + (int _real,  Complex a);
        friend Complex operator - (double _real,  Complex a);
};

// declaration
Complex operator + (const Complex& a, const Complex &b) {
    Complex res;
    res.cmp = a.cmp + b.cmp;
    res.real = a.real + b.real;
    return res;
}

Complex operator - (const Complex& a, const Complex& b) {
    Complex res;
    res.cmp = a.cmp -  b.cmp;
    res.real = a.real - b.real;
    return res;
}

Complex operator + (Complex a, int _real) {
    Complex res;
    res.cmp = a.cmp;
    res.real = a.real + (double)_real;
    return res;
}

Complex operator - ( Complex a, double _real) {
    Complex res;
    res.cmp = a.cmp;
    res.real = a.real - _real;
    return res;
}

Complex operator + (int _real,  Complex a) {
    Complex res;
    res.cmp = a.cmp;
    res.real = a.real + _real;
    return res;
}    


Complex operator - (double _real,  Complex a) {
    Complex res;
    res.cmp = a.cmp;
    res.real = _real - a.real;
    res.cmp = -res.cmp;
    return res;
}



int  main()
{
        Complex  a(3,4),b(1,-1),c;
        c=a+b;
        cout<<"a+b=";
        c.print();
        cout<<endl;
        c=a-b;
        cout<<"a-b=";
        c.print();
        cout<<endl;
        c=a+100;
        cout<<"a+100=";
        c.print();
        cout<<endl;
        c=a-2.5;
        cout<<"a-2.5=";
        c.print();
        cout<<endl;
        c=100+a;
        cout<<"100+a=";
        c.print();
        cout<<endl;
        c=2.5-a;
        cout<<"2.5-a=";
        c.print();
        cout<<endl;
        return  0;
}