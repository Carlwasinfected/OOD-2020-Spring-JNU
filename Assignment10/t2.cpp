// 【问题描述】请编写一个程序，实现如下功能

// 1、定义结构体student, 包括stu_id,score 2个变量。其中stu_id是一个short型变量，score为short型变量。

// 2、从键盘输入学生个数n及n个学生的数据，存储在new创建的数组a中

// 3、使用write函数，以二进制形式，将a数组中存放的n个学生一次写入out.txt文件中（不要使用循环）

// 4、使用read函数，以二进制形式，使用循环方式，从out.txt中每次读出一个学生信息，存储于new创建的数组b中

// 5、使用write函数，以文本形式，将b数组中存放的n个学生一次写入out.txt文件中，要求添加到文件末尾（不要使用循环）

// 【输入形式】

// 输入第一行是整数，表示有n个学生

// 输入第2到n+1行是学生信息，每行表示一个学生的stu_id,score

// 【输出形式】

// 输出文件名：out.txt，其中包括2次输出信息
// 【输入范例】

// 2

// 1011 90

// 1012 68

// 【输出范例】

// 无
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
//  定义结构体
struct Student
{
    short stu_id;
    short score;
};

int main()
{
    int size;
    int flag = 1;
    cin >> size;
    Student *a = new Student[size];
    string tmp = "";

    // 消除换行符
    cin.get();

    int length_per_line = 0;
    string stu_msg_all = "";
    for (int i = 0; i < size; ++i)
    {
        getline(cin, tmp);
        length_per_line = tmp.size();
        stu_msg_all += tmp;
        stu_msg_all += '\n';
        int idx = tmp.find(' ');
        a[i].stu_id = atoi(tmp.substr(0, idx).c_str());
        a[i].score = atoi(tmp.substr(idx + 1, tmp.size() - idx).c_str());
    }
    stu_msg_all.pop_back();

    // Write() 二进制写入 out file
    ofstream output_file("out.txt", ofstream::binary);
    output_file.write(stu_msg_all.c_str(), stu_msg_all.size());
    output_file.close();

    // Read() 将学生信息读入数组b
    ifstream input_file("out.txt", ifstream::binary);
    Student *b = new Student[size];

    // 逐行读取文件，结果写入数组b
    tmp.clear();
    int i = 0;
    while(getline(input_file, tmp)) {
        int idx = tmp.find(' ');
        b[i].stu_id = atoi(tmp.substr(0,idx).c_str());
        b[i].score = atoi(tmp.substr(idx+1, tmp.size() - idx).c_str());
        i++;
    }

    input_file.close();

    tmp.clear();
    
    // Write() 文本形式将b数组信息写入out.txt的末尾
    output_file.open("out.txt", ofstream::ate);
    for(int i=0; i<size; ++i) {
        tmp += b[i].stu_id;
        // tmp += ' ';
        tmp += b[i].score;
        // tmp += '\n';
    }
    tmp.pop_back();
    output_file.write(tmp.c_str(), tmp.size());
    output_file.close();
}
