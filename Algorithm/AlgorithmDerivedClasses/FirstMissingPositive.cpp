//
//  FirstMissingPositive.cpp
//  Algorithm
//  https://leetcode-cn.com/problems/first-missing-positive/
//  Created by 周智伟 on 2019/10/30.
//  Copyright © 2019 vege. All rights reserved.
//

#include "FirstMissingPositive.hpp"
#include <iostream>

FirstMissingpositive::FirstMissingpositive() {
    mTitle = "缺失的第一个正数";
    mInputDescription = DescriptionPrefix + mTitle + "\n" + "请输入整数数组（数字之间以空格隔开）:";
}

bool FirstMissingpositive::verifyInput() {
    dataSource.clear();
    int nRead = 0;
    while (std::cin >> nRead) {
        dataSource.push_back(nRead);
        if (std::cin.get() == '\n') {
            break;
        }
    }
    return true;
}

void FirstMissingpositive:: coutResult() {
    std::cout << "缺失的第一个正数是：" << search() << std::endl;
}

//MARK:Private
int FirstMissingpositive:: search() {
    dataSource.insert(dataSource.begin(), 0);
    for (int i = 1; i < dataSource.size(); i ++) {
        int value = dataSource[i];
        if (value >= 0 && value < dataSource.size()){
            int temp = dataSource[i];
            dataSource[i] = dataSource[value];
            dataSource[value] = temp;
        }
    }
    
    for (int i = 1; i < dataSource.size(); i ++) {
        if (dataSource[i] != i) {
            return i;
        }
    }
    return int(dataSource.size());
}
