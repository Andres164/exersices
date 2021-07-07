#pragma once

class BinarySearchTreeNode;

class BinarySearchTreeRoot
{
protected:
    int data;
    BinarySearchTreeNode* ptr_nodeToLeft;
    BinarySearchTreeNode* ptr_nodeToRight;
public:
    BinarySearchTreeRoot();

    BinarySearchTreeNode* getNodeToLeft();
    BinarySearchTreeNode* getNodeToRight();
    int getData();

    void setData(int number);
    void insertElement(int numberToInsert);

    void printData();
    int sumOfNodes();
    int numberOfNodes();
    void CanBeDividedIntoTwoEqualSizedTrees();
};

class BinarySearchTreeNode: public BinarySearchTreeRoot
{
    int data;
    BinarySearchTreeNode* ptr_nodeToLeft;
    BinarySearchTreeNode* ptr_nodeToRight;
public:
    BinarySearchTreeNode(int number);
};
