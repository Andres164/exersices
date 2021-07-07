#include <iostream>
#include "binaryTree.h"

using namespace std;

BinaryTreeNode::BinaryTreeNode(int number)
    : data(number), ptr_nodeToLeft(NULL), ptr_nodeToRight(NULL)
{
    cout << endl << "Binary tree node created" << endl;
}
BinaryTreeNode::BinaryTreeNode(int number, BinaryTreeNode* ptr_leftNode, BinaryTreeNode* ptr_rightNode)
    : data(number), ptr_nodeToLeft(ptr_leftNode), ptr_nodeToRight(ptr_rightNode)
{
    cout << endl << "Binary tree node created" << endl;
    cout << endl << "Set left node" << endl;
    cout << endl << "Set right node" << endl;
}

void BinaryTreeNode::setNodes(BinaryTreeNode* ptr_leftNode, BinaryTreeNode* ptr_rightNode)
{
    ptr_nodeToLeft = ptr_leftNode;
    cout << endl << "Set left node" << endl;
    ptr_nodeToRight = ptr_rightNode;
    cout << endl << "Set right node" << endl;
}

void BinaryTreeNode::setNodeToLeft(BinaryTreeNode* ptr_leftNode)
{
    ptr_nodeToLeft = ptr_leftNode;
    cout << endl << "Set left node" << endl;
}
void BinaryTreeNode::setNodeToRight(BinaryTreeNode* ptr_rightNode)
{
    ptr_nodeToRight = ptr_rightNode;
    cout << endl << "Set right node" << endl;
}

BinaryTreeNode* BinaryTreeNode::getNodeToLeft()
{
    return ptr_nodeToLeft;
}
BinaryTreeNode* BinaryTreeNode::getNodeToRight()
{
    return ptr_nodeToRight;
}

void BinaryTreeNode::printData()
{
    cout << endl << data << endl;
}
int BinaryTreeNode::sumOfRoots()
{
    cout << endl << "sumOfRoots Executed" << endl;
    int sumOfDatas = 0;
    if(ptr_nodeToLeft != NULL)
        sumOfDatas += ptr_nodeToLeft->sumOfRoots();
    if(ptr_nodeToRight != NULL)
        sumOfDatas += ptr_nodeToRight->sumOfRoots();
    sumOfDatas += data;
        return  sumOfDatas;
}
int BinaryTreeNode::numberOfNodes()
{
    int countOfNodes = 0;
    if(ptr_nodeToLeft != NULL)
        countOfNodes += ptr_nodeToLeft->numberOfNodes();
    if(ptr_nodeToRight != NULL)
        countOfNodes += ptr_nodeToRight->numberOfNodes();
    return countOfNodes +1;
}
void BinaryTreeNode::CanBeDividedIntoTwoEqualSizedTrees() {}
