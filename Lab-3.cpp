#include<bits/stdc++.h>
using namespace std;
int main()
{

    string students,roll;

    ifstream file;
    file.open("aaa.txt",ios::in);
    if(!file){
        cout<<"Error in opening file..";
        return 0;
    }

    cout<<"Name"<<"\tRoll"<<endl;
    while(getline(file,students))
    {
        cout<<students<<"\t"<<roll<<endl;
    }

    return 0;
}
