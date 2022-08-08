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

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    //排序
    sort(res.begin(), res.end());
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        if (num > 0) return res;
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int l = i + 1;
        int r = nums.size() - 1;
        while (l < r) {
            int sum = num + nums[l] + nums[r];
            if (sum > 0) {
                r--;
            } else if (sum < 0) {
                l++;
            } else {
                //如何只是实例化带元素的vector？
                vector<int> temp;
                temp.push_back(num);
                temp.push_back(nums[l]);
                temp.push_back(nums[r]);
                res.push_back(temp);
                while (r > l && nums[r] == nums[r - 1]) {
                    r--;
                }
                while (l < r && nums[l] == nums[l + 1]) {
                    l++;
                }
                r--;
                l++;
            }
        }
    }
    return res;
}

void main_vector() {
    vector<int> pa = vector<int>{-1,0,1,2,-1,-4};
    threeSum(pa);
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
    //获得大小
    ve.size();


}
