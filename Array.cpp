#include<algorithm>
#include<iostream>
using namespace std;

class List
{
private:
    int *theArray;
    int count;
    int maxSize;

public:
    List(int n);

    void add(int value);
    int find(int value); 
    void deleteValue(int value);
    void print();
};

List::List(int n)
{
    maxSize = n;
    theArray = new int[n];
    count = 0;
}

void List::add(int value)
{
    theArray[count] = value;
    count++;
}

int List::find(int value){
    for (int i = 0; i < count; i++)
    {
        if (theArray[i] == value)
        {
            cout << value << ", found at index: " << i << endl;
            return i; // Return the index where the value is found
        }
    }
    cout << value << " not found in the list." << endl;
    return -1; // Return -1 if the value is not found
}

void List::deleteValue(int value)
{
    int index = find(value);

    if (index != -1)
    {
        count--;

        for (int k = index; k < count; k++)
        {
            theArray[k] = theArray[k + 1];
        }
    }
}

void List::print()
{
    for (int i = 0; i < count; i++)
    {
        cout << theArray[i] << " ";
    }
    cout << endl;
}

int main()
{
    List myList(10);

    for (int i = 0; i < 10; i++)
    {
        myList.add(i);
    }
    myList.print();
    myList.deleteValue(8);
    myList.find(7);
    myList.print();

    return 0;
}
