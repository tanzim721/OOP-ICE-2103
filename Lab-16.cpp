#include<bits/stdc++.h>
using namespace std;
class InsertInArray
{
private:
    int arr[100],size,pos,num,found;

public:
    void getArray()
    {
        cout<<"Enter the size of array : ";
        cin>>size;
        cout<<"Enter the element of array : ";
        for(int i=1;i<=size;i++)
        {
            cin>>arr[i];

        }
    }
    void ElementInsertion()
    {
        cout<<"Enter the position where you want to insert element : ";
        cin>>pos;
        int num;
        if(pos>=1 && pos<=size)
        {
            for(int i=size;i>=pos;i--)
            {
                arr[i]=arr[i-1];
            }
            cout<<"Enter the number that is to insert : ";
            cin>>num;
            arr[pos] = num;
            size++;
        }
        else
        {
            cout<<"Position does not exists.";

        }
    }
    void print()
    {
        cout<<"Array element after insertion of new element ";
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{

    InsertInArray obj;
    obj.getArray();
    obj.ElementInsertion();
    obj.print();

    return 0;

}
