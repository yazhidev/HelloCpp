//
// Created by yazhi on 7/27/22.
//
#include <iostream>
#include "pointer.h"
using namespace std;

//值传递
void change1(int n){
    cout<<"值传递--函数操作地址"<<&n<<endl;         //显示的是拷贝的地址而不是源地址
    n++;
}

//引用传递
void change2(int & n){
    cout<<"引用传递--函数操作地址"<<&n<<endl;
    cout<<"引用传递--n="<<n<<endl;
    n++;
}
//指针传递
void change3(int *n){
    cout<<"指针传递--函数操作地址 "<<n<<endl;
    *n=*n+1;
}

void func(int *p) {
    cout << "int func" << endl;
}

void func(char *p) {
    cout << "char func" << endl;
}

struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

    void printVal()
    {
        cout << "val=" << val << endl;
    }
};

//ListNode a(10);
//ListNode b(20, &a);
//testListNode(&b);
void testListNode(ListNode* head) {
    cout << "head=" << head << endl; //head=0x7ff7ba030620
    head->printVal();
    int c = (*(*head).next).val;
    cout << c << endl; //val=20
    cout << "*head=" << head->val << endl; //*head=20
}

void using_pointer() {
    int i = 12;
    int *ip = &i;
    cout << i << endl; //12
    cout << ip << endl; //0x16f15b68c
    cout << *ip << endl; //12，等效于 i

    int *p, q;
    q = 10;
    p = &q;
    cout << q << endl;
    cout << p << endl;
    *p = 100;
    cout << q << endl;

    cout << " --- a1 ---" << endl;
    int a1 = 11;
    int a2 = a1;
    cout << a2 << endl;
    a2 = 33;
    cout << a1 << endl;
}

void params_transfer()
{
    int n=10;
    cout<<"实参的地址"<<&n<<endl;
    change1(n);
    cout<<"after change1() n="<<n<<endl;
    change2(n);
    cout<<"after change2() n="<<n<<endl;
    change3(&n);
    cout<<"after change3() n="<<n<<endl;
}


void main_pointer()
{
    using_pointer();
//   func(nullptr); //nullptr 可以转换为任意指针类型和bool
//    func(0);
    params_transfer();

    ListNode a(10);
    ListNode b(20, &a);
    testListNode(&b);
}