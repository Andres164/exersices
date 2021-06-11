#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    /*
    {5, 4, 2, 8} costo total 6
    {6,5,8} costo total 17
    {11,8} costo total 36
    {19}
    */

    vector<int> myVector = {5, 4, 2, 8};

    for(int i = 0; i < myVector.size(); i++)
    {
        vector<int>::iterator iterator_smallestElement = myVector.begin() + i;
        vector<int>::iterator iterator_secondSmallestElement = myVector.begin() + i;

        for(int j = 0; j < myVector.size(); j++)
        {
            vector<int>::iterator iterator_currentElement = myVector.begin() + j;
            if(*iterator_currentElement <= *iterator_smallestElement)
            {
                iterator_secondSmallestElement = iterator_smallestElement;
                iterator_smallestElement = iterator_currentElement;
            }
            else if(*iterator_currentElement < *iterator_secondSmallestElement)
                iterator_secondSmallestElement = iterator_currentElement;
        }
    }

    return 0;
}
