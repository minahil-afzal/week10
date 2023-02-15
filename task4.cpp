#include <iostream>
using namespace std;
main()
{
    int number;
    cout << "enter number of array: ";
    cin >> number;
    int line[number];
    bool number7;
    for (int x = 0; x < number; x++)
    {
        cout << "enter number";
        cin >> line[x];
    }
    for (int x = 0; x < number; x++)
    {
        
          if (line[x] % 10 == 7);
        {
            number7 = true;
        }
    }
    if (number7 == true)
    {
        cout << "boom";
    }
    else
    {
        cout << "there is no 7 in array";
    }

}
