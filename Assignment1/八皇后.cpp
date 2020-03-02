#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;
typedef pair<int, int> point; // <x, y>

int main()
{
    int flag = 0;
    int point_x;
    int point_y;
    int dsc = 1;
    string s; // input
    getline(cin, s);

    // 去重
    unordered_map<int, point> map;
    unordered_set<int> set;
    for (int i = 0; i < s.size(); ++i)
    { // i from 1 to 8
        if (s[i] == '*')
        {
            point_y = i + 1;
        }
        if (map.find(i + 1) == map.end())
        {
            map[i + 1] = make_pair(s[i] - '0', i + 1); // 1<=x or y<=8
            set.insert(s[i] - '0');
        }
        else
        {
            flag = 1;
            break;
        }
    }

    // find point_x
    for (int i = 1; i <= s.size(); ++i)
    {
        if (set.find(i) == set.end())
        {
            point_x = i;
            break;
        }
    }
    // check availablity
    for (int cur_y = point_y + 1; cur_y <= s.size(); ++cur_y)
    {
        int up_x = point_x + dsc;
        int low_x = point_x - dsc;
        unordered_map<int, point>::iterator it = map.find(cur_y);
        if (it->second.first == up_x || it->second.first == low_x)
        {
            flag = 1;
            break;
        }
        else
        {
            dsc++;
        }
    }

    dsc = 1;
    for (int cur_y = point_y - 1; cur_y >= 1; --cur_y)
    {
        int up_x = point_x + dsc;
        int low_x = point_x - dsc;
        unordered_map<int, point>::iterator it = map.find(cur_y);
        if (it->second.first == up_x || it->second.first == low_x)
        {
            flag = 1;
            break;
        }
        else
        {
            dsc++;
        }
    }

    if (flag == 0)
    {
        cout << point_x << endl;
    }
    else
    {
        cout << "No Answer" << endl;
    }

    return 0;
}
