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
    void findElement(int element);
    int numberOfLeyers();
    void printBST();
    void CanBeDividedIntoTwoEqualSizedTrees();
};

class BinarySearchTreeNode: protected BinarySearchTreeRoot
{
protected:
    int data;
    BinarySearchTreeNode* ptr_nodeToLeft;
    BinarySearchTreeNode* ptr_nodeToRight;

    BinarySearchTreeNode(int number);

    friend class BinarySearchTreeRoot;
};
