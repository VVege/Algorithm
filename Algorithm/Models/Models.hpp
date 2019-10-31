//
//  Models.hpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/31.
//  Copyright © 2019 vege. All rights reserved.
//

#ifndef Models_hpp
#define Models_hpp

#include <stdio.h>
struct SLNode {
    int value;
    SLNode *next = NULL;
};

struct DLNode {
    int value;
    DLNode *next = NULL;
    DLNode *pre = NULL;
};

struct BinaryTreeNode {
    int value;
    BinaryTreeNode *left = NULL;
    BinaryTreeNode *right = NULL;
};
#endif /* Models_hpp */
