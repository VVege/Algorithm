//
//  OperationProcess.hpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/28.
//  Copyright © 2019 vege. All rights reserved.
//

#ifndef OperationProcess_hpp
#define OperationProcess_hpp

#include <stdio.h>
#include <vector>
#include "Algorithm.hpp"

class OperationalProcess {

private:
    std::vector<Algorithm*> dataSource;
    int currentSelectIndex = 0;
public:
    OperationalProcess();
    void coutAlgorithmList();
    void cinChoosedAlgorithm();
};
#endif /* OperationProcess_hpp */
