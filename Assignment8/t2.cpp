/* 
@title：虚基类设计
@description:
  【问题描述】

声名一个基类vehicle,有私有成员maxspeed和weight，公有成员run()和stop(),以及构造和析构函数。

从vehicle派生bicycle和motorcar, bicycle有私有成员height， motorcar有私有成员seatnum,以及各自的构造函数和析构函数。

从bicycle和motorcar派生出motorcycle，观察虚基类对继承的影响。

定义一个motorcycle的对象，分别调用run()和stop(),观察构造/析构函数的调用情况。

注意：构造函数和析构函数中均为cout语句，说明哪个构造/析构函数被调用。

该题重点和难点在于构造函数的设计，需考虑怎么给基类及最远基类传递参数。


【样例输出】

vehicle constructor called. maxspeed:3; weight4

bicycle constructor called. height:1

motorcar constructor called. seatnum:2

motorcycle constructor called

vehicle run

vehicle stop

motorcycle destructor called

motorcar destructor called. seatnum:2

bicycle destructor called. height:1

vehicle destructor called. maxspeed:3; weight4
*/

#include  <iostream>
using  namespace  std;

class vehicle {
    public:
        vehicle(int _maxspeed, int _weight) {
            this->maxspeed = _maxspeed;
            this->weight = _weight;
            cout << "vehicle constructor called. maxspeed:" << this->maxspeed << "; weight" << this->weight << endl;
        }
        ~vehicle() {
            cout << "vehicle destructor called. maxspeed:" << this->maxspeed << "; weight" << this->weight << endl;
        }
        void run() {
            cout << "vehicle run" << endl;
        }
        void stop() {
            cout << "vehicle stop" << endl;
        }

    private:
        int maxspeed;
        int weight;
};

class bicyle: virtual public vehicle {
    public:
        bicyle(int _height, int _maxspeed, int _weight) : vehicle(_maxspeed, _weight) {
            this->height = _height;
            cout << "bicycle constructor called. height:" << this->height << endl;
        }
        ~bicyle() {
            cout << "bicycle destructor called. height:" << this->height << endl;
        }
    
    private:
        int height;
};

class motorcar: virtual public vehicle {
    public:
        motorcar(int _setnum, int _maxspeed, int _weight) : vehicle(_maxspeed, _weight){
            this->setnum = _setnum;
            cout << "motorcar constructor called. setnum:" << this->setnum << endl;
        }
        ~motorcar() {
            cout << "motorcar destructor called. setnum:" << this->setnum << endl;
        }
    
    private:
        int setnum;
};

class motorcycle: public bicyle, public motorcar {
    public:
        motorcycle(int _height, int _setnum,  int _maxspeed, int _weight): vehicle(_maxspeed, _weight), 
            bicyle(_height, _maxspeed, _weight), motorcar(_setnum, _maxspeed, _weight) {
                cout << "motorcycle constructor called" << endl;
        }
        ~motorcycle() {
            cout << "motorcycle destructor called" << endl;
        }
};

int  main(int  argc,  char  *argv[])
{
        motorcycle  m(1,  2,  3,  4);//1表示height，2表示setnum，3表示maxspeed，4表示weight
        m.run();
        m.stop();
        return  0;
}
