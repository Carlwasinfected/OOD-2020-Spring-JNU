/*
  【问题描述】从键盘输入两组英文字符（包括大写和小写英文字符），每组英文字母中都没有重复字母，分别转化为小写字符并存入两个数组a和b中，以英文字母表为依据，请输出a数组和b数组中在英文字母表中最接近的两个英文字母的距离。
【输入形式】输入包括两行英文字母，有大写和小写字母，每行不超过10个元素
【输出形式】输出一个整数，表示两个数组中最接近的两个英文字母的距离，如果两个字母相同，则输出为0
【样例输入】

abxy

cAzzp

【样例输出】
0

【样例输入】

aBc

deF

【样例输出】
1

【样例输入】

xYzy

deFac

【样例输出】
18

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    string a,b;
    cin>>a;
    cin>>b;
    // 原型
    //  OutputIterator transform ( InputIterator first1, InputIterator last1,  
    //                             OutputIterator result, UnaryOperator op );  
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    
    // O(n**2)
    // 也可以用DP做，但是反而更复杂，time复杂度仍是On2
    int tmp = 0;
    int ans = 999;
    for (size_t i=0; i<a.size(); ++i) {
        for(size_t j=0; j<b.size(); ++j) {
            tmp = abs(a[i]-b[j]);
            if (tmp < ans) {
                ans = tmp;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
