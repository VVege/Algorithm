//
//  Printer.cpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/31.
//  Copyright © 2019 vege. All rights reserved.
//

#include "Printer.hpp"
#include <vector>
#include <iostream>
using namespace VGPrinter;

void printSLinkList(SLNode *head){
    SLNode *current = head;
    while (current != NULL) {
        std::cout << current->value << ",";
        current = current -> next;
    }
    std::cout << "\n";
}

void printDLinkList(DLNode *head){
    DLNode *current = head;
    while (current != NULL) {
        std::cout << current->value << ",";
        current = current -> next;
    }
    std::cout << "\n";
}

void pushBack(int level, BinaryTreeNode *node, std::vector<std::vector<BinaryTreeNode *>> dataSource);
void printBinaryTree(BinaryTreeNode *root){
    std::vector<std::vector<BinaryTreeNode *>> dataSource;
    pushBack(0, root, dataSource);
    for (int i = 0; i < dataSource.size(); i ++) {
        for (int j = 0; j < dataSource[i].size(); j ++) {
            std::cout << dataSource[i][j]->value ;
        }
        std::cout << std::endl;
    }
}

void pushBack(int level, BinaryTreeNode *node, std::vector<std::vector<BinaryTreeNode *>> dataSource){
    if (dataSource.size() <= level) {
        std::vector<BinaryTreeNode *> levelDataSource;
        dataSource.push_back(levelDataSource);
    }
    dataSource[level].push_back(node);
    
    if (node->left != NULL) {
        pushBack(level + 1, node->left, dataSource);
    }
    if (node->right != NULL) {
        pushBack(level + 1, node->right, dataSource);
    }
    
}
