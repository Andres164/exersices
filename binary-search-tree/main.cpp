#include <iostream>
#include "../Headers/binaryTrees.h"

using namespace std;

int main()
{
    BinarySearchTreeRoot myBSTRoot;
    myBSTRoot.setData(4);
    //left side
    myBSTRoot.insertElement(2);
    myBSTRoot.insertElement(1);
    myBSTRoot.insertElement(3);
    myBSTRoot.insertElement(0);
    myBSTRoot.insertElement(1);
    myBSTRoot.insertElement(2);
    myBSTRoot.insertElement(3);
    //right side
    myBSTRoot.insertElement(8);
    myBSTRoot.insertElement(7);
    myBSTRoot.insertElement(6);
    myBSTRoot.insertElement(7);
    myBSTRoot.insertElement(9);
    myBSTRoot.insertElement(8);
    myBSTRoot.insertElement(9);

    cout << myBSTRoot.numberOfNodes() << endl;
    cout << myBSTRoot.numberOfLeyers() << endl;



    //cout << myBSTRoot.getNodeToLeft()->getData() << endl;

    return 0;
}
