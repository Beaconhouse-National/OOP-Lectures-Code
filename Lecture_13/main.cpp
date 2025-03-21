#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
       static int count;
        int id;
        string name;
    public:
        Student(){
            int id=0;
            name = "";
            count++;
           
            
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
        void getCount(){
            cout << "Count: " << count << endl;
        }
       

};
int Student::count = 5;

int main(){
    Student s1;
    s1.getCount();
    Student s2;
    s2.getCount();
    s1.getCount();
    return 0;
}
