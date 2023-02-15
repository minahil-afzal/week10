#include <iostream>
using namespace std;
main()
{
string letterA;
string letterB;
cout<<"enter first letter ";
cin>>letterA;
cout<<"enter second letter ";
cin>>letterB;
int length1 =letterA.length();
int length2 =letterB.length();
int count=0;
for(int x=0;x<length1;x++)
{
    for(int y=0;y<length2;y++)
    {
        if ( letterA[x] == letterB[y])
        {
             count++;
             letterB[y]=' ';
             break;
        }
    }
}
cout<<count;
}