#include<iostream>
#include<string>
using namespace std;
class Student;
class Library{
    private:
        string name;
        string address;
        int numBooks;
        int numMembers;
    public:
        Library(){
            name = "";
            address = "";
            numBooks = 0;
            numMembers = 0;
        }
        void setName(string n){
            name = n;
        }
        void setAddress(string a){
            address = a;
        }
        void setNumBooks(int b){
            numBooks = b;
        }
        void setNumMembers(int m){
            numMembers = m;
        }
        string getName() const{
            return name;
        }
        string getAddress() const{
            return address;
        }
        int getNumBooks() const{
            return numBooks;
        }
        int getNumMembers() const{
            return numMembers;
        }
        void updatestudentstatus(Student &s);
};
class Student{
    private :
        static int count;
        int id;
        string sname;
        int status = 1;

    public:
        Student(){
            id = 0;
            sname = "";
            count++;    
        }
        void setId(int i){
            id = i;
        }
        void setName(string n){
            sname = n;
        }
        int getId() const{
            return id;
        }
        int getcount() const{
            return count;
        }
        static void setcount(int c){
            count = c;
        }
        int getStatus() const{
            return status;
        }
        //friend class Library;
        friend void Library::updatestudentstatus(Student &s);

};

void Library::updatestudentstatus(Student &s){
    s.count--;
    s.status = 0;
    cout << "Student status updated" << endl;
    cout << "Student count: " << s.count << endl;

}
int Student::count = 0;

int main(){
    Student s1;
    Student s2;
    cout<<s1.getcount()<<endl;
    Library l1;
   l1.updatestudentstatus(s1);
   cout<<s1.getcount()<<endl;
   cout<<s1.getStatus()<<endl;
   cout<<s2.getStatus()<<endl;

    Student :: setcount(0);
    cout<<s1.getcount()<<endl;

    return 0;
}
