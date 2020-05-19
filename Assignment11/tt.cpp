#include <iostream>
using namespace std;

class FileError : public exception
{

public:
    const char *what(void) const throw()
    {

        return "文件访问失败";
        　　
    }
};

int main(void)
{
    　
    try
    {

        //throw FileError();
        　　　　char *p = new char[0xffffffff]

　　
    }

    　　catch (exception &ex)
    { //使用标准异常类，可以只写一个catch，利用多态就可以完成。

        　　　　cout << ex.what() << endl;

        　　　　return -1;

        　　
    }
}