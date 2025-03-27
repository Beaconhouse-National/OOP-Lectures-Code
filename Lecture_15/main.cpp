#include<iostream>
using namespace std;
class Student{
    private:
        int id;
        string name;
        int status;
        void updatestatus(){
            status = 1;
        }
    public:
        Student(){
            id = 0;
            name = "";
            status = 0;
        }
        void setId(int i){
            id = i;
        }
        void setName(string n){
            name = n;
        }
       int setStatus(int s){
            
            status = s;
        }
        int getId() const{
            
            return id;

        }
        string getName() const{
            return name;
        }
        int getStatus() const{
            return status;
        }
};
int main(){
    Student s1;
    Student s2;
    s2.setId(2);
    s2.setName("Ali");
    int x;
    int x2 = 5;
    x = x2;
    s1 = s2;
    cout << s1.getId() << endl;
    cout<<s2.getId()<<endl;

    return 0;
}