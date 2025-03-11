#include<iostream>
using namespace std;

class Student{
    private:
        
        int rollno;
        string name;
    public:
    Student()
    {
        
        rollno = 0;
        name = " ";
    }
    Student(int r, string n)
    {
        rollno = r;
        name = n;
    }
    ~Student()
    {
       
        cout << "Destructor called" << endl;
    }
    void setRollno(int r)
    {
        rollno = r;
    }
};
int main(){
    Student s1;
    Student *s2 = new Student;
    s2->setRollno(10);
    delete s2;
    cout<< "After deleting s2" << endl;
    Student S3;

    return 0;
}