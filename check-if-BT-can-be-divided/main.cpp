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
    int numberOfNodes()
    {
        int countOfNodes = 0;
        if(ptr_nodeToLeft != NULL)
            countOfNodes += ptr_nodeToLeft->numberOfNodes();
        if(ptr_nodeToRight != NULL)
            countOfNodes += ptr_nodeToRight->numberOfNodes();
        return countOfNodes +1;
    }
    bool CanBeDividedIntoTwoEqualSizedTrees()
    {
        int numberOfNodesToLeft = 0;
        int numberOfNodesToRight = 0;
        if(ptr_nodeToLeft == NULL && ptr_nodeToRight == NULL)
        {
            cout << "Cannot divide tree into two equally sized trees by removing an edge" << endl;
            return false;
        }
        else if(ptr_nodeToLeft == NULL)
        {
            numberOfNodesToLeft = 0;
            numberOfNodesToRight = ptr_nodeToRight->numberOfNodes();
        } else {
            numberOfNodesToLeft = ptr_nodeToLeft->numberOfNodes();
            numberOfNodesToRight = 0;
        }

        if(numberOfNodesToLeft == numberOfNodesToRight)
        {
            cout << "Cannot divide tree into two equally sized trees by removing an edge" << endl;
            return false;
        }
        else if(numberOfNodesToLeft == numberOfNodesToRight +1 || numberOfNodesToLeft == numberOfNodesToRight -1)
        {
            cout << "Can divide tree into two equally sized trees by removing an edge!" << endl;
            return true;
        }
        else {
            BinaryTreeNode* ptr_biggestSide;
            BinaryTreeNode* ptr_smallestSide;
            int biggestSideSize = 0, smallestSideSize = 0;
            if(numberOfNodesToLeft > numberOfNodesToRight)
            {
                ptr_biggestSide = ptr_nodeToLeft;
                biggestSideSize = numberOfNodesToLeft;
                ptr_smallestSide = ptr_nodeToRight;
                smallestSideSize = numberOfNodesToRight +1;
            } else {
                ptr_biggestSide = ptr_nodeToRight;
                biggestSideSize = numberOfNodesToRight;
                ptr_smallestSide = ptr_nodeToLeft;
                smallestSideSize = numberOfNodesToLeft +1;
            }
            while(1==1)
            {
                if(ptr_biggestSide->ptr_nodeToLeft == NULL && ptr_biggestSide->ptr_nodeToRight == NULL)
                {
                    cout << "Cannot divide tree into two equally sized trees by removing an edge" << endl;
                    return false;
                }
                else if(ptr_biggestSide->ptr_nodeToLeft == NULL)
                {
                    numberOfNodesToLeft = 0;
                    numberOfNodesToRight = ptr_biggestSide->ptr_nodeToRight->numberOfNodes();
                } else {
                    numberOfNodesToLeft = ptr_biggestSide->ptr_nodeToLeft->numberOfNodes();
                    numberOfNodesToRight = 0;
                }

                if(numberOfNodesToLeft < numberOfNodesToRight)
                {
                    smallestSideSize += numberOfNodesToLeft +1;
                    biggestSideSize -= numberOfNodesToLeft;
                    ptr_biggestSide = ptr_biggestSide->ptr_nodeToRight;
                }
                else if(numberOfNodesToLeft > numberOfNodesToRight)
                {
                    smallestSideSize += numberOfNodesToRight +1;
                    biggestSideSize -= numberOfNodesToRight;
                    ptr_biggestSide = ptr_biggestSide->ptr_nodeToLeft;
                } else {
                    cout << "Cannot divide tree into two equally sized trees by removing an edge" << endl;
                    return false;
                }

                if(smallestSideSize > biggestSideSize)
                {
                    cout << "Cannot divide tree into two equally sized trees by removing an edge" << endl;
                    return false;
                }
                else if(smallestSideSize == biggestSideSize)
                {
                    cout << "Can divide tree into two equally sized trees by removing an edge!" << endl;
                    return true;
                }

            }
        }
    }
};

int main()
{
    BinaryTreeNode root(1);
    BinaryTreeNode leftBranch(1, new BinaryTreeNode(4, new BinaryTreeNode(4), new BinaryTreeNode(4)), new BinaryTreeNode(4));
    //BinaryTreeNode rightBranch(1, new BinaryTreeNode(5, new BinaryTreeNode(7), new BinaryTreeNode(7, new BinaryTreeNode(7), new BinaryTreeNode(7))), NULL);
    root.setNodeToLeft(&leftBranch);
    //root.setNodes(&leftBranch, &rightBranch);
    cout << root.numberOfNodes() << endl;
    cout << endl;
    cout << root.CanBeDividedIntoTwoEqualSizedTrees() << endl;
}
