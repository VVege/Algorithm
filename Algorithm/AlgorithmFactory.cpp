//
//  AlgorithmFactory.cpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/28.
//  Copyright © 2019 vege. All rights reserved.
//

#include "AlgorithmFactory.hpp"
#include "Quicksort.hpp"
#include "FirstMissingPositive.hpp"

Algorithm* AlgorithmFactory:: generate(AlgorithmType type){
    switch (type) {
        case quickSort:
        {
            Quicksort *algorithm = new Quicksort();
            return algorithm;
        }
        case firstMissingPositive:
        {
            FirstMissingpositive * algorithm = new FirstMissingpositive();
            return algorithm;
        }
    }
}

