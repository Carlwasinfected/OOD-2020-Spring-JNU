/*
【问题描述】声明一个表示时间的类CTime，可以精确表示年、月、日、小时、分、秒，请计算两个日期对象之间相隔的天数。



要求：

1、包括私有成员年、月、日、小时、分、秒。

2、请使用构造函数实现的类的初始化工作，并判断日期和时间的有效性。年月日时分秒应该在正确的范围内。考虑闰年时候二月份的情况。时间的格式是xx:xx:xx,小时不是超过23，分钟和秒不能超过59。

      1）如果日期无效，则输出 “date error! ”  并将年、月、日、小时、分、秒置为0。

      2）如果时间无效，则输出 “time error! ”  并将年、月、日、小时、分、秒置为0。

      3）如果日期和时间都有效，则根据传递的参数初始化年、月、日、小时、分、秒。

      4）构造函数的三个参数：小时、分、秒 设计为默认形成，其默认值为0。

      5)  输出"构造函数被调用"

3、请设计一个拷贝构造函数，实现将参数的值全部传递给当前对象，同时输出“拷贝构造函数被调用”

4、请设计一个析构函数，同时输出“析构函数被调用”

5、设计一个成员函数  int dayDiff(CTime t) ，用于计算当前对象与形参t之间的相隔的天数，注意相隔天数为大于等于0的正整数。注意闰年的问题。

6、设计一个成员函数 showTime()，用于显示日期，显示格式为：2020/3/12 11:50:20



提示：除了上传要求的成员函数外，你可以自由添加需要的成员函数。

main函数已经给定，请补全其他代码。



【样例输入1】

2020 3 12 11 50 20

【样例输出1】

构造函数被调用

2020/3/12 11:50:20

构造函数被调用

拷贝构造函数被调用

析构函数被调用

这两天之间相隔了7376天

拷贝构造函数被调用

析构函数被调用

这两天之间相隔了7376天

析构函数被调用

析构函数被调用



【样例输入2】

2100 2 29 10 29 59
【样例输出2】

date error!

构造函数被调用

0/0/0 0:0:0

构造函数被调用

析构函数被调用

析构函数被调用



【样例输入3】

2000 2 29 15 79 40
【样例输出3】

time error!

构造函数被调用

0/0/0 0:0:0

构造函数被调用

析构函数被调用

析构函数被调用



【样例输入4】

2007 9 31 12 89 89
【样例输出4】

date and time error!

构造函数被调用

0/0/0 0:0:0

构造函数被调用

析构函数被调用

析构函数被调用


*/
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string msg = "";
unordered_map<int, int> map_leap = {
    {1, 31},
    {2, 29},
    {3, 31},
    {4, 30},
    {5, 31},
    {6, 30},
    {7, 31},
    {8, 31},
    {9, 30},
    {10, 31},
    {11, 30},
    {12, 31}};
unordered_map<int, int> map_not_leap = {
    {1, 31},
    {2, 28},
    {3, 31},
    {4, 30},
    {5, 31},
    {6, 30},
    {7, 31},
    {8, 31},
    {9, 30},
    {10, 31},
    {11, 30},
    {12, 31}};

int isleap(int year)
{
    int flag;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {

            if (year % 400 == 0)
                flag = 1;
            else
                flag = 0;
        }
        else
            flag = 1;
    }
    else
        flag = 0;
    return flag;
}

class CTime
{
    friend void cmp_objs(CTime *&lower, CTime *&higher);

public:
    CTime(int _y, int _m, int _d, int _h = 0, int _min = 0, int _s = 0)
    {
        this->year = _y;
        this->month = _m;
        this->day = _d;
        this->hour = _h;
        this->minute = _min;
        this->second = _s;
        this->isvalid();
        cout << msg << endl;
        msg.clear();
        cout << "构造函数被调用" << endl;
    }
    CTime(const CTime &c)
    {
        cout << "拷贝构造函数被调用" << endl;
        this->year = c.year;
        this->month = c.month;
        this->day = c.day;
        this->hour = c.hour;
        this->minute = c.minute;
        this->second = c.second;
    }
    ~CTime()
    {
        cout << "析构函数被调用" << endl;
    }
    void showTime(); // show current time
    void resetDate();
    int dayDiff(CTime obj); // caluate time differences between two dates
    int isvalid();          // check whether date & time of the object is valid

private:
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
};

