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
        cout<<"Default Constructor called"<<endl;
    }
    Student(int r, string n)
    {
        rollno = r;
        name = n;
        cout<<"Parameterized Constructor called"<<endl;
    }
    Student(string names){
        name = names;
    }
    ~Student()
    {
        cout << "Destructor called" << endl;
    }
    void setRollno(int r)
    {
        rollno = r;
    }
    void display(){
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }
    void setName(string n){
        name = n;
    }

};
int main(){
    const int size = 5;
    string name="Ali";
    Student allstudents[size]={name,Student(5, "Ali"), Student(6, "Ahmed"), Student(7, "Asad"), Student(8, "Ahsan") };
    for (int i = 0; i < size; i++)
    {
        allstudents[i].display();
    }
    return 0;
}