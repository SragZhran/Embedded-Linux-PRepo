/*  description/comment   */
#include <iostream>
#include <array>
#include<algorithm>
using namespace std;





int main()
{
   //define a lambda
   auto lambda = [] (int x)->int {return x+200;};
  array<int,4> arr1= {1,4,2,5};
   int res = lambda(5);
   cout<<res<<endl;
/* keda fe 2 lambda w7da mesameha fe line 14 lambda , w w7da 3amelha define fe line 19 gwa el for_each*/
  for_each(arr1.begin(),arr1.end(),[](int& x){x+=500; cout<<x+500<<endl;});
  for (int value : arr1)
  {
    cout<<"el arr values b3d el lambda \n"<< value <<endl;
  }

 return 0;
}