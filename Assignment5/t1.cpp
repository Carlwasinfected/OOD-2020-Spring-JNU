// 【问题描述】设计一个CRectangle类，其中包括CPoint类的两个对象成员，
// 表示左上角和右下角的两个点。要求求解矩形的面积。

// 注意，每个类的构造函数、拷贝构造函数需要输出“*** is called”,具体的请根据输出进行分析。

#include  <iostream>
using  namespace  std;
//请在这里补充CPoint，CRectangle类的定义
class CPoint {
    friend class CRectangle;
    public:
        // CPoint construction function
        CPoint(int _x = 0, int _y = 0) : x(_x), y(_y) {
            cout << "CPoint contstructor with default value(0,0) is called." << endl;
        }
        CPoint(const CPoint &exp) {
            this->x = exp.x;
            this->y = exp.y;
            cout << "CPoint copy contstructor is called." << endl;
        }
        // CPoint& oprator = (const CPoint& _point) {
        //     this->x = _point.x;
        //     this->y = _point.y;
        //     return *this;
        // }

    private:
        int x;
        int y;
};

class CRectangle {
    public :
        // rect 1
        CRectangle() {
            cout << "CRectangle default contstructor is called." << endl;
        }
        // rect 2
        CRectangle(const CPoint lu, const CPoint rd) : left_up(lu), right_down(rd) {
            cout << "CRectangle contstructor with (CPoint,CPoint) is called." << endl;
        }
        // rect 4
        CRectangle(const CRectangle &cr) : left_up(cr.left_up), right_down(cr.right_down) {
            cout << "CRectangle copy contstructor is called." << endl;
        }
        // rect 3
        CRectangle(int a, int b, int c, int d) : left_up(a,b), right_down(c,d) {
            cout << "CRectangle contstructor with (int,int,int,int) is called." << endl;
        }
        int GetArea() {
            int width = abs(left_up.x - right_down.x);
            int height = abs(left_up.y - right_down.y);
            return width * height;
        }
    private:
        CPoint left_up;
        CPoint right_down;
};



int  main()
{
        int  a=1,  b=1,  c=6,  d=11;
        cout<<"#  Define  p1  ######"<<endl;
        CPoint  p1;
        cout<<"#  Define  p2  ######"<<endl;
        CPoint  p2(10,20);
        cout<<"#  Define  rect1  ######"<<endl;
        CRectangle  rect1;
        cout<<"#  Define  rect2  ######"<<endl;
        CRectangle  rect2(p1,  p2);
        cout<<"#  Define  rect3  ######"<<endl;
        CRectangle  rect3(a,  b,  c,  d);
        cout<<"#  Define  rect4  ######"<<endl;
        CRectangle  rect4(rect2);
        cout<<"#  Calculate  area  ######"<<endl;
        cout  <<  "rect1面积为"  <<  rect1.GetArea()  <<  endl;
        cout  <<  "rect2面积为"  <<  rect2.GetArea()  <<  endl;
        cout  <<  "rect3面积为"  <<  rect3.GetArea()  <<  endl;
        cout  <<  "rect4面积为"  <<  rect4.GetArea()  <<  endl;
        system("pause");
        return  0;
}
