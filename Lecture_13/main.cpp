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
        static int setCount(int c);
};
int Student :: setCount(int c){
    count = c;
    return count;
}
int Student::count = 5;

int main(){
    Student :: setCount(5);
    Student s1;
    s1.getCount();
    Student s2;
    s2.getCount();
    s1.getCount();
    return 0;
}
