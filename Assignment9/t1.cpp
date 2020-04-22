// 【问题描述】

// 请定义一个复数类，将+/-运算符重载为成员函数，实现复数与复数的加减及复数与浮点数的加减。

// 请根据给定的main函数，设计Complex类。

// 【样例输出】

// a+b=4+3i

// a-b=2+5i

// a+100=103+4i

// a-2.5=0.5+4i
#include  <iostream>
using  namespace  std;

class Complex {
    private:
        float real;  // 实部
        float cmp;  // 虚部

    public:
        Complex(float _real, float _cmp) : real(_real), cmp(_cmp) {}
        Complex() {}
        void print() {
            cout << this->real << '+' << this->cmp << 'i' << endl;
        }
        // 双目运算符 重载为类成员函数 返回类型为Complex对象
        Complex operator + (const Complex& b) {
            Complex* obj_ptr = new Complex();
            obj_ptr->real = this->real + b.real;
            obj_ptr->cmp = this->cmp + b.cmp;

            return *obj_ptr; 
        }

        Complex operator - (const Complex& b) {
            Complex* obj_ptr = new Complex();
            obj_ptr->real = this->real - b.real;
            obj_ptr->cmp = this->cmp - b.cmp;

            return *obj_ptr; 
        }

        Complex operator + (const float _real) {
            Complex* obj_ptr = new Complex();
            obj_ptr->real = this->real + _real;
            obj_ptr->cmp = this->cmp;

            return *obj_ptr; 
        }

        Complex operator - (const float _real) {
            Complex* obj_ptr = new Complex();
            obj_ptr->real = this->real - _real;
            obj_ptr->cmp = this->cmp;

            return *obj_ptr; 
        }
};



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

        return  0;
}
