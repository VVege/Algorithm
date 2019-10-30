//
//  Quicksort.cpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/28.
//  Copyright © 2019 vege. All rights reserved.
//

#include "Quicksort.hpp"
#include <string>
#include <iostream>

Quicksort::Quicksort() {
    mTitle = "快速排序算法";
    mInputDescription = DescriptionPrefix + mTitle + "\n" "请输入要排序的数组（数字之间以空格隔开）:";
}

bool Quicksort::verifyInput() {
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

void Quicksort:: coutResult() {
    std::cout << "原数据" << std::endl;
    printDataSource();
    sort();
    std::cout << "排序后数据" << std::endl;
    printDataSource();
}

//MARK:Private
void Quicksort::sort() {
    int start = 0;
    int end = int(dataSource.size()) - 1;
    partition(start, end);
}

void Quicksort::partition(int start, int end){
    if (start < 0 || end < 0 || start >= end) {
        return;
    }
    
    int bigIndex = -1;
    for (int i = start; i < end; i ++) {
        if ((dataSource[i] > dataSource[end])) {
            if(bigIndex == -1){
                bigIndex = i;
            }
        }else if (bigIndex >= 0) {
            int temp = dataSource[bigIndex];
            dataSource[bigIndex] = dataSource[i];
            dataSource[i] = temp;
            bigIndex += 1;
        }
    }
    
    if (bigIndex >= 0) {
        int temp = dataSource[bigIndex];
        dataSource[bigIndex] = dataSource[end];
        dataSource[end] = temp;
        
        partition(start, bigIndex - 1);
        partition(bigIndex + 1, end);
    }
}

void Quicksort::printDataSource() {
    std::string printStr;
    for (int i = 0; i < dataSource.size(); i ++) {
        std::string iStr = std::to_string(dataSource[i]);
        printStr.append(" ");
        printStr.append(iStr);
    }
    std::cout << printStr << std::endl;
}
