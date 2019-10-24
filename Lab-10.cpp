#include<bits/stdc++.h>
using namespace std;
class Switch
{

public:
    float n1,n2;
    char o;
    void inputData(void);
    void outputData(void);

};
void Switch :: inputData(void)
{

    cin>>n1>>o>>n2;
    void outputData(void);

};
void Switch :: outputData(void)
{


    switch(o)
    {
    case '+':
        cout<<"="<<n1+n2<<endl;
        break;
    case '-':
        cout<<"="<<n1-n2<<endl;
        break;
    case '/':
        cout<<"="<<n1/n2<<endl;
        break;
    case '*':
        cout<<"="<<n1*n2<<endl;
        break;
    default:
        cout<<"Error! operator is not correct";
        break;

    }
}
int main()
{

    Switch s;
    s.inputData();
    s.outputData();

    return 0;
}
