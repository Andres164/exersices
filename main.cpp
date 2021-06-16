#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> myVector = { 4, 4, 2, 4, 1, 2 };
    int totalCost = 0;
    int myVectorSize = myVector.size();

    for (int i = 0; i < (myVectorSize - 1); i++)
    {
        cout << "entered for loop" << endl;
        vector<int>::iterator iterator_smallestElement = myVector.begin();
        vector<int>::iterator iterator_secondSmallestElement = myVector.begin() +1;

        for (int j = 1; j < myVector.size(); j++)
        {
            cout << "   Entered nested loop" << endl;
            vector<int>::iterator iterator_currentElement = myVector.begin() + j;
            if (*iterator_currentElement < *iterator_smallestElement)
            {
                iterator_secondSmallestElement = iterator_smallestElement;
                iterator_smallestElement = iterator_currentElement;
            }
            else if (*iterator_currentElement < *iterator_secondSmallestElement)
                iterator_secondSmallestElement = iterator_currentElement;
        }
        cout << "   " << *iterator_secondSmallestElement << ", " << *iterator_smallestElement << endl;
        int unionCost = *iterator_smallestElement + *iterator_secondSmallestElement;
        totalCost += unionCost;
        *iterator_smallestElement = unionCost;
        myVector.erase(iterator_secondSmallestElement);
        for(auto element: myVector)
            cout << "   " << element << " ";
        cout << endl;
        cout << "exiting for loop" << endl;
    }

    for (auto element : myVector)
        cout << element << " ";
    cout << endl << totalCost << endl;

    return 0;
}
