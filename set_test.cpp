//
// Created by yazhi on 8/5/22.
//

#include "set_test.h"
#include <iostream>
#include <set>

using namespace std;

void main_set() {
    set<int> myset;
    //插入
    myset.insert(2);
    myset.insert(3);
    myset.insert(4);
    //删除
    myset.erase(2);
    //是否存在
    int size = myset.count(3);
    cout << "3 in set size: " << size << endl;
    //遍历
    for (int i: myset) {
        cout << i << endl;
    }
}
