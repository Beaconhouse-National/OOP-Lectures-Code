#include<iostream>
using namespace std;
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
        friend int printstudentinfo(Student &s);
        friend void Faculty:: changestudentinfo(Student s);
};
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
        void changestudentinfo(Student s){
            
        }
};

int printstudentinfo(Student &s){
    s.setFirstName("Ameer");
    s.firstName = "Ali";

}
int main(){
    Student student1("John", "Doe", 12345);
    printstudentinfo(student1);
    Faculty faculty1("Dr. Smith", "Johnson", 67890);
    faculty1.changestudentinfo(student1);
    return 0;
}
