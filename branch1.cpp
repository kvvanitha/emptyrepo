#include<iostream>
using namespace std;
class Rectangle
{
public:
int l , b;
void get_data()
{
  cout<<"Enter the length: "<<endl;
  cin>>l;
  cout<<"Enter the breadth:" <<endl;
  cin>>b;
}
};
class Area : public Rectangle
{
public:
int area;
void display()
{
  area = l * b;
  cout<<"The area is: "<<area;
}
};
int main()
{
  Area a;
  a.get_data();
  a.display();
  return 0;
}