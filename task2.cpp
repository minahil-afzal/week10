#include<iostream>
using namespace std;
main()
{
string movies[5] = {"mr.bean","maula jatt","mission majnu","jab we met","hello"};
string name;
cout<<"enter movie name";
cin>>name;
int price = 500;
float discount;
int dprice;
for(int x=0;x,5;x++)
{
    
if(name =="mr.bean")
{
    discount = price*0.1;
    dprice = price - discount;
}
if(name =="mission majnu")
{
    discount = price*0.1;
    dprice = price - discount;
}
if(name =="hello")
{
    discount = price*0.1;
    dprice = price - discount;
}
if(name == "maula jatt")
{
    discount = price*0.05;
    dprice = price - discount;
}
if(name == "jab we met")
{
    discount = price*0.05;
    dprice = price - discount;
}
break;

}
cout<<"your price is: "<<dprice<<endl;

}