#include<iostream>
using namespace std;

class Student{
    private:
        int rollno;
        string name;
    public:
    Student()
    {
        
       
        name = " ";
    }
    Student(int r, string n)
    {
        
        name = n;
    }
    ~Student()
    {
       
        cout << "Destructor called" << endl;
    }
    void setRollno(int r)
    {
        
    }
};
int main(){
    Student s1;
    Student *s2 = new Student;
    
    delete s2;
    cout<< "After deleting s2" << endl;
    Student S3;
    Student s4;
    Student s5;
    s5.setRollno(5);
    Student aary[5]={Student(5, "Ali"), Student(6, "Ahmed"), Student(7, "Asad"), Student(8, "Ahsan"), Student(9, "Aqeel")}; 
    
    return 0;
}