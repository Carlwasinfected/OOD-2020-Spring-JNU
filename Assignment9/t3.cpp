// 请定义一个Point类，将前置++和后置++运算符重载为成员函数，实现成员变量m_x和m_y的加一操作。
// 同时重载流插入运算符，实现对Point类对象的格式化输出。例如
// Point p；
// cout<<p;
// 输出结果为：
// （0,0）

// 请根据给定的main函数，设计Point类。

// 【样例输出】

// (1,3)

// (1,3)

// (3,5)

#include  <iostream>
using  namespace  std;

class Point {
    private:
        int x,y;

    public:
        Point() {}
        Point(int _x, int _y) : x(_x), y(_y) {}

        /* 重载Point.operator */
        // a++ @parm：int-->哑元
        Point operator ++ (int) {
            Point old(this->x, this->y);
            x++;
            y++;
            return old;
        }
        // ++a
        Point operator ++ () {
            x++;
            y++;
            return *this;
        }

        // cout
        friend ostream& operator << (ostream& os, const Point& a);
};

ostream& operator << (ostream& os, const Point& a) {
    os << '(' << a.x << ',' << a.y << ')' << std::endl;
    return os;
}

int  main()
{
        Point  a(1,3);
        cout<<a;
        cout<<a++;
        cout<<++a;
        return  0;
}



