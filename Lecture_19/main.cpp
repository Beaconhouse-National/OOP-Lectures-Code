#include<iostream>
using namespace std;
class Student;
class Faculty{
    private:
        string firstName;
        string lastName;
        int facultyID;
    public:
        Faculty(string fName="", string lName="", int id=0){
            firstName = fName;
            lastName = lName;
            facultyID = id;
        }
        //copy constructor
        Faculty(const Faculty &f){
            this->firstName = f.firstName;
            this->lastName = f.lastName;
            this->facultyID = f.facultyID;

        }
        void setFirstName(string fName){
            firstName = fName;
        }
        void setLastName(string lName){
            lastName = lName;
        }
        void setFacultyID(int id){
            facultyID = id;
        }
        string getFirstName()const{
            return firstName;
        }
        string getLastName(){
            return lastName;
        }
        int getFacultyID(){
            return facultyID;
        }
        void changestudentinfo(Student &s);
};
class Student{
    private:
        string firstName;
        string lastName;
        int studentID;
    public:
        Student(string fName="", string lName="", int id=0){
            firstName = fName;
            lastName = lName;
            studentID = id;
        }
        void setFirstName(string fName){
            firstName = fName;
        }
        void setLastName(string lName){
            lastName = lName;
        }
        void setStudentID(int id){
            studentID = id;
        }
        string getFirstName()const{
            return firstName;
        }
        string getLastName(){
            return lastName;
        }
        int getStudentID(){
            return studentID;
        }
        
        
        friend class Faculty;

};

void Faculty:: changestudentinfo(Student &s){
    
    s.setLastName("Ali");
    s.setStudentID(67890);
    s.firstName= "Ameer";
    
}
int main(){
    Student s1;
    Student s2("John", "Doe", 12345);
    Student s3("Jane", "Smith");
    Faculty f1;
    Faculty f2("Dr. Brown", "Johnson", 67890);
    Faculty f3("Prof. Green", "Williams");
    
    cout<<"Student 2: " << s2.getFirstName() << " " << s2.getLastName() << " " << s2.getStudentID() << endl;
    f2.changestudentinfo(s2);
    cout<<"Student 2 after change: " << s2.getFirstName() << " " << s2.getLastName() << " " << s2.getStudentID() << endl;
    return 0;
}