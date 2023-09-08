/*  description/comment   */
#include <iostream>
#include <cstdlib>
using namespace std;


namespace calc 
{
    void add (int x,int y)
    {
        cout<< x << " + "<< y <<" = "<< x+y << endl;
    }

    void add (double x, double y)
    {
        cout<< x << " + "<< y <<" = "<< x+y << endl;
    }
     void sub (int x,int y)
    {
        cout<< x << " - "<< y <<" = "<< x-y << endl;
    }

    void sub (double x, double y)
    {
        cout<< x << " - "<< y <<" = "<< x-y << endl;
    }
    void reminder ( int x ,int y)
    {
        if ( y == 0){
            cerr<<"can't devide by zero "<<endl;
            
        }
        cout<< x << " - "<< y <<" = "<< x%y << endl;


    }
    void func_swap ( int &x, int &y)
    {
       int temp;
       temp =x ;
       x=y;
       y=temp ;
    }
    
}


int main()
{
 while(1)
 {
    int x =0, y=0 , option=0;
cout<<" kindly enter the operation number from the list below \n";
cout<<"1-Add \n2-Subtraction\n3-Reminder\n4-Swap \n";
cin>>option ;
if(option != 0)
{
cout<<"please enter 2 number"<<endl;
cin>> x >> y ;
}
switch(option)
{
    case 1 : calc::add(x,y); break;
    case 2 : calc::sub(x,y); break;
    case 3 : calc::reminder(x,y); break;
    case 4 : 
    calc::func_swap(x,y);
    cout<< "after swaping x = "<<x<<" and y ="<< y << endl;
     break;
     case 0 :
     cout<<"the program will exit"<<endl;
     exit(EXIT_FAILURE);
     break;
    default :
    cout<< " enter correct number ya 3am " << endl;
    break;
 }

}


 return 0;
}