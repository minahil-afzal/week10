#include<iostream>
using namespace std;
main()
{
    string fruitgiven [4]= {"peach", "apple", "guava", "watermelon"};
    int price[4]= {60, 70, 40, 30};
    int quantity;
    string fruit;
    cout<<"enter the fruit";
    cin>>fruit;
    cout<<"enter the quantity";
    cin>>quantity;
    int totalbill;
    for(int x=0;x<3;x++)
    {
        if(fruit=="peach")
        {
            totalbill = quantity*60;
        }
         if(fruit=="apple")
        {
            totalbill = quantity*70;
        }
         if(fruit=="guava")
        {
            totalbill = quantity*40;
        }
         if(fruit=="watermelon")
        {
            totalbill = quantity*30;
        }
    }
    cout<<"your total bill is: "<<totalbill<<endl;


}