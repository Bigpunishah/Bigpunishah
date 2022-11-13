#include <iostream>

using namespace std;

int main()
{
  int i = 58245332;
  int *ptr = &i;    // *ptr is 'pointing' to the memory location 'address' of int i;
  int num;          // just a random int


  *ptr = 1000;      // line 12: this 'pointer now has the value of 1000
  num = *ptr;       // this random integer "num" is now set to the *ptr which is set to 1000


  cout << i << endl;        //here we will see 'i' but look back at how the code is written
                            // the pointer (*ptr) on line 12 is being adjusted at int i's memory location
  cout << *ptr << endl;

  cout << num << endl;      // a pointer initially has a value of a memory location which is called a hex number
                            // a hex number is just the number which the computer calculates where something is stored within it's mmemory
    return 0;
}
