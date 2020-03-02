/*
	
【问题描述】编写一个程序，计算两个3*3矩阵的相乘

【输入形式】输入包括2行，每行均为9个整数，其中第1-3个为矩阵中第一行的3个数字，第4-6位第二行的数字，第7-9位为第三行的数字。数字之间用空格分隔。
【输出形式】输出包括3行，每行包括3个数字。
【样例输入】

1 3 2 1 0 0 1 2 2

0 0 2 7 5 0 2 1 1

【样例输出】

25 17 4
0 0 2
18 12 4

*/
#include <iostream>
#include <vector>

using namespace std;

void helper(const vector<vector<int>> &a, const vector<vector<int>> &b) {
    // cal ans mat
    // O(n3)
    vector<int> ans;
    for(int i=0; i<3; ++i) {
        for (int j=0; j<3; ++j) {
            ans.push_back(a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j]);
        }
    } 
    
    // cout ans
    for(int i=0; i<9; ++i) {
        cout << ans[i];
        cout << ' ';
        if ((i+1)%3 == 0)
            cout << '\n';
    }
}

int main() {
    vector<vector<int>> a;
    vector<vector<int>> b;
    vector<int> tmp_;
    int tmp;
    // input to mat a
    for(int i=0; i<3; ++i) {
        tmp_.clear();
        for(int j=0; j<3; ++j) {
            cin>>tmp;
            tmp_.push_back(tmp);
        }
        a.push_back(tmp_);
    }

    // input to mat b
    for(int i=0; i<3; ++i) {
        tmp_.clear();
        for(int j=0; j<3; ++j) {
            cin>>tmp;
            tmp_.push_back(tmp);
        }
        b.push_back(tmp_);
    }

    helper(a,b);
}