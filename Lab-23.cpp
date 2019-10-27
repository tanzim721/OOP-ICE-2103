#include<bits/stdc++.h>
using namespace std;
class student
{
private:
            int rollno;
            string name;
public:
            student():rollno(0),name("")
            {

            }
            student(int r, string n): rollno(r),name (n)
            {

            }
            void get()
            {
                        cout<<"Enter the roll no : ";
                        cin>>rollno;
                        cout<<"Enter the name is : ";
                        cin>>name;
            }
            void print()
            {
                        cout<<"Roll no is : "<<rollno;
                        cout<<" and name is : "<<name;
            }
};
int main()
{
            student *p=new student;
            (*p).get();
            (*p).print();
            delete p;
            return 0;
}

