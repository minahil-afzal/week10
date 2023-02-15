#include<iostream>
using namespace std;
main()
{
    string word;
cout<<"enter line";
cin>>word;
int length;
length = word.length();
if ( length%2 == 0 )
{
    cout<<"true";
}
else
{
    cout<<"false";
}

}