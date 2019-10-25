#include<bits/stdc++.h>
using namespace std;
class SearceInArray
{

    int arr[100],size,s;
public:
    void getArray()
    {
        cout<<"Enter the array size :";
        cin>>size;
        cout<<"Enter the element of array : ";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void ElementSearch()
    {
        cout<<"Enter the search : ";
        cin>>s;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==s)
            {
                cout<<"Search element found.Position is : "<<(i+1)<<endl;
                break;
            }
            if(i==(size-1))
            {
                cout<<"Search element is not found : ";
            }
        }
    }

};
int main()
{

    SearceInArray obj;
    obj.getArray();
    obj.ElementSearch();
    return 0;

}
