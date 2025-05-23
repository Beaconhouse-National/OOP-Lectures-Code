#include<iostream>
using namespace std;
class automobile {
    private:
        string compnyname;
        int yearmodel;
        float milage;
        double price;
    protected:
        int age;

    public:
        automobile(){
            compnyname = "";
            yearmodel = 0;
            milage = 0;
            price = 0;
            cout<<"Automobile constructor called"<<endl;
        }
        automobile(string c, int y, float m, double p){
            compnyname = c;
            yearmodel = y;
            milage = m;
            price = p;
            cout<<"Automobile parameterized constructor called"<<endl;
        }
        ~automobile(){
            cout<<"Automobile destructor called"<<endl;
        }
        void setcompnyname(string c){
            compnyname = c;
        }
        void setyearmodel(int y){
            yearmodel = y;
        }
        void setmilage(float m){
            milage = m;
        }

};
class Cars: protected automobile{
    private:
        int noofdoors;
    public:
        Cars(){
            noofdoors = 0;
            cout<<"Cars constructor called"<<endl;
        }
        Cars(string c, int y, float m, double p, int n):automobile(c,y,m,p){
            noofdoors = n;
            cout<<"Cars parameterized constructor called"<<endl;
        }
           
        ~Cars(){
            cout<<"Cars destructor called"<<endl;
        }
    void setmodel(int n){
        age= n;
        setmilage(5.0);
        setyearmodel(2020);
        setcompnyname("Toyota");
    }

};

int main(){
    Cars car1("Toyota", 2020, 15.5, 20000, 4);
    
    return 0;
}