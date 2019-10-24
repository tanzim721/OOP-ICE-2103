#include<bits/stdc++.h>
using namespace std;
class descending
{

    int n;
    int arr[100];
public:
    void getdata(void);
    void showdata(void);

};
void descending :: getdata(void)
{

    cout<<"Enter the array size : ";
    cin>>n;
    {
        cout<<"\nEnter the array number : ";
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
    }
};
void descending :: showdata(void)
{

    int temp;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"\nAfter the sorting : ";
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{


    descending p;
    p.getdata();
    p.showdata();
    return 0;

}
