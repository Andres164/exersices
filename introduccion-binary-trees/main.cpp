#include <iostream>

using namespace std;

class BinaryTreeNode
{
    int data;
    BinaryTreeNode* ptr_nodeToLeft;
    BinaryTreeNode* ptr_nodeToRight;
public:
    BinaryTreeNode(int number)
        : data(number), ptr_nodeToLeft(NULL), ptr_nodeToRight(NULL)
    {
        cout << endl << "Binary tree node created" << endl;
    }
    BinaryTreeNode(int number, BinaryTreeNode* ptr_leftNode, BinaryTreeNode* ptr_rightNode)
        : data(number), ptr_nodeToLeft(ptr_leftNode), ptr_nodeToRight(ptr_rightNode)
    {
        cout << endl << "Binary tree node created" << endl;
        cout << endl << "Set left node" << endl;
        cout << endl << "Set right node" << endl;
    }

    void setNodes(BinaryTreeNode* ptr_leftNode, BinaryTreeNode* ptr_rightNode)
    {
        ptr_nodeToLeft = ptr_leftNode;
        cout << endl << "Set left node" << endl;
        ptr_nodeToRight = ptr_rightNode;
        cout << endl << "Set right node" << endl;
    }

    void setNodeToLeft(BinaryTreeNode* ptr_leftNode)
    {
        ptr_nodeToLeft = ptr_leftNode;
        cout << endl << "Set left node" << endl;
    }
    void setNodeToRight(BinaryTreeNode* ptr_rightNode)
    {
        ptr_nodeToRight = ptr_rightNode;
        cout << endl << "Set right node" << endl;
    }

    BinaryTreeNode getNodeToLeft()
    {
        return *ptr_nodeToLeft;
    }

    BinaryTreeNode getNodeToRight()
    {
        return *ptr_nodeToRight;
    }

    void printData()
    {
        cout << endl << data << endl;
    }
    int sumOfRoots()
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
};

int main()
{
    BinaryTreeNode myBinaryTreeHead(2);
    BinaryTreeNode myBinaryTreeRoot1(3, new BinaryTreeNode(5), new BinaryTreeNode(6));
    BinaryTreeNode myBinaryTreeRoot2(4);

    myBinaryTreeHead.setNodeToLeft(&myBinaryTreeRoot1);
    myBinaryTreeHead.setNodeToRight(&myBinaryTreeRoot2);

    myBinaryTreeHead.printData();
    myBinaryTreeHead.getNodeToLeft().printData();
    myBinaryTreeHead.getNodeToRight().printData();
    myBinaryTreeRoot1.getNodeToLeft().printData();
    myBinaryTreeRoot1.getNodeToRight().printData();

    cout << myBinaryTreeHead.sumOfRoots() << endl;


}
