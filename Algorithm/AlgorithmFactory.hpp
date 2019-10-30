//
//  AlgorithmFactory.hpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/28.
//  Copyright © 2019 vege. All rights reserved.
//

#ifndef AlgorithmFactory_hpp
#define AlgorithmFactory_hpp

#include <stdio.h>
#include "Algorithm.hpp"

typedef enum : int {
    quickSort,
    firstMissingPositive,
} AlgorithmType;

class AlgorithmFactory {
    
public:
    static Algorithm* generate(AlgorithmType type);
};
#endif /* AlgorithmFactory_hpp */
