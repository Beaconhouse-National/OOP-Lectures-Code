#include<iostream>
using namespace std;
class Student{
    private:
        int rollno;
        string name;
    public:
        Student();

        Student(int r, string n);

        ~Student();

        void setRollno(int r);

        void setName(string n);

        int getRollno();

        string getName();
}
;
Student :: Student (){
    rollno = 0;
    name = " ";
}
Student :: Student (int r, string n){
    rollno = r;
    name = n;
}
Student :: ~Student(){
    cout << "Destructor called" << endl;
}
void Student :: setRollno(int r){
    rollno = r;
}
void Student :: setName(string n){
    name = n;
}
int Student :: getRollno(){
    return rollno;
}
int main(){
    int x;
    string x2;
    int x3;
    int x4;
    int x5;
    int arryofx[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        arryofx[i] = i;
    }
    
    Student student1;
    Student student2;
    const int SIZE = 10;
    Student arrayofstudents[SIZE]{Student(1, "Ali"), Student(2, "Ahmed"), Student(3, "Asad"), Student(4, "Ahsan"), Student(5, "Aqeel")};

    for (int i = 0; i < SIZE; i++)
    {
        cout<<"please enter the roll number of student "<<i+1<<endl;
        cin>>x;
        cout<<"please enter the name of student "<<i+1<<endl;
        cin>>x2;
        arrayofstudents[i].setRollno(x);
        arrayofstudents[i].setName(x2);
        cout<<arrayofstudents[i].getRollno();
    }
  


    return 0;
}