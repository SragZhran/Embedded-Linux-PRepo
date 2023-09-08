#include <iostream>
#include <array>
using namespace std;

int main()
{
    char word[6]="hello";
    for(char element : word)
    {
        cout <<element<< endl ;
    }
 
 /*hena b2a negrb 7aga c++*/
   array<int,3> list;
   array<int,3> nums ={4,8,2};
    
    cout<<nums.size()<<"\n";
   for ( int i=0; i<nums.size();i++)
   {
     nums[i]=100;
     cout << nums[i]<<'\n';
   }
  
  /* aw b2a n3ml itterator w ana msh  fahm leh  bs aho 7aga msh fe el c*/

  array<int,3U>::iterator it;

  for(it = nums.begin(); it != nums.end(); it++)
  {
    *it=222;
  }

     for(int element : nums)
    {
        cout <<element<< endl ;
    }

}
