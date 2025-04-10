#include<iostream>
using namespace std;
class Student{
    private:
        int id;
        string name;
        int numofbooks;
        double *marks;
    public:
        Student (string studentname=" ", int numofbooks=5){
            this->id = 0;
            this->name = studentname;
            this->numofbooks = numofbooks;
            this->marks = new double[numofbooks];
            for (int i = 0; i < numofbooks; i++){
                marks[i] = 0.0;
            }
            
        }
        Student (Student &s){
            this->id = s.id;
            this->name = s.name;
            this->numofbooks = s.numofbooks;
            this->marks= new double[numofbooks];
            for (int i = 0; i < numofbooks; i++){
                this->marks[i] = s.marks[i];
            }
           
        }

        void setid(int i){
            id = i;
        }
        void setname(string n){
            name = n;
        }
        void setnumofbooks(int n){
            numofbooks = n;
        }
        int getnumofbooks() const{
            return numofbooks;
        }
        int getid() const{
            return id;
        }
        string getname() const{
            return name;
        }
        void setmarkks(int index, double value){
            if (index >= 0 && index < numofbooks){
                this->marks[index] = value;
            }
        }
        double getmarks(int index) const{
            return marks[index];
        }
        

};
int main(){
    Student a1;
    a1.setid(1);
    a1.setname("Ali");
    a1.setnumofbooks(5);
    a1.setmarkks(0, 90.0);
    a1.setmarkks(1, 80.0);

    a1.setnumofbooks(5);
    cout<<"ID: "<<a1.getid()<<endl;
    cout<<"Name: "<<a1.getname()<<endl;
    cout<<"Number of books: "<<a1.getnumofbooks()<<endl;
    cout<<"Marks: "<<a1.getmarks(0)<<endl;
    cout<<"Marks: "<<a1.getmarks(1)<<endl;
    cout<<"-------------------------"<<endl;
    Student a2=a1;
    cout<<"ID: "<<a2.getid()<<endl;
    cout<<"Name: "<<a2.getname()<<endl;
    cout<<"Number of books: "<<a2.getnumofbooks()<<endl;
    cout<<"Marks: "<<a2.getmarks(0)<<endl;
    cout<<"Marks: "<<a2.getmarks(1)<<endl;
    cout<<"-------------------"<<endl;
    a2.setid(2);
    a2.setname("Ahmed");
    a2.setnumofbooks(10);
    a2.setmarkks(0, 100.0);
    a2.setmarkks(1, 95.0);
    cout<<"ID: "<<a2.getid()<<endl;
    cout<<"Name: "<<a2.getname()<<endl;
    cout<<"Number of books: "<<a2.getnumofbooks()<<endl;
    cout<<"Marks: "<<a2.getmarks(0)<<endl;
    cout<<"Marks: "<<a2.getmarks(1)<<endl;
    cout<<"-------------------"<<endl;
    cout<<"ID: "<<a1.getid()<<endl;
    cout<<"Name: "<<a1.getname()<<endl;
    cout<<"Marks: "<<a1.getmarks(0)<<endl;
    cout<<"Marks: "<<a1.getmarks(1)<<endl;
    cout<<"-------------------"<<endl;
    cout<<"Number of books: "<<a2.getnumofbooks()<<endl;
    return 0;

}