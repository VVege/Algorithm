//
//  Printer.hpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/31.
//  Copyright © 2019 vege. All rights reserved.
//

#ifndef Printer_hpp
#define Printer_hpp
#include <stdio.h>
#include "Models.hpp"

namespace VGPrinter {
void printSLinkList(SLNode *head);
void printDLinkList(DLNode *head);
void printBinaryTree(BinaryTreeNode *root);
}
#endif /* Printer_hpp */
