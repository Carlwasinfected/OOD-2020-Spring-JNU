// 【问题描述】请编写一个程序，实现如下功能

// a.txt文件中已经预先存储了一组数据，以空格分隔，数据的个数不确定。

// 从a.txt文件中读取数据，并将从小到大排序后的数据输出到b.txt文件

// b.txt文件中数据以空格分隔
// 【输入形式】

// 输入文件名：a.txt
// 【输出形式】

// 输出文件名：b.txt

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    ifstream input_file;
    input_file.open("./a.txt");
    input_file>>noskipws;
    vector<float> vec;
    char tmp_char;
    string tmp_num_str = "";

    // input file内容写入vector
    while(!input_file.eof()) {
        input_file>>tmp_char;
        if(tmp_char == ' ') {
            vec.push_back(atof(tmp_num_str.c_str()));
            tmp_num_str = "";
        } else {
            tmp_num_str += tmp_char;
        }    
    }
    tmp_num_str.pop_back();
    vec.push_back(atof(tmp_num_str.c_str()));

    // 增量排序
    sort(vec.begin(), vec.end());

    // 写入output file
    ofstream output_file;
    output_file.open("b.txt");
    for(auto& num : vec) {
        output_file << num;
        if (num != vec[vec.size()-1]) {
            output_file << ' ';
        }
    }

    // 关闭文件
    output_file.close();
    input_file.close();
}
