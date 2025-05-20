#include<iostream>
using namespace std;
class Animal{
    private:
        string name;
        int age;
    public:

        Animal(string n="", int a=0){
            name = n;
            age = a;
        }
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        void display(){
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};
class Dog : public Animal{
    private:
        string breed;
    public:
        Dog(string b="") {
            breed = b;
        }
        void setBreed(string b){
            breed = b;
        }
        string getBreed(){
            return breed;
        }
        void display(){
           
            cout << "Breed: " << breed << endl;
        }
        void displays(){
            display();
            cout << "Breed: " << breed << endl;
        }
};
   
int main(){
  
    Dog dog1;
    dog1.display();

    dog1.setName("Buddy");
    dog1.setAge(5);
    dog1.setBreed("Golden Retriever");
    cout << "Dog Details:" << endl;
    dog1.display();
    cout << "----------------------";
    dog1.displays();
    

    return 0;
}