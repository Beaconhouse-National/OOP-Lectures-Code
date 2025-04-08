#include<iostream>
using namespace std;
class Student {
    private:
        int id;
        string name;
        int numofbooks;
        double *marks;
        
        void createmarksarray(int size){
            numofbooks = size;
            marks = new double[numofbooks];
            for (int i = 0; i < numofbooks; i++){
                marks[i] = 0.0;
            }
        }
       
    public:
        Student(Student &s){
            this->id= s.id;
            this->name = s.name;
            this->numofbooks = s.numofbooks;
            this->marks = new double[numofbooks];
            for (int i = 0; i < numofbooks; i++){
                this->marks[i] = s.marks[i];
            }
        } 
        Student(string studentname, int numofbooks){ 
            this->id = 0;
            this->name = studentname;
            createmarksarray(numofbooks);
        }
        
        void setId(int i) {
            id = i;
        }
        void setName(string n) {
            name = n;
        }
        
        int getId() const {
            return id;
        }
        string getName() const {
            return name;
        }
        double getmarks(int index)const{
            return marks[index];
        }
        void setmarks(int index, double value){
            if (index >= 0 && index < numofbooks) {
                this->marks[index] = value;
            } 

        }
        
};
int main(){
    Student a1("Ali", 5);
    a1.setmarks(0, 90.0);
    a1.setmarks(1, 85.0);
    a1.setmarks(2, 95.0);
    a1.setmarks(3, 80.0);
    a1.setmarks(4, 88.0);
    cout << "Student ID: " << a1.getId() << endl;
    cout << "Student Name: " << a1.getName() << endl;
    cout << "Marks in subject 1: " << a1.getmarks(0) << endl;
    cout << "Marks in subject 2: " << a1.getmarks(1) << endl;  
    cout << "Marks in subject 3: " << a1.getmarks(2) << endl;
    cout << "Marks in subject 4: " << a1.getmarks(3) << endl;
    cout << "Marks in subject 5: " << a1.getmarks(4) << endl;
    cout << "Marks in subject 6: " << a1.getmarks(5) << endl; // This will show an error message
    Student a2= a1;  // Copy constructor
    cout << "Student ID: " << a2.getId() << endl;
    cout << "Student Name: " << a2.getName() << endl;
    cout << "Marks in subject 1: " << a2.getmarks(0) << endl;
    cout << "Marks in subject 2: " << a2.getmarks(1) << endl;
    cout << "Marks in subject 3: " << a2.getmarks(2) << endl;
    cout << "Marks in subject 4: " << a2.getmarks(3) << endl;
    cout << "Marks in subject 5: " << a2.getmarks(4) << endl;
    cout << "Marks in subject 6: " << a2.getmarks(5) << endl; // This will show an error message
    a2.setmarks(0, 100.0); // Change marks in a2
    cout << "Marks in subject 1 after changing a2: " << a2.getmarks(0) << endl; // This will show the original value in a1
    cout<< "Marks in subject 1 in a1: " << a1.getmarks(0) << endl; // This will show the original value in a1
    return 0;
}