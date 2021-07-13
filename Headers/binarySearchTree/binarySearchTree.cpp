#include <iostream>
#include "binarySearchTree.h"

using namespace std;

BinarySearchTreeRoot::BinarySearchTreeRoot()
    : data(0), ptr_nodeToLeft(NULL), ptr_nodeToRight(NULL)
{
    cout << "Binary Search Tree Root Created!" << endl;
}

BinarySearchTreeNode* BinarySearchTreeRoot::getNodeToLeft() { return ptr_nodeToLeft; }
BinarySearchTreeNode* BinarySearchTreeRoot::getNodeToRight() { return ptr_nodeToRight; }
int BinarySearchTreeRoot::getData() { return this->data; }

void BinarySearchTreeRoot::setData(int number) { this->data = number; }
void BinarySearchTreeRoot::insertElement(int numberToInsert)
{
    if(numberToInsert < this->data)
    {
        if(this->ptr_nodeToLeft != NULL)
        {
            this->ptr_nodeToLeft->insertElement(numberToInsert);
        }else {
            this->ptr_nodeToLeft = new BinarySearchTreeNode(numberToInsert);
        }
    }
    else if(numberToInsert >= this->data)
    {
        if(this->ptr_nodeToRight!= NULL)
        {
            this->ptr_nodeToRight->insertElement(numberToInsert);
        }else {
            this->ptr_nodeToRight = new BinarySearchTreeNode(numberToInsert);
        }
    }
}

void BinarySearchTreeRoot::printData()
{
    cout << this->data << endl;
}
int BinarySearchTreeRoot::sumOfNodes()
{
    int sum = 0;
    if(this->ptr_nodeToLeft !=NULL)
        sum += this->ptr_nodeToLeft->sumOfNodes();

    if(this->ptr_nodeToRight !=NULL)
        sum += this->ptr_nodeToRight->sumOfNodes();

    return sum +this->data;
}
int BinarySearchTreeRoot::numberOfNodes()
{

}

void BinarySearchTreeRoot::findElement(int element)
{
    if(element == this->data)
        cout << element << " is an element in this BST" << endl;
    else if(element < this->data && ptr_nodeToLeft != NULL)
        ptr_nodeToLeft->findElement(element);
    else if(element > this->data && ptr_nodeToRight != NULL)
        ptr_nodeToRight->findElement(element);
    else
        cout << element << " is not an element in this BST" << endl;
}

BinarySearchTreeNode::BinarySearchTreeNode(int number)
    : ptr_nodeToLeft(NULL), ptr_nodeToRight(NULL)
{
    this->setData(number);
}

