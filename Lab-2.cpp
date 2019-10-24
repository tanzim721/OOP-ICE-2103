#include<bits/stdc++.h>
using namespace std;

class triangle
{
    int n;

public:

    void getdata(void);
    void showdata(void);


};
void triangle ::getdata(void)
{
    cout<<"Enter the number : ";
    cin>>n;

}
void triangle ::showdata(void)
{

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
int main()
{

    triangle p;
    p.getdata();
    p.showdata();

    return 0;

}
