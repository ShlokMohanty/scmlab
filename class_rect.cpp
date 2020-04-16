#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    int mathsmarks;
    int phymarks;
    int chemmarks;
    public:
     student(int r,string n,int m,int p,int c)
    {
        rollno=r;
        name=n;
        mathsmarks=m;
        phymarks=p;
        chemmarks=c;
    }
    int total()
    {
        return mathsmarks+phymarks+chemmarks;
    }
    char grade()
    {
        float avg=total()/3;
        if(avg>60)
        {
return 'A';
        }
        else if(avg>=40 && avg<=60)
        {
            return 'B';
        }
        else 
        {
            return 'C';

        }
    }
    };
    int main()
    {
        int rollno;
        string name;
        int m,p,c;
        cout<<"enter roll number of a student:"<<endl;
        cin>>rollno;
        cout<<"enter name of the student:"<<endl;
        getline(cin,name);
        cout<<"enter marks in 3 subjects"<<endl;
        cin>>m>>p>>c;
        student s(rollno,name,m,p,c);
        cout<<"total marks:"<<s.total()<<endl;
        cout<<"grade of student:"<<s.grade()<<endl;
        return 0;
    }


