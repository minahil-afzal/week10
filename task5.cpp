#include <iostream>
using namespace std;
main()
{
string arr[4];
bool word;
for(int idx=0;idx<4;idx++)
{
    cout<<"enter your string";
    cin>>arr[idx];
}
for(int idx=0;idx<4;idx++)
{
    if(arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[3] && arr[3]==arr[0] )
    {
        word = true;
    }
   
}
if(word == true)
{
    cout<<"true";
}
else{
    cout<<"false";
}

}