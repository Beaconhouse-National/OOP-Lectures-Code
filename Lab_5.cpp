#include<iostream>
using namespace std;
class Account{
    private:
        int balance;
        string name=" ";
    public:
        Account(int b){
            if (b>=0){
                balance = b;
            }
            else {
                balance = 0;
                cout << "Balance can't be negative" << endl;
            }

        }
        Account(){
            balance = 0;
        }
        void credit(int c){
            balance += c;
        }
        void debit(int d){
            if(d>balance){
                cout << "Debit amount exceeded account balance" << endl;
            }
            else{
                balance -= d;
            }
        }
        int getBalance(){
            return balance;
        }
        
};
int main(){
    Account A1(100);
    Account A2(500);
    A1.credit(50);
    cout<< "A1 balance: " << A1.getBalance() << endl;
    A2.debit(100);
    cout<< "A2 balance: " << A2.getBalance() << endl;
    return 0;
}