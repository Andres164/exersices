#include <iostream>
#include "../Headers/binaryTrees.h"

using namespace std;

int main()
{
    BinarySearchTreeRoot myBSTRoot;
    myBSTRoot.setData(12);
    myBSTRoot.insertElement(-1);

    cout << myBSTRoot.getNodeToLeft()->getData() << endl;

    return 0;
}
