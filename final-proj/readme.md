# C++

## 零碎


- 每周作业开放时间是周二到周四

- 大作业推崇QT 必须要有界面； 代码风格遵循==Google开源项目编程规范指南==

- QT疑难杂症&实用技巧： <https://blog.csdn.net/qq21497936/article/details/88672642>

- QT中所有的本类的widgets、layout对象等都在UI指针中

- QT中 槽函数定义写在相应窗口类的.H里。需要注明是```public slots: | private slots：```而具体的函数定义写在.cpp里。==槽函数和信号函数都**没有参数**==

  [自定义槽 demo1](<https://blog.csdn.net/small_prince_/article/details/96106084>)

  信号槽和event的区别：<https://blog.csdn.net/lsfreeing/article/details/80301163>

- QT中```QDebug()```类似cout 可以输出调试string到控制台 供调试用。

  ```cpp
    // basic use
      qDebug() << "Date:" << QDate::currentDate();
      qDebug() << "Types:" << QString("String") << QChar('x') << QRect(0, 10, 50, 40);
      qDebug() << "Custom coordinate type:" << coordinate;
   // qstring <=> std :: string 相互转换
  
      string s = qstr.toStdString();
  
      QString qstr2 = QString::fromStdString(s);
  ```

  [reference here](<https://doc.qt.io/qt-5/qdebug.html>)

- QT的事件处理机制——（QEvent *event 分为两大类）

  - 介绍&详解：

    - <https://blog.csdn.net/weixin_38090427/article/details/83097355>
    - <https://www.jianshu.com/p/48f007c2de09>

  - [code 怎么重写、触发事件](<https://blog.csdn.net/weixin_41331879/article/details/81587418>)

    PS:文档里可以查。widgets对象都定义好了一些相应事件的虚函数。直接在类的相应.CPP中重写该事件的函数即可。

## QT

3.27 入门

- hello world级别：<https://blog.csdn.net/larger5/article/details/79941031>
- 踩坑安装。 需要复制![1585247549756](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1585247549756.png)



3.28

- [QT5.12 无法添加槽函数 查找/添加槽错误](<https://blog.csdn.net/weixin_38815609/article/details/89398546>)

- QT播放视频(开始界面右侧介绍房贷相关知识；左侧五种选择：

  - <https://blog.csdn.net/itas109/article/details/83829396>
  - <https://blog.csdn.net/qq21497936/article/details/88672642>

- QT界面里根据选择不同 出现不同的后续界面

  使用 QStackedWidget，或者 QStackedLayout



### 开发 4.5- MainWindow

- **今日目标**:

  - [x] 开发完login窗口

  - [x] 组合贷款类窗口

  - [x] 组合贷款代码逻辑

    

- 右侧科普视频

- 主界面

- 坑

  - 构造函数里不好用自己class里的成员函数，因为此时构造对象还没有完成 会报undefined

  - 友元定义要在最前。要不然类在用的时候找不到 不认识

  - 播放不了视频——安装LAVfilters

  - 查询界面很明显是提交表单。 layout选择表单布局

  - ![1586102731809](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1586102731809.png)

    是因为coderunner自动只编译当前文件。改用g++手动编译

    ![1586102792652](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1586102792652.png)





### 开发 4.6 - 组合贷款

- 目标：

  - [ ] 完成组合贷款bind test
    - [x] 完成text browser显示结果
    - [x] 完成槽各函数编写、绑定
    - [x] 完成各API调用测试 结果显示正确
    - [x] 写入cache（最近五次）
    - [x] 过滤非法输入 警告
  - [ ] 设计类 完善文档
  - [ ] QT creator设置Git

- 收获&坑：

  - textbrowser的setText用tr可以写html，可以用于颜色渲染、高亮、加粗等等格式

    ```.setText(tr("html code..."))```

  - 忘记加类的命名空间

    ![1586187897056](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1586187897056.png)

    ![1586352611709](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1586352611709.png)

  - 重写```closeEvent()```  这个函数在窗口点右上角的X时被调用； 重写后三种贷款的窗口点X后返回主界面而不是退出。







### 开发 4.7 - MainWindow

- 目标:
  - [x] login_dialog 警告窗
  - [x] mainwindow实现控件自适应
  - [x] ```CombineLoanWindow::textBrowser`` `设置html格式 实现关键字高亮
  - [x] 修复```CheckInputValid()```初始输入的bug:利率为零时计算结果为负数
  - [x] 实现查询近size()次///五次历史记录的窗口
  - [x] 添加Cache清零功能
  - [ ] mainwindow实现暂停和全屏
  - [ ] tbd



### 开发 4.8 - CommWindow

- 坑

  - 默认qstackedwidget必须所有page的size一样大，以最大的那个为准;     ==已解决==

    ![1586349026710](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1586349026710.png)

    

### 开发4.9 - CommWindow

- 目标
  - [x] 开发商业贷款的模型
- bug
  - [ ] 进入子窗口以后主窗口视频仍然继续，有声音
  - [x] cache size可以大于5
  - [ ] CommWindow的月利率应该是```/1200.0``` 而不是```/12.0```



### 开发4.10 - AccuWindw

- 目标

  - [x] 完成AccuFundWindow的ui
  - [x] 完成AccuFundWindow的初始化逻辑
  - [x] 完成AccuFundModel并且test
  - [x] 增加利率选择自定义还是mapping的下拉框 & QStackedWidget

- bug

  - > ![1586530312346](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1586530312346.png)
    >
    > 原因：忘记设置combobox和stackwidget之间的槽函数的关联槽函数了

  

### 开发 4.17 - fix bugs

- todo

  - [ ] 美化QT

  - [x] 设置MainWindow视频暂停和播放bug

  - ![1587187063353](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1587187063353.png)

    ​	![1587187075841](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1587187075841.png)

    ![1587187147680](C:\Users\41036\AppData\Roaming\Typora\typora-user-images\1587187147680.png)

     显示不出用户名； 原因：MainWindow构造放在了设置全局的```GlobalVal::cur_username```之前，调整一下代码顺序就好了

  - 
