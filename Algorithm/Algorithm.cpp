//
//  Algorithm.cpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/28.
//  Copyright © 2019 vege. All rights reserved.
//

#include "Algorithm.hpp"
#include <iostream>

void Algorithm::coutTitle() {
    std::cout << mTitle << std::endl;
}

void Algorithm::coutInputDescription() {
    std::cout << mInputDescription << std::endl;
}

bool Algorithm::cinInputContent() {
    if (!verifyInput()) {
        std::cout << "检测到输入参数不合法，请重新输入：" << std::endl;
        cinInputContent();
        return false;
    }else{
        coutResult();
        return true;
    }
}

bool Algorithm::verifyInput() {
    return false;
}

void Algorithm:: coutResult() {
    
}
