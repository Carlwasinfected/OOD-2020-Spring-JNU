#include <iostream>
#include <vector>
using namespace std;

// 【样例输入】
// 4
// 6 8 7 5 
// 9 
// 1 3 20 -15 80 150 -9 1 6 6 12 16 -33 -48 6 11 0 -10

// 【样例输出】
// 26 
// -17117/2640

template<typename T>
class Array
{
//请完成类的设计
public:
    Array(int n) {
        this->vec.resize(n);
    }
    ~Array() {}

    void input(int n) {
        int cnt = 0;
        T tmp;
        // 获取输入 个数不确定 但不能超过n
        while (cnt < n && cin>>tmp) {
            this->vec[cnt] = tmp;
            cnt++;
        }
    }

    void input_fr(int n) {
        int cnt = 0;
        while(cnt < n) {
            int a,b;
            cin>>a;
            cin>>b;
            T tmp(a,b);
            this->vec[cnt] = tmp;
            cnt++;
        }
    }
    // 重载下标运算符
    T& operator[] (int idx) {
        if (idx >=0 && idx < this->vec.size()) {
            return this->vec[idx];
        } else {
            throw 0;
        }
    }

private:
    vector<T> vec;
};



class Fract
{
//请完成类的设计
public:
    Fract() {}

    Fract(int _n, int _m) {
        // 判断正负
        if ((_n<0 && _m>0) || (_n>0 && _m<0)) {
            this->flag = -1;
        } else {
            this->flag = 1;
        }
        
        int _a = abs(_n);  // 分子
        int _b = abs(_m);  // 分母
        int temp;

        // 化简成最简分数 -- 欧几里得算法
        while(_b!=0) {
            temp = _a % _b;
            _a = _b;                      //通过循环找到最大公约数a
            _b = temp;
        }
        this->a = abs(_n) / _a;
        this->b = abs(_m) / _a;
    }

    ~Fract() {}

    void show() {
        if (this->flag == -1) {
            cout << '-';
        } 
        if (this->b == 1 || this->a == 0) {
            cout << this->a << endl;
        } else {
            cout << this->a << '/' << this->b << endl;
        }
    }

    Fract& operator +=(Fract& fr) {
        // if (this->a == 0) {
        //     return fr;
        // }
        // 分子
        int up = (this->flag * this->a * fr.get_b()) + (fr.get_flag() * fr.get_a() * this->b);
        int down = this->b * fr.get_b();
        int new_flag = (up * down) < 0 ? -1 : 1;

        // this->a = abs(up);
        // this->b = abs(down);
        // this->flag = new_flag;
        Fract* res_fr = new Fract(up,down);
        *this = *res_fr;
        return *this;
    }

    // getter
    int get_a() { return this->a;}

    int get_b() { return this->b;}

    int get_flag() { return this->flag;}

private:
    int a;
    int b;
    int flag;  // -1 or 1
};


int main()
{
    unsigned int n;
    cin >> n;
    Array<double> db(n);
    db.input(n);
    double dbsum(0.0);
    for (unsigned int i = 0; i < n; i++)
        dbsum += db[i];
    cout << dbsum << endl;

    cin >> n;
    Array<Fract> fr(n);
    fr.input_fr(n);
    Fract frsum(0, 1);
    for (unsigned int i = 0; i < n; i++) {
        frsum += fr[i];
    }

    frsum.show();
}
