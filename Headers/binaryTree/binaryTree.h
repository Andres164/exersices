#pragma once

class BinaryTreeNode
{
    int data;
    BinaryTreeNode* ptr_nodeToLeft;
    BinaryTreeNode* ptr_nodeToRight;
public:
    BinaryTreeNode(int number);
    BinaryTreeNode(int number, BinaryTreeNode* ptr_leftNode, BinaryTreeNode* ptr_rightNode);

    void setNodes(BinaryTreeNode* ptr_leftNode, BinaryTreeNode* ptr_rightNode);
    void setNodeToLeft(BinaryTreeNode* ptr_leftNode);
    void setNodeToRight(BinaryTreeNode* ptr_rightNode);

    BinaryTreeNode* getNodeToLeft();
    BinaryTreeNode* getNodeToRight();

    void printData();
    int sumOfRoots();
    int numberOfNodes();
    void CanBeDividedIntoTwoEqualSizedTrees();
};
