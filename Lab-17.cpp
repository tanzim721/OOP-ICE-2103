#include<bits/stdc++.h>
using namespace std;
class DeleteInArray
{

private:
    int arr[50],size,del,cnt=0;

public:
    void getArray()
    {
        cout<<"Enter the array size : ";
        cin>>size;
        cout<<"Enter the array element : ";
        for(int i=0;i<size;i++)
          {
            cin>>arr[i];
       }
    }
    void ElementDelete()
    {
        cout<<"Enter the element to delete : ";
        cin>>del;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==del)
            {
                for(int j=i;j<(size-1);j++)
                {
                    arr[j]=arr[j+1];
                }
                cnt++;
                break;
            }
        }

        if(cnt==0)
        {
            cout<<"Element is not found..!!"<<endl;
        }
        else
        {
            cout<<"Element deleted successfully..!!"<<endl;
            cout<<"Now the new array is : ";
            for(int i=0;i<(size-1);i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    }

};
int main()
{

    DeleteInArray obj;
    obj.getArray();
    obj.ElementDelete();

    return 0;

}
