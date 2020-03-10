// 【问题描述】

// 有个银行需要开发一个用户管理程序，功能要求如下：

// 1、记录用户的账号、姓名、性别、年龄、现有存款

// 2、可以动态管理用户的存款

// （1）当用户存钱时将金额添加到现有存款内

//   (2）当用户取钱时，从现有账户中扣除

//   (3)  如果取钱金额超过现有存款，则拒绝取钱操作。

//   (4) 如果录入为100.897元，即为无效输入，应该拒绝操作。原因：录入的数据是以“元”为单位，金额的最小单位是分。请同学们考虑一下，如果能有效应对这类问题。



// 请根据给定的main函数设计一个Account类实现上述功能。



// 【样例输出】

// Tom Black的存款为2000.89

// 您输入的金额不合法

// Tom Black的存款为2000.89

// Tom Black的存款为12000.89

// Tom Black的存款为1999.89

// 您输入的金额不合法

// Tom Black的存款为1999.89

// 您的存款金额不足

// Tom Black的存款为1999.89

// 您输入的金额不合法

// Jerry Black的存款为0.00
#include  <iostream>
#include  <iomanip>
using  namespace  std;

#include <string>
class Account {
    public:
        // 构造函数
        Account() {
            acc = "";
            name = "";
            sex = "";
            age = 0;
            cur_money = 0.00;
        }

        void init(string _acc, string _name, string _sex, int _age, double _cur_money) {
            acc = _acc;
            name = _name;
            sex = _sex;
            age = _age;
            // 判断输入是否合法
            double tmp = _cur_money * 100;
            if((tmp - (int)tmp) != 0) {
                cout << "您输入的金额不合法" << endl;
                return;
            }         
            cur_money = _cur_money;
        }

        void printmoney() {
            printf("%s的存款为%.2f\n", this->name.c_str(), this->cur_money);
        }

        void deposit(const double &depo_money);

        void withdraw(double w_mon);


    private:
        string acc;
        string name;
        string sex;
        int age;
        double cur_money;
};  

void Account::deposit(const double &depo_money) {
    // 判断输入是否合法
    double tmp = depo_money * 100;
    if((tmp - (int)tmp) != 0) {
        cout << "您输入的金额不合法" << endl;
        return;
    }
    // 存钱成功
    this->cur_money += depo_money;
    return;
}

void Account::withdraw(double w_mon) {
    // 判断输入是否合法
    double tmp = w_mon * 100;
    if((tmp - (int)tmp) != 0) {
        cout << "您输入的金额不合法" << endl;
        return;
    }
    // 判断存款是否足够
    if(cur_money - w_mon < 0) {
        cout << "您的存款金额不足" << endl;
        return;
    }
    //取钱成功
    this->cur_money -= w_mon;
}


int  main()
{
        Account  tom;
        tom.init("32020320011001876X",  "Tom  Black",  "男",  19,  2000.89);
        tom.printmoney();//输出：Tom  Black的存款为2000.89
        tom.deposit(89.471);//输出：您输入的金额不合法
        tom.printmoney();//输出：Tom  Black的存款为2000.89
        tom.deposit(10000);
        tom.printmoney();//输出：Tom  Black的存款为12000.89
        tom.withdraw(10001);
        tom.printmoney();//输出：Tom  Black的存款为1999.89
        tom.withdraw(10000.123);//输出：您输入的金额不合法
        tom.printmoney();//输出：Tom  Black的存款为1999.89
        tom.withdraw(10000.9);//输出：您的存款金额不足
        tom.printmoney();//输出：Tom  Black的存款为1999.89
        Account  jerry;
        jerry.init("320203200910116569",  "Jerry  Black",  "女",  11,  100.956);//输出：您输入的金额不合法
        jerry.printmoney();//输出：Jerry  Black的存款为0.00
}
