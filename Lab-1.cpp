#include<bits/stdc++.h>
using namespace std;

class ascending
{

    int n;
    int arr[100];
public:

    void getdata(void);
    void showdata(void);

};
void ascending :: getdata(void)
{

    {
        cout<<"Enter the array size : ";
        cin>>n;
        cout<<"Enter the array numbers : ";
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
    }

};
void ascending :: showdata(void)
{

    int temp;

    {
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
               if(arr[i]>arr[j])
               {
                   temp = arr[i];
                   arr[i] = arr[j];
                   arr[j] = temp;
               }
            }
        }
    }

    cout<<"\nAfter the ascending number :"<<endl;

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};
int main()
{

    ascending p;

    p.getdata();
    p.showdata();

    return 0;
}
