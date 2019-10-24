#include<bits/stdc++.h>
using namespace std;

class Area
{
    int length;
    int width;
public:

    int getarea(int l,int w)
    {

        int area;
        area = l*w;
        cout<<"Area of a rectangle = "<<area<<endl;
    }

    int getsquare(int l)
    {

        int square;
        square = l*l;
        cout<<"Area of a square = "<<square<<endl;

    }
};

int main()
{

    int l,w;

    Area a;

    cout<<"Enter the length is :";
    cin>>l;

    cout<<"Enter the width is :";
    cin>>w;

    a.getarea(l,w);

    a.getsquare(l);

    return 0;
}
