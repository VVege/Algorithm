//
//  Generator.cpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/31.
//  Copyright © 2019 vege. All rights reserved.
//

#include "Generator.hpp"
#include <cstdlib>

int randomNum(int from = 0, int to = 100);
void setSubNode(int index, BinaryTreeNode* array[], int count);
using namespace VGGenerator;

SLNode *generateSLinkList(int count){
    SLNode *head = new SLNode();
    head->value = randomNum();
    SLNode *current = head;
    for (int i = 1; i < count; i ++) {
        SLNode *newNode = new SLNode();
        newNode->value = randomNum();
        current -> next = newNode;
        current = newNode;
    }
    return head;
}

DLNode *generateDLinkList(int count){
    DLNode *head = new DLNode();
    head->value = randomNum();
    DLNode *current = head;
    for (int i = 1; i < count; i ++) {
        DLNode *newNode = new DLNode();
        newNode->value = randomNum();
        newNode->pre = current;
        current->next = newNode;
        current = newNode;
    }
    return head;
}

BinaryTreeNode *generateBinaryTree(int count){
    BinaryTreeNode* nodeArr[count];
    for (int i = 0; i < count; i ++) {
        BinaryTreeNode *newNode = new BinaryTreeNode();
        newNode->value = randomNum();
        nodeArr[i] = newNode;
    }
    setSubNode(0, nodeArr, count);
    return nodeArr[0];
}

//MARK:Private
int randomNum(int from, int to) {
    return rand()%from + to;
}

void setSubNode(int index, BinaryTreeNode* array[], int count){
    BinaryTreeNode *current = array[index];
    int leftIndex = 2*index + 1;
    int rightIndex = 2*index + 2;
    if (leftIndex < count) {
        current->left = array[leftIndex];
        setSubNode(leftIndex, array, count);
    }
    if (rightIndex < count) {
        current->right = array[rightIndex];
        setSubNode(rightIndex, array, count);
    }
}
