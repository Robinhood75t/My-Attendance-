#include<iostream>
using namespace std;
const int max_students = 100;
class myattandance{
    private:
    string students[max_students];
    bool present[max_students];
    int numstudents;

    public:
    myattandance()
    {
        numstudents = 0;
    }

    void add_students(const string& name)
    {
        if(numstudents < max_students)
        {
            students[numstudents] = name;
            present[numstudents] = false;
            numstudents++;
            cout<<"Students added successfully"<<endl;
        }
        else
        {
            cout<<"Maximum students reached"<<endl;
        }
    }

    void make_attandance(const string& name)
    {
        for(int i=0;i<numstudents;i++)
        {
            if(students[i]==name)
            {
                present[i] = true;
            }
        }
    }

    void printattandance()
    {
        cout<<"attandance record: "<<endl;
        for(int i=0;i<numstudents;i++)
        {
            cout<<"student name: "<<students[i]<<": "<<(present[i] ? "present" : "absent")<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    myattandance attandance;
    attandance.add_students("robin");
    attandance.add_students("kartik");
    attandance.add_students("vikas");
    attandance.add_students("parnay");
    attandance.add_students("ishit");
    attandance.add_students("akash");

    attandance.make_attandance("robin");
    attandance.make_attandance("ishit");
    attandance.make_attandance("parnay");
    attandance.make_attandance("akash");

    attandance.printattandance();
    return 0;
}