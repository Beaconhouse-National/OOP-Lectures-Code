#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle{
    private:
        double base;
        double height;


    public:
        Triangle(double b, double h);
        Triangle();
        double getArea() const;
        void setBase(double b);
        void setHeight(double h);
        double getBase() const;
        double getHeight() const;
        void print();
        ~Triangle();
};
#endif