//
//  FirstMissingPositive.hpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/30.
//  Copyright © 2019 vege. All rights reserved.
//

#ifndef FirstMissingPositive_hpp
#define FirstMissingPositive_hpp

#include <stdio.h>
#include <vector>
#include "Algorithm.hpp"

class FirstMissingpositive:public Algorithm {
    
public:
    FirstMissingpositive();
    virtual void coutResult();
protected:
    virtual bool verifyInput();
private:
    std::vector<int> dataSource;
    int search();
};

#endif /* FirstMissingPositive_hpp */
