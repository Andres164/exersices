#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVector = { 0, -3, 5, -4, -2, 3, 1, 0 };
    int myVectorLength = myVector.size();

    vector<int> equilibriumIndexes;
    vector<int> sumsOfElementsBeforeIndex(myVectorLength, 0);
    vector<int> sumsOfElementsAfterIndex(myVectorLength, 0);

    for (int i = 1; i < myVectorLength; i++)
    {
        vector<int>::iterator it_myVector = myVector.begin() + i;
        vector<int>::iterator itInReverse_myVector = (myVector.end() - 1) - i;
        vector<int>::iterator it_sumsOfElementsBeforeIndex = sumsOfElementsBeforeIndex.begin() + i;
        vector<int>::iterator itInReverse_sumsOfElementsAfterIndex = (sumsOfElementsAfterIndex.end() -1) - i;

        *it_sumsOfElementsBeforeIndex = (*(it_sumsOfElementsBeforeIndex - 1)) + (*(it_myVector - 1));
        *itInReverse_sumsOfElementsAfterIndex = (*(itInReverse_myVector + 1)) + (*(itInReverse_sumsOfElementsAfterIndex + 1));
    }
    cout << endl;
    for (int i = 0; i < myVectorLength; i++)
    {
        vector<int>::iterator it_sumsOfElementsBeforeIndex = sumsOfElementsBeforeIndex.begin() + i;
        vector<int>::iterator it_sumsOfElementsAfterIndex = sumsOfElementsAfterIndex.begin() + i;
        if (*it_sumsOfElementsBeforeIndex == *it_sumsOfElementsAfterIndex)
            equilibriumIndexes.push_back(i);
        cout << endl << endl;
        cout << *it_sumsOfElementsBeforeIndex << "  " << *it_sumsOfElementsAfterIndex << endl;
    }
    cout << endl;
    /*for(int i = 0; i < myVector.size(); i++)
        {

            int sumOfElementsAfterI = 0;
            if(i != (myVector.size() -1))
            {
                for(auto it_myVector = myVector.begin() +(i+1); it_myVector < myVector.end(); it_myVector++)
                    sumOfElementsAfterI += *it_myVector;
            }

            if(sumOfElementsBeforeI == sumOfElementsAfterI)
                equilibriumIndexes.push_back(i);
            vector<int>::iterator it_currentElement = myVector.begin() +i;
            sumOfElementsBeforeI += *it_currentElement;
        }*/

    for (int equilibriumIndex : equilibriumIndexes)
        cout << equilibriumIndex << " ";
    cout << endl;

    return 0;
}
