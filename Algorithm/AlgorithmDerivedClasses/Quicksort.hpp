//
//  Quicksort.hpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/28.
//  Copyright © 2019 vege. All rights reserved.
//

#ifndef Quicksort_hpp
#define Quicksort_hpp

#include <stdio.h>
#include <vector>
#include "Algorithm.hpp"

class Quicksort:public Algorithm {
    
public:
    Quicksort();
    virtual void coutResult();
protected:
    virtual bool verifyInput();
private:
    std::vector<int> dataSource;
    void sort();
    void partition(int start, int end);
    void printDataSource();
};
#endif /* Quicksort_hpp */
