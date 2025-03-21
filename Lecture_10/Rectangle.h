#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle{
    private:
        double width;
        double height;
    public:
        Rectangle(double w, double h);
        Rectangle();
        double getArea() const;
        void setWidth(double w);
        void setHeight(double h);
        double getWidth() const;
        double getHeight() const;
        void print();
};
#endif