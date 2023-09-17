/*  description/comment   */
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

 void inputvector(vector<int> &vec)
 {
    for (int &val : vec)
    {
        cin>>val;
    }

 }


int main()
{
 //keda dh vector feh 3 elemnts w kolohm be zero OR vector <int> vec ; w keda yeb2a vector fady
 vector<int> vec(3,0);
 inputvector(vec);
 vec.push_back(388);
 vec.push_back(999);
 for_each(vec.begin(),vec.end(),[](int val){ cout<<"_"<<val<<endl;});
 return 0;
}