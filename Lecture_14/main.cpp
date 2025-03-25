#include<iostream>
using namespace std;

class Student {
    private:
        int id;
        string name;
        int status;
        
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
        void setStatus(int s){
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
        void print(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Status: " << status << endl;
        }
};
class Account{
    private:
        double balance;
    public:
        Account(){
            balance = 0;
        }
        void setBalance(double b){
            balance = b;
            this->balance = b;
            (*this).balance = b;
        }
        double getBalance() const{
            return balance;
        }
        void deposit(double amount){
            balance += amount;
        }
        void withdraw(double amount){
            balance -= amount;
        }
        void changestatus(Student &s){
            if (balance >0)
            s.setStatus(1);
        }
};
int main(){
    Student s1;
    s1.setId(1);
    s1.setName("Ali");
    Account a1;

    a1.setBalance( 11000);
    a1.changestatus(s1);
    return 0;
}