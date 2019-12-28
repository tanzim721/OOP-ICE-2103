#include<bits/stdc++.h>
#include<string>
using namespace std;
class Student
{

private:
    double marks[5],total=0.0,avg,point=0.0,gPoint,p;
    string name;
    int n;

public:
    void getName()
    {
        cin>>name;
    }
    void getMarks()
    {
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];

            total = total + marks[i];
        }
    }
    void setWork()
    {
        avg = total/3.0;
        for(int i=0;i<3;i++)
        {
            if(marks[i]<=100 && marks[i]>=80)
            {
                p = 4;
            }
            else if(marks[i]>=75)
            {
                p = 3.75;
            }
            else if(marks[i]>=70)
            {
                p = 3.50;
            }
            else if(marks[i]>=65)
            {
                p = 3.25;
            }
            else if(marks[i]>=60)
            {
                p = 3.0;
            }
            else if(marks[i]>=55)
            {
                p = 2.75;
            }
            else if(marks[i]>=50)
            {
                p = 2.50;
            }
            else if(marks[i]>=45)
            {
                p = 2.25;
            }
            else if(marks[i]>=40)
            {
                p = 2.00;
            }
            else
            {
                p = 0;
            }
            point = point + p;
        }
        gPoint = point / 3.0;
    }
    void display()
    {

        cout<<"Name : "<<name<<endl;
        cout<<"Total : "<<total<<endl;
        cout<<"Average : "<<avg<<endl;
        cout<<"Grade point : "<<gPoint<<endl;

    }

};
int main()
{

    Student st[10];

    for(int j=0;j<3;j++)
    {
        cout << "Student:" << j + 1 << endl;
		cout << "Enter name:"<< endl;
		st[j].getName();
		cout << "Enter marks:"<< endl;
		st[j].getMarks();
		st[j].setWork();

    }
    cout<<endl;
    cout<<endl;
    for(int j=0;j<3;j++)
    {
        cout<<"Student : "<<j+1<<endl;
        st[j].display();
    }

    return 0;

}
