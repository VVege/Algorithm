//
//  OperationProcess.cpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/28.
//  Copyright © 2019 vege. All rights reserved.
//

#include "OperationProcess.hpp"
#include "Algorithm.hpp"
#include "AlgorithmFactory.hpp"
#include "Algorithm.hpp"
#include <iostream>

OperationalProcess:: OperationalProcess (){
    Algorithm *algorithm1 = AlgorithmFactory::generate(quickSort);
    Algorithm *algorithm2 = AlgorithmFactory::generate(firstMissingPositive);
    dataSource.push_back(algorithm1);
    dataSource.push_back(algorithm2);
}

void OperationalProcess:: coutAlgorithmList() {
    for (int i = 0; i < dataSource.size(); i ++) {
        std::cout << i+1  << "******";
        dataSource[i]->coutTitle();
    }
    std::cout << "©️请输入你要选择的算法，只支持整数：" << std::endl;
}

void OperationalProcess:: cinChoosedAlgorithm() {
    std::cin >> currentSelectIndex;
    currentSelectIndex --;
    if (currentSelectIndex < 0 || currentSelectIndex >= dataSource.size()) {
        currentSelectIndex = 0;
        std::cout << "输入的序号无效，请重新输入：" << std::endl;
        cinChoosedAlgorithm();
    }else{
        dataSource[currentSelectIndex]->coutInputDescription();
        bool finish = dataSource[currentSelectIndex]->cinInputContent();
        if (finish) {
            std::cout << "算法已完成，请继续选择算法" << std::endl;
            coutAlgorithmList();
            cinChoosedAlgorithm();
        }
    }
}