int CTime::dayDiff(CTime obj)
{
    int count = 0;
    int count_lower = 0;
    int count_higher = 0;
    int whole_year = abs(obj.year - this->year) - 1;
    CTime *lower_obj = this;
    CTime *higher_obj = &obj;

    cmp_objs(lower_obj, higher_obj);
    // count_whole_year
    for (int i = 1; i <= whole_year; ++i)
    {
        if (isleap(lower_obj->year + i))
        {
            count += 366;
        }
        else
        {
            count += 365;
        }
    }
    // not at the same year
    if (whole_year >= 0)
    {
        // count_lower_part
        for (int cur_m = lower_obj->month; cur_m <= 12; ++cur_m)
        {
            if (cur_m == lower_obj->month)
            {
                count_lower += map_not_leap[cur_m] - lower_obj->day + 1;
                continue;
            }
            count_lower += map_not_leap[cur_m];
        }
        if (isleap(lower_obj->year) && lower_obj->month <= 2)
        {
            count_lower++;
        }
        // count_higher_part
        for (int cur_m = higher_obj->month; cur_m >= 1; --cur_m)
        {
            if (cur_m == higher_obj->month)
            {
                count_higher += higher_obj->day - 1;
                continue;
            }
            count_higher += map_not_leap[cur_m];
        };
        if (isleap(higher_obj->year) && higher_obj->month >= 3)
        {
            count_higher++;
        }
    }
    else
    {
        // same year

        for (int cur_m = lower_obj->month; cur_m != higher_obj->month; ++cur_m)
        {
            if (cur_m == lower_obj->month)
            {
                count += map_not_leap[cur_m] - lower_obj->day + 1;
                continue;
            }
            count += map_not_leap[cur_m];
        }
        count += higher_obj->day - 1;
        if (isleap(lower_obj->year) && (lower_obj->month <= 2 || higher_obj->month >= 3))
        {
            count++;
        }
    }
    // cal result
    count += count_lower;
    count += count_higher;
    return count;
}

int CTime::isvalid()
{
    int flagDate = 1;
    int flagTime = 1;
    // check date
    // year
    if (year <= 0)
    {
        flagDate = 0;
        resetDate();
    }
    // month
    if (month <= 0 || month >= 13)
    {
        flagDate = 0;
        resetDate();
    }
    // day
    // if is leap year
    if (isleap(this->year))
    {
        // lookup the map
        if (day < 1 || day > map_leap[month])
        {

            flagDate = 0;
            resetDate();
        }
    }
    else
    {
        if (day < 1 || day > map_not_leap[month])
        {
            flagDate = 0;
            resetDate();
        }
    }

    // check time
    //hour
    if (hour < 0 || hour >= 24)
    {

        flagTime = 0;
        resetDate();
    }
    //minute
    if (minute < 0 || minute > 59)
    {

        flagTime = 0;
        resetDate();
    }
    //second
    if (second < 0 || second > 59)
    {
        flagTime = 0;
        resetDate();
    }

    // show if errors exit
    if (!flagDate && !flagTime)
    {
        msg += "date and time error!";
        return !flagTime || !flagDate ? 0 : 1;
    }

    if (!flagTime)
    {
        msg += "time error!";
    }
    if (!flagDate)
    {
        msg += "date error!";
    }
    return !flagTime || !flagDate ? 0 : 1;
}

void CTime::resetDate()
{
    year = month = day = 0;
    hour = minute = second = 0;
}

void cmp_objs(CTime *&lower, CTime *&higher)
{
    int diff_year = lower->year - higher->year;
    if (diff_year > 0)
    {
        swap(lower, higher);
        return;
    }
    if (diff_year == 0)
    {
        int diff_m = lower->month - higher->month;
        if (diff_m > 0)
        {
            swap(lower, higher);
            return;
        }
        if (diff_m == 0)
        {
            int diff_d = lower->day - higher->day;
            if (diff_d > 0)
            {
                swap(lower, higher);
                return;
            }
        }
    }
    return;
}

void CTime::showTime()
{
    cout << year << '/' << month << '/' << day << ' ' << hour << ':' << minute << ':' << second << endl;
}

int main()
{
    int year, month, day, hour, minute, second;
    cin >> year >> month >> day >> hour >> minute >> second;
    CTime t1(year, month, day, hour, minute, second);
    t1.showTime();
    CTime t2(2000, 1, 1); //利用默认形参将时间初始化为00:00:00
    if (t1.isvalid())     //如果日期和时间合法，则计算天数
    {
        int days = 0;
        days = t1.dayDiff(t2);
        cout << "这两天之间相隔了" << days << "天" << endl;
        days = t2.dayDiff(t1);
        cout << "这两天之间相隔了" << days << "天" << endl;
    }
}
