#include<iostream>
using namespace std;
class Employee{
    private:
        string firstName;
        string lastName;
        int monthlySalary;
    public:
        Employee(string fName="", string lName="", int salary=0){
            firstName = fName;
            lastName = lName;
            if (salary < 0){
                monthlySalary = 0;
            }
            else
            {
                monthlySalary = salary;
            }
        }
        void setFirstName(string fName){
            firstName = fName;
        }
        void setLastName(string lName){
            lastName = lName;
        }
        void setMonthlySalary(int salary){
            if (salary < 0){
                monthlySalary = 0;
            }
            else
            {
                monthlySalary = salary;
            }
        }
        string getFirstName(){
            return firstName;
        }
        string getLastName(){
            return lastName;
        }
        int getMonthlySalary(){
            return monthlySalary;
        }
        void display(){
            cout << "Name " << firstName <<" "<<lastName<< endl;
            cout << "Monthly Salary: " << monthlySalary << endl;
        }
        void applyRaise(float percentage){
            if (percentage < 0){
                cout << "Invalid percentage" << endl;
            }
            else
            {
                monthlySalary += monthlySalary * (percentage / 100);
            }
        }
};
int main(){
    Employee arry[]= {Employee("John", "Doe", 3000), Employee("Jane", "Smith", 4000), Employee("Bob", "Johnson", 5000)};
    for (int i = 0; i < 3; i++){
        cout<<"Emplay " << i + 1 <<"yearly initial salaries : "<< (arry[i].getMonthlySalary()*12) <<endl;
    }
    for (int i = 0; i < 3; i++){
        arry[i].applyRaise(10);
    }
    cout<<"------------------------"<<endl;
    for (int i = 0; i < 3; i++){
        cout<<"Emplay " << i + 1 <<"yearly salaries after raise : "<< (arry[i].getMonthlySalary()*12) <<endl;
    }
    cout<<"------------------------"<<endl;
    //compare the employes and displaywhich employee has the highest salary
    int maxSalaryIndex = 0;
    for (int i = 1; i < 3; i++){
        if (arry[i].getMonthlySalary() > arry[maxSalaryIndex].getMonthlySalary()){
            maxSalaryIndex = i;
        }
    }
    cout<<"The employee with the highest salary is: "<<arry[maxSalaryIndex].getFirstName()<<" "<<arry[maxSalaryIndex].getLastName()<<endl;
    cout<<"His salary is: "<<arry[maxSalaryIndex].getMonthlySalary()*12<<endl;
    return 0;
}