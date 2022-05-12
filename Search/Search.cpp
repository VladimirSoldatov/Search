#include <iostream>
using namespace std;

int LinearSearch(int array[], int size, int key) 
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    const int arraySize = 100;
    int a[arraySize], searchKey, element;
    for (int x = 0; x < arraySize; x++) 
    {
        a[x] = 2 * x;
    }
    cout << "Please, enter the number: ";
    cin >> searchKey;
    cout << endl;
    element = LinearSearch(a, arraySize, searchKey);
    if (element != -1)
        cout << "The key was found in element " << element << "\n";
    else
        cout << "Value not found";
    return 0;

}
