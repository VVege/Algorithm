//
//  main.cpp
//  Algorithm
//
//  Created by 伟哥 on 2019/10/26.
//  Copyright © 2019 vege. All rights reserved.
//

#include <iostream>
#include "OperationProcess.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "*************欢迎来到算法的世界*************" << std::endl;
    OperationalProcess process = OperationalProcess();
    process.coutAlgorithmList();
    process.cinChoosedAlgorithm();
    return 0;
}
