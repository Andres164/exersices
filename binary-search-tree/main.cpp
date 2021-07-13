#include <iostream>
#include "../Headers/binaryTrees.h"

using namespace std;

int main()
{
    BinarySearchTreeRoot myBSTRoot;
    myBSTRoot.setData(12);
    myBSTRoot.insertElement(6);
    myBSTRoot.insertElement(16);
    myBSTRoot.insertElement(8);
    myBSTRoot.insertElement(14);
    myBSTRoot.insertElement(4);
    myBSTRoot.insertElement(18);

    myBSTRoot.findElement(4);
    myBSTRoot.findElement(6);
    myBSTRoot.findElement(16);
    myBSTRoot.findElement(8);
    myBSTRoot.findElement(14);
    myBSTRoot.findElement(18);



    //cout << myBSTRoot.getNodeToLeft()->getData() << endl;

    return 0;
}
