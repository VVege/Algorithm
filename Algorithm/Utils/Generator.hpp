//
//  Generator.hpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/31.
//  Copyright © 2019 vege. All rights reserved.
//

#ifndef Generator_hpp
#define Generator_hpp

#include <stdio.h>
#include "Models.hpp"

namespace VGGenerator {
SLNode *generateSLinkList(int count = 10);
DLNode *generateDLinkList(int count = 10);
BinaryTreeNode *generateBinaryTree(int count = 10);
}
#endif /* Generator_hpp */
