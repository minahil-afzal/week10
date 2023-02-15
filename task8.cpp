#include <iostream>
using namespace std;
main()
{
int size;
cout<<"enter size of array: ";
cin>>size;
string color[size];
for(int idx=0; idx<size; idx++)
{
    cout<<"enter color";
    cin>>color[idx];
}
int a=0;
int calculate;
calculate=(size*2)+(size-1);
for(int idx=0; idx<size; idx++)
{
    if(color[idx] == color[idx+1])
    {
        a++;
    } 

}
  cout<<calculate-a;
}