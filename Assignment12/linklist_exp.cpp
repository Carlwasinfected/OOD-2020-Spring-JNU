#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*  Todo:
	1. 建表 不断insert
	2. 打印表长。
	3. 遍历打印数据
	4.执行删除 首先判断是否满足 pos>=0 && pos <=len； 不满足则failed
        PS: n看成是第n个结点之后的；  linkList初始长度为1
*/

typedef int elementType;
typedef struct node
{
    elementType data;
    node* next;
} LList, *PList;

class linkedList
{
public:
    linkedList();//构造函数
    virtual ~linkedList();//析构函数，注意要链表中所有节点的资源
    void insert( int value );//警告：必须初始化才能使用！
    bool initiate();//初始化单链表，使用new操作创建头结点。如果创建失败，则返回false，否则返回true
    bool isEmpty();//判断单链表是否为空
    //删除单链表中第pos个元素结点，并将删除的节点的值存在value中。
    //注意：如果链表为空、删除位置大于链表长度、以及删除位置为0的情况，需要终止删除并输出相应信息
    bool remove( int pos, int& value );
    void print();//顺序打印单链表，如果是单链表为空，则输出 Empty
    int Length();//返回单链表长度。如果是单链表为空，则返回-1
private:
    LList *head;
    int len;
};

//请在此处补充所有成员函数的实现

// constructor
linkedList::linkedList() {
    this->head = NULL;
    this->len = 0;
}

// destructor
linkedList::~linkedList() {
    node* ptr = this->head;
    node* nxt_ptr = ptr->next;
    do {
        delete(ptr);
        ptr = nxt_ptr;
        if (nxt_ptr != NULL) {
            nxt_ptr = nxt_ptr->next;
        }
        
    } while(ptr != NULL);
    this->len = 0;
}

// using New to generate the head node of the linkList
bool linkedList::initiate() {
    node* headNode = new node;
    if (headNode != NULL) {
        // set headNode val is 999
        headNode->data = 999;
        headNode->next = NULL;

        // headNode join the linkList
        this->head = headNode;
        this->len++;  // init length of the empty linkList is actually 1
        return true;
    } else {
        return false;
    }
}

bool linkedList::isEmpty() {
    // length are supposed to be >= 0
    if (this->len <= 1) {
        return true;
    } else {
        return false;
    }
}

void linkedList::insert(int val) {
    node* cur_tail = this->head;

    // find the current last node in the list
    while(cur_tail->next != NULL) {
        cur_tail = cur_tail->next;
    }
    
    // generate new node
    node* new_node = new node;
    new_node->data = val;
    new_node->next = NULL;

    // insert in the last of the list
    cur_tail->next = new_node;

    this->len++;
}

bool linkedList::remove( int pos, int& value ) {
    cout << "len : " << this -> len  << endl;
    if (pos+1 <= 1) {
        cout << "pos <= 0, failed" << endl;
        return false;
    } else if (pos+1 > len) {
        cout << "pos > len, failed" << endl;
        return false;
    }

    node* pre_node = this->head;
    // find pre node
    for(int i=1; i<pos; ++i) {
        pre_node = pre_node->next;
    }
    // cout << "pre_node -> data is : " << pre_node->data << endl;

    // return val
    value = pre_node->next->data;

    
    // delete node
    pre_node->next = pre_node->next->next;
    return true;
}

int linkedList::Length() {
    return this->len - 1;
}



//成员函数print
void linkedList::print()
{
    if( isEmpty() )
    {
        cout << "Empty" << endl;
        return;
    }
    LList* tmp = head->next;
    while(tmp)
    {
        cout <<tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


int main(int argc, char* argv[])
{
    linkedList L1;
    int n;
    int val;
    //初始化链表
    if(!L1.initiate())
        return 0;

    cin>>n;//输入链表中数据个数
    for(int i=0; i<n; i++) //输入n个数，并插入链表
    {
        cin>>val;
        L1.insert(val);
    }
    cout << "Origin Length：" << L1.Length() << endl;//输出链表长度
    cout << "data：" ;
    L1.print();//打印链表

    cin>>n;//输入需要删除的数据的位置
    if (L1.remove(n,val))
    {
        //删除位置n的数据，并将删除的数据值放在val中
        cout<<"Delete the data at position("<<n<<"):"<<val<<endl;
        cout<< "New Length：" << L1.Length()<< endl;//输出链表长度
        cout<< "data：" ;
        L1.print();//打印链表
    }

    return 0;
}
