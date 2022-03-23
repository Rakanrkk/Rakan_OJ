//
// Created by Rakan on 2022/2/23.
//
#include <iostream>
using namespace std;

class Box
{
public:
    void enlarge()
    {
        this->height++;
        this->breadth++;
        this->length++;
    }
    void addto(Box& a) const
    {
        a.length+= this->length;
        a.breadth+= this->breadth;
        a.height+= this->height;
    }
    Box operator+(const Box& b) const
    {
        Box box1 = Box(0, 0, 0);
        box1.length = this->length + b.length;
        box1.breadth = this->breadth + b.breadth;
        box1.height = this->height + b.height;
        return box1;
    }
    double getvolume() const
    {
        return length*breadth*height;
    }
    void setlength(double len)
    {
        length=len;
    }
    void setbreadth(double bre)
    {
        breadth=bre;
    }
    void setheight(double hei)
    {
        height=hei;
    }
    Box(double len,double bre,double hei){
        length=len;
        breadth=bre;
        height=hei;
    }
private:
    double length;
    double breadth;
    double height;
};
int main()
{
    Box a(2,2,3);
//    a.enlarge();
    Box b{1,1,1};
    a.addto(b);
    cout<<b.getvolume();
    return 0;
}