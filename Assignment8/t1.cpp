/*
【问题描述】

编写一个Shape类并派生出Circle类和Rectangle类，观察运行机制。

shape类有以下成员

1）私有成员m_ID

2）公有getter和setter

3）计算面积函数getArea()，返回0;

4）构造与析构函数

Circle类从shape类继承，并派生以下成员

1）私有成员r

2）公有getter和setter

3）计算面积函数getArea()，返回计算面积;

4）构造与析构函数

Rectangle类从shape类继承，并派生以下成员

1）私有成员h,w

2）公有getter和setter

3）计算面积函数getArea()，返回计算面积;

4）构造与析构函数


【样例输出】

Shape constructor called:1

Shape constructor called:2

Circle constructor called:2

Shape constructor called:3

Rectangle constructor called:3

Shape的面积0

Circle的面积50.2654

Rectangle的面积20

Rectangle destructor called:3

Shape destructor called:3

Circle destructor called:2

Shape destructor called:2

Shape destructor called:1

*/

#include <iostream>

using namespace std;
const  float  pi=3.14159;
// todo

class Shape {
    public:     
        Shape(int id_) {
            this->m_ID = id_;
            cout << "Shape constructor called:" << m_ID << endl;
        }
        ~Shape() {
            cout << "Shape destructor called:" << this->getID() << endl;
        }
        
        // getter & setter
        int getID() {
            return this->m_ID;
        }
        void setID(int input_id) {
            this->m_ID = input_id;
        }

        virtual float getArea() {
            return 0;
        }
    private:
        int m_ID; 
};

class Circle: public Shape {
    public: 
        Circle(int r_, int id_) : Shape(id_){
            this->r = r_;
            cout << "Circle constructor called:"<< id_ << endl;
        }
        ~Circle() {
            cout << "Circle destructor called:" << this->getID() << endl;
        }
        // getter & setter
        int getR() {
            return this->r;
        }
        void setR(int r_) {
            this->r = r_;
        }

        virtual float getArea() {
            return pi * r * r;
        }
    private:
        int r;
};

class Rectangle : public Shape {
    public:
        Rectangle(int h_, int w_, int id_) : Shape(id_) {
            this->h = h_;
            this->w = w_;
            cout << "Rectangle constructor called:" << id_ << endl;
        }
        ~Rectangle() {
            cout << "Rectangle destructor called:" << this->getID() << endl;
        }
        // getter & setter
        int getH() {
            return this->h;
        }
        void setH(int h_) {
            this->h = h_;
        }
        int getW() {
            return this->w;
        }
        void setW(int w_) {
            this->w = w_;
        }

        virtual float getArea() {
            return h * w;
        }
    
    private:
        int h;
        int w;
};

int  main()
{
        Shape  s(1);//1表示ID
        Circle  c(4,2);//4表示半径，2表示ID
        Rectangle  r(4,  5,3);//4和5表示长和宽，3表示ID
        cout<<"Shape的面积"<<s.getArea()<<endl;
        cout<<"Circle的面积"<<c.getArea()<<endl;
        cout<<"Rectangle的面积"<<r.getArea()<<endl;
}
