#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        int id;
        string name;
        int numofsubjects;
        double *marks;
        
       
        void updatemarks(){
            
            marks = new double[numofsubjects];
            for(int i=0;i<numofsubjects;i++){
                marks[i] = 0;
            }

        }
    public:
       
        Student(const Student &s){
            
            this->id = s.id;
            this->name = s.name;
            this->numofsubjects = s.numofsubjects;
            this->marks = new double[s.numofsubjects];
            for(int i=0;i<s.numofsubjects;i++){
                this->marks[i] = s.marks[i];
            }

        }
       
       Student(string n,int numofs){
            id = 0;
            name = n;
            numofsubjects = numofs;
            updatemarks();
            
        }
        void setId(int i){
            id = i;
        }
        void setName(string n){
            name = n;
        }
       
        int getId() const{
            return id;
        }
        string getName() const{
            return name;
        }
        int getNumofsubjects() const{
            return numofsubjects;
        }
        
};
int main(){
    Student s1("Ali", 10);
    Student s2("Ahmed", 5);
    cout << s1.getName() << endl;
    cout << s2.getName() << endl;
    cout << s1.getNumofsubjects() << endl;
    cout << s2.getNumofsubjects() << endl;
    s1 = s2;
   

    return 0;
}