/*
    using Pointers to Objects
    13.7 Constructors
        Using member initializer lists
        inplace member initialization
        Default constructors
        Default constructor and dynamically allocated objects
    13.8 Passing arguments to constructors
        using default arguments to the constructor
        overloading constructors
    13.9 Destructors
        only one default constructor and one destructor
        other overloaded memeber functions
    13.11 Private member functions
        using private member functions     

 */
#include <iostream>
using namespace std;
class Triange
{
    private:
        int base=0;
        int height=0;
    public:
        Triange():base(10), height(10)
        {
            
        }
        Triange(int b, int h)
        {
            base = b;
            height = h;
        }

       
        void  setBase(int b)
        {
            base = b;
        }
        void setHeight(int h)
        {
            height = h;
        }
        void getBase() const
        {
            cout << "Base is: " << base << endl;
            cout<< "Height is: " << height << endl;
        }
        int getHeight() 
        {
            
            return height;
        }
};
int main()
{
    Triange t1;
    Triange t2;
    t1.getBase();
    t1.setBase(100);
    t1.getBase();
    double height =t1.getHeight();

    return 0;
}