#include <iostream>
#include <cstdio>

using namespace std;

//1瓶水需要1元，用2个空瓶可以换1瓶水，3瓶盖也可以换1瓶水。小明现在有20元，请问最终可以买到多少瓶水？请使用递归实现。

void helper(int cur_money, int max_money, int &count, int remain_b, int remain_c) {
    if (cur_money > max_money) {
        return;
    }

    count++; remain_b++; remain_c++;
    
    while(1) {
        if(remain_b <2 && remain_c < 3)
            break;
        if(remain_b>=2) {
            // from bottles
            int sec_b = remain_b/2;
            count += sec_b;
            // update b & c
            remain_b -= 1 * sec_b;
            remain_c += sec_b;
        }        
        if(remain_c>=3) {
            // from caps
            int sec_c = remain_c/3;
            count += sec_c;
            // update b & c
            remain_c -= 2 * sec_c;
            remain_b += sec_c;
        }
    }
   
    // remain_c %= 3; 
    // remain_b %= 2;

    helper(cur_money+1,max_money, count, remain_b, remain_c);
}

int main() {
   

    int max_money = 0, count = 0;
    cin>>max_money;
    helper(1,max_money,count,0,0);
    cout<<count<<endl;
    
    return 0;
}
