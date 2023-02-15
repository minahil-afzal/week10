#include <iostream>
using namespace std;
main()
{
    int number;
    int operation;
    int index;
    cout<<"enter number of array";
    cin>>number;

    cout<<"enter number of times operation to be performed";
    cin>>operation;
    int realnumber[number];
    
    for(int x=0;x<number;x++)
    {
        cout<<"enter number";
        cin>>realnumber[x];
    }

   for(int x=0;x<number;x++)
   {
    if(realnumber[x] % 2 == 0)
    {
        // cout<<realnumber[x]<<endl;
        for(int count =0;count<operation;count++)
        {
            realnumber[x]=realnumber[x]-2;
            // index=x;
            // cout<<realnumber[x];
        }
    }
    if(realnumber[x] % 2 != 0)
    {
        for(int count =0;count<operation;count++)
        {
            realnumber[x]=realnumber[x]+2;
            // index=x;
        }
    }
    
   }
//    cout<<realnumber[index]<<" ";
for(int idx=0;idx<number;idx++)
{
    cout<<realnumber[idx]<<" ";
}

}