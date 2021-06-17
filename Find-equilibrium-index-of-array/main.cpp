#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVector = {0, -3, 5, -4, -2, 3, 1, 0};

    vector<int> equilibriumIndexes;
    int sumOfElementsBeforeI = 0;
    equilibriumIndexes.reserve(10);
    for(int i = 0; i < myVector.size(); i++)
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
    }

    for(int element : equilibriumIndexes)
        cout << element << " ";
    cout << endl;
    system("pause");

    return 0;
}
