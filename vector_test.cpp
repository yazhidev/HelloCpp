//
// Created by yazhi on 7/27/22.
//

#include <iostream>
#include <vector>
#include "vector_test.h"

using namespace std;

void print_vector(vector<int> & v) {
    for (int i : v)
        cout << i << " ";
    cout << "" << endl;
}

void main_vector() {
    vector<int> ve;
    //增
    ve.push_back(1);
    ve.push_back(2);
    ve.push_back(3);
    print_vector(ve);
    //删末尾，注意判空，否则会抛异常
    if (!ve.empty())
    {
        ve.pop_back();
    }
    print_vector(ve);
    ve.insert(ve.begin() + 1, 11);
    print_vector(ve);
    //改
    ve[0] = 10; //越界访问不会提示
    ve[30] = 33;
    ve.at(1) = 30; //越界会报错
    print_vector(ve);
    //删指定位置，传入迭代器。begin 代表第 0 位
    ve.erase(ve.begin() + 1);
    print_vector(ve);


}
